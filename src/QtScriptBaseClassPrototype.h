#pragma once

#include "QtScriptAbstractClass.h"
#include <QScriptEngine>

#include <memory>

template <class T, bool hasPrivateDestructor, class Enable = void>
struct qtscript_proto_ptr_type_t
{
};

template <typename T, bool hasPrivateDestructor>
struct qtscript_proto_ptr_type_t<T, hasPrivateDestructor,
	typename std::enable_if<std::is_pointer<T>::value &&
		(hasPrivateDestructor ||
			std::is_base_of<QObject,
				typename std::remove_pointer<T>::type>::value)>::type>
{
	using ptr_type = T;
	using storage_type = T;
};

template <typename T, bool hasPrivateDestructor>
struct qtscript_proto_ptr_type_t<T, hasPrivateDestructor,
	typename std::enable_if<!hasPrivateDestructor &&
		std::is_pointer<T>::value &&
		!std::is_base_of<QObject,
			typename std::remove_pointer<T>::type>::value>::type>
{
	using ptr_type = T;
	using storage_type = std::shared_ptr<typename std::remove_pointer<T>::type>;
};

template <typename T, bool hasPrivateDestructor>
struct qtscript_proto_ptr_type_t<T, hasPrivateDestructor,
	typename std::enable_if<!std::is_pointer<T>::value>::type>
{
	using ptr_type = T *;
	using storage_type = T;
};

template <typename T, bool hasPrivateDestructor = false>
class QtScriptBaseClassPrototype : public QtScriptAbstractClass
{
public:
	using NativeObjectType = T;
	using StorageType = typename qtscript_proto_ptr_type_t<T,
		hasPrivateDestructor>::storage_type;
	using PointerType =
		typename qtscript_proto_ptr_type_t<T, hasPrivateDestructor>::ptr_type;

protected:
	inline explicit QtScriptBaseClassPrototype(
		QScriptEngine *engine, const QByteArray &className)
		: QtScriptAbstractClass(engine, className)
	{
	}

	template <typename TT,
		typename std::enable_if<std::is_pointer<TT>::value &&
			std::is_base_of<QObject, typename std::remove_pointer<TT>::type>::
				value>::type * = nullptr>
	QScriptValue newInstance(TT obj, bool construct = false)
	{
		Q_ASSERT(obj);
		QScriptEngine *engine = this->engine();
		QScriptEngine::QObjectWrapOptions wrapOptions(
			QScriptEngine::ExcludeDeleteLater |
			QScriptEngine::SkipMethodsInEnumeration |
			QScriptEngine::ExcludeSuperClassContents);

		if (!construct)
			wrapOptions |= QScriptEngine::PreferExistingWrapperObject;

		return engine->newQObject(obj, QScriptEngine::QtOwnership,
			QScriptEngine::ExcludeDeleteLater |
				QScriptEngine::SkipMethodsInEnumeration |
				QScriptEngine::ExcludeSuperClassContents);
	}

	template <typename TT,
		typename std::enable_if<std::is_pointer<TT>::value &&
			!std::is_same<StorageType, T>::value &&
			!std::is_base_of<QObject, typename std::remove_pointer<TT>::type>::
				value>::type * = nullptr>
	QScriptValue newInstance(TT obj, bool construct = false)
	{
		QScriptEngine *engine = this->engine();

		QVariant v = construct ? QVariant::fromValue(StorageType(obj))
							   : QVariant::fromValue(static_cast<T>(obj));
		QScriptValue result = engine->newVariant(v);
		result.setScriptClass(this);
		return result;
	}

	template <typename TT,
		typename std::enable_if<!std::is_pointer<TT>::value ||
			(std::is_same<StorageType, T>::value &&
				!std::is_base_of<QObject,
					typename std::remove_pointer<TT>::type>::value)>::type * =
			nullptr>
	QScriptValue newInstance(TT const &obj, bool construct = false)
	{
		Q_UNUSED(construct);
		QScriptEngine *engine = this->engine();
		QScriptValue result = engine->newVariant(QVariant::fromValue(obj));
		result.setScriptClass(this);
		return result;
	}

	template <typename CLS_T, typename TT,
		typename std::enable_if<!std::is_pointer<TT>::value ||
			std::is_pointer<T>::value>::type * = nullptr>
	static QScriptValue toScriptValue(QScriptEngine *engine, TT const &object)
	{
		QScriptValue proto = engine->defaultPrototype(qMetaTypeId<TT>());
		QtScriptBaseClassPrototype *cls =
			qobject_cast<CLS_T *>(proto.toQObject());
		Q_ASSERT(nullptr != cls);

		return cls->newInstance(object);
	}

	template <typename CLS_T, typename TT,
		typename std::enable_if<std::is_pointer<TT>::value &&
			!std::is_pointer<T>::value>::type * = nullptr>
	static QScriptValue toScriptValue(QScriptEngine *engine, TT const &object)
	{
		if (object)
			engine->toScriptValue(*object);

		return engine->nullValue();
	}

	template <typename TT,
		typename std::enable_if<std::is_pointer<TT>::value &&
			std::is_base_of<QObject, typename std::remove_pointer<TT>::type>::
				value>::type * = nullptr>
	static void fromScriptValue(const QScriptValue &value, TT &out)
	{
		auto obj = value.toQObject();
		if (obj)
			Q_ASSERT(dynamic_cast<TT>(obj) != nullptr);
		out = static_cast<TT>(obj);
	}

	template <typename TT,
		typename std::enable_if<std::is_pointer<TT>::value &&
			std::is_same<T, StorageType>::value &&
			!std::is_base_of<QObject, typename std::remove_pointer<TT>::type>::
				value>::type * = nullptr>
	static void fromScriptValue(const QScriptValue &value, TT &out)
	{
		static_assert(std::is_base_of<typename std::remove_pointer<T>::type,
						  typename std::remove_pointer<TT>::type>::value,
			"Wrong type");
		out = nullptr;
		if (!value.isVariant())
		{
			return;
		}

		auto v = value.toVariant();
		if (v.userType() != qMetaTypeId<T>())
			return;

		auto obj = v.value<PointerType>();
		if (obj)
			Q_ASSERT(dynamic_cast<TT>(obj) != nullptr);
		out = static_cast<TT>(obj);
	}

	template <typename TT,
		typename std::enable_if<std::is_pointer<TT>::value &&
			!std::is_same<T, StorageType>::value &&
			!std::is_base_of<QObject, typename std::remove_pointer<TT>::type>::
				value>::type * = nullptr>
	static void fromScriptValue(const QScriptValue &value, TT &out)
	{
		static_assert(std::is_base_of<typename std::remove_pointer<T>::type,
						  typename std::remove_pointer<TT>::type>::value,
			"Wrong type");
		out = nullptr;
		if (!value.isVariant())
		{
			return;
		}

		PointerType obj;
		auto v = value.toVariant();
		int userType = v.userType();
		if (userType == qMetaTypeId<T>())
		{
			obj = v.value<PointerType>();
		} else if (userType == qMetaTypeId<StorageType>())
		{
			obj = v.value<StorageType>().get();
		}

		if (obj)
			Q_ASSERT(dynamic_cast<TT>(obj) != nullptr);
		out = static_cast<TT>(obj);
	}

	template <typename TT,
		typename std::enable_if<!std::is_pointer<TT>::value>::type * = nullptr>
	static void fromScriptValue(const QScriptValue &value, TT &out)
	{
		static_assert(std::is_same<T, TT>::value, "Wrong type");
		if (!value.isVariant())
		{
			return;
		}
		auto v = value.toVariant();
		if (v.userType() != qMetaTypeId<TT>())
			return;

		out = v.value<TT>();
	}

	template <typename TT>
	TT thiz() const
	{
		static_assert(std::is_pointer<TT>::value, "Wrong pointer type");
		TT result;
		fromScriptValue<TT>(this->thisObject(), result);
		return result;
	}

	template <typename TT, typename CLS_T>
	static void registerPointerMetaType(QScriptEngine *engine)
	{
		qScriptRegisterMetaType<TT *>(engine,
			QtScriptBaseClassPrototype::toScriptValue<CLS_T, TT *>,
			QtScriptBaseClassPrototype::fromScriptValue<TT *>);

		typedef QScriptValue (*ToScriptValue)(QScriptEngine *, TT *const &);
		typedef void (*FromScriptValue)(const QScriptValue &, TT *&);

		typedef QScriptValue (*ConstToScriptValue)(
			QScriptEngine *, const TT *const &);
		typedef void (*ConstFromScriptValue)(const QScriptValue &, const TT *&);

		qScriptRegisterMetaType<const TT *>(engine,
			reinterpret_cast<ConstToScriptValue>(static_cast<ToScriptValue>(
				&QtScriptBaseClassPrototype::toScriptValue<CLS_T, TT *>)),
			reinterpret_cast<ConstFromScriptValue>(static_cast<FromScriptValue>(
				&QtScriptBaseClassPrototype::fromScriptValue<TT *>)));
	}

	template <typename SELF_T, typename TT, typename CLS_T,
		typename std::enable_if<std::is_pointer<SELF_T>::value>::type * = 0>
	static void registerMetaType(
		QScriptEngine *engine, const QScriptValue &proto)
	{
		static_assert(std::is_same<SELF_T, T>::value, "Wrong type");

		engine->setDefaultPrototype(qMetaTypeId<TT *>(), proto);

		registerPointerMetaType<TT, CLS_T>(engine);
	}

	template <typename SELF_T, typename TT, typename CLS_T,
		typename std::enable_if<!std::is_pointer<SELF_T>::value>::type * = 0>
	static void registerMetaType(
		QScriptEngine *engine, const QScriptValue &proto)
	{
		static_assert(std::is_same<SELF_T, T>::value, "Wrong type");
		static_assert(std::is_same<SELF_T, TT>::value, "Non-inheritable class");

		engine->setDefaultPrototype(qMetaTypeId<TT>(), proto);

		registerPointerMetaType<TT, CLS_T>(engine);
	}

	template <typename TT, typename CLS_T>
	static QScriptValue RegisterT(
		QScriptValue targetNamespace, const QScriptValue &inherit)
	{
		Q_ASSERT(targetNamespace.isObject());
		auto engine = targetNamespace.engine();

		QtScriptBaseClassPrototype *obj = new CLS_T(engine);
		QScriptValue proto = engine->newQObject(obj, QScriptEngine::QtOwnership,
			QScriptEngine::ExcludeChildObjects |
				QScriptEngine::ExcludeDeleteLater |
				QScriptEngine::SkipMethodsInEnumeration |
				QScriptEngine::ExcludeSuperClassContents |
				QScriptEngine::ExcludeSlots);
		obj->mProto = proto;

		proto.setPrototype(inherit.isObject()
				? inherit
				: engine->globalObject()
					  .property(QStringLiteral("Object"))
					  .property(QStringLiteral("prototype")));

		registerMetaType<T, TT, CLS_T>(engine, proto);

		QScriptValue ctor =
			engine->newFunction(QtScriptAbstractClass::construct<CLS_T>, proto);
		ctor.setData(proto);
		targetNamespace.setProperty(obj->mClassName, ctor,
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

		return this->newInstance(newObject, true);
	}
};
