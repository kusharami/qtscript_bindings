#pragma once

#include "QtScriptAbstractClass.h"
#include <QScriptEngine>

template <typename T>
class QtScriptBaseClassPrototype : public QtScriptAbstractClass
{
public:
	using NativeObjectType = T;

protected:
	inline explicit QtScriptBaseClassPrototype(
		QScriptEngine *engine, const QByteArray &className)
		: QtScriptAbstractClass(engine, className)
	{
	}

	QScriptValue newInstance(const T &obj)
	{
		QScriptEngine *engine = this->engine();
		QScriptValue result = engine->newVariant(QVariant::fromValue(obj));
		result.setScriptClass(this);
		return result;
	}

	static T toBaseObject(const QScriptValue &value)
	{
		if (!value.isVariant())
		{
			return nullptr;
		}
		auto v = value.toVariant();
		if (v.userType() != qMetaTypeId<T>())
			return nullptr;

		return v.value<T>();
	}

	template <typename CLS_T, typename TT = typename CLS_T::NativeObjectType>
	static QScriptValue toScriptValue(QScriptEngine *engine, TT const &object)
	{
		T obj = object;
		QScriptValue proto = engine->defaultPrototype(qMetaTypeId<TT>());
		QtScriptBaseClassPrototype *cls =
			qobject_cast<CLS_T *>(proto.toQObject());
		Q_ASSERT(nullptr != cls);

		return cls->newInstance(obj);
	}

	template <typename TT,
		typename std::enable_if<std::is_pointer<TT>::value>::type * = nullptr>
	static void fromScriptValue(const QScriptValue &value, TT &out)
	{
		auto obj = toBaseObject(value);
		if (obj)
			Q_ASSERT(dynamic_cast<TT>(obj) != nullptr);
		out = static_cast<TT>(obj);
	}

	template <typename TT,
		typename std::enable_if<!std::is_pointer<TT>::value>::type * = nullptr>
	static void fromScriptValue(const QScriptValue &value, TT &out)
	{
		static_assert(std::is_same<T, TT>::value, "Non-inheritable class");
		out = toBaseObject(value);
	}

	template <typename TT>
	TT thiz() const
	{
		TT result;
		fromScriptValue<T>(this->thisObject(), result);
		return result;
	}

	template <typename TT, typename CLS_T,
		typename std::enable_if<std::is_pointer<TT>::value>::type * = 0>
	static void registerMetaType(QScriptEngine *engine)
	{
		qScriptRegisterMetaType<TT *>(engine,
			QtScriptBaseClassPrototype::toScriptValue<CLS_T, TT *>,
			QtScriptBaseClassPrototype::fromScriptValue<TT *>);
	}

	template <typename TT, typename CLS_T,
		typename std::enable_if<!std::is_pointer<TT>::value>::type * = 0>
	static void registerMetaType(QScriptEngine *engine)
	{
		static_assert(std::is_same<T, TT>::value, "Non-inheritable class");
		qScriptRegisterMetaType<TT>(engine,
			QtScriptBaseClassPrototype::toScriptValue<CLS_T>,
			QtScriptBaseClassPrototype::fromScriptValue<TT>);
	}

	template <typename TT, typename CLS_T>
	static QScriptValue RegisterT(
		QScriptValue targetNamespace, const QScriptValue &inherit)
	{
		Q_ASSERT(targetNamespace.isObject());
		auto engine = targetNamespace.engine();

		registerMetaType<TT, CLS_T>(engine);

		QScriptValue global = engine->globalObject();

		QtScriptBaseClassPrototype *obj = new CLS_T(engine);
		auto proto = engine->newQObject(obj, QScriptEngine::QtOwnership,
			QScriptEngine::ExcludeChildObjects |
				QScriptEngine::ExcludeDeleteLater |
				QScriptEngine::SkipMethodsInEnumeration |
				QScriptEngine::ExcludeSuperClassContents |
				QScriptEngine::ExcludeSlots);
		obj->mProto = proto;

		proto.setPrototype(inherit.isObject()
				? inherit
				: global.property(QStringLiteral("Object"))
					  .property(QStringLiteral("prototype")));

		engine->setDefaultPrototype(
			std::is_pointer<T>::value ? qMetaTypeId<TT *>() : qMetaTypeId<TT>(),
			proto);

		QScriptValue ctor =
			engine->newFunction(QtScriptAbstractClass::construct<CLS_T>, proto);
		ctor.setData(proto);
		targetNamespace.setProperty(obj->name(), ctor,
			QScriptValue::ReadOnly | QScriptValue::Undeletable);

		return ctor;
	}

	virtual bool constructObject(QScriptContext *context, T &out) = 0;

	virtual QScriptValue newScriptObject(QScriptContext *context) override
	{
		T newObject;
		if (!constructObject(context, newObject))
		{
			QScriptEngine *engine = this->engine();
			return engine->uncaughtException();
		}

		return this->newInstance(newObject);
	}
};
