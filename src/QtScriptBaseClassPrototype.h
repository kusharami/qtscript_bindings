#pragma once

#include "QtScriptAbstractClass.h"
#include "QtScriptUtils.h"
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
			return engine->toScriptValue(*object);

		return engine->nullValue();
	}

	template <typename TT,
		typename std::enable_if<std::is_pointer<TT>::value &&
			std::is_base_of<QObject, typename std::remove_pointer<TT>::type>::
				value>::type * = nullptr>
	static void fromScriptValue(const QScriptValue &value, TT &out)
	{
		out = qobject_cast<TT>(value.toQObject());
	}

	template <typename TT,
		typename std::enable_if<std::is_pointer<TT>::value &&
			!std::is_same<T, PointerType>::value &&
			std::is_same<T, StorageType>::value &&
			!std::is_base_of<QObject, typename std::remove_pointer<TT>::type>::
				value>::type * = nullptr>
	static void fromScriptValue(const QScriptValue &value, TT &out)
	{
		static_assert(
			std::is_base_of<T, typename std::remove_pointer<TT>::type>::value,
			"Wrong type");
		out = dynamic_cast<TT>(QtScriptUtils::scriptValueData<T>(value));
	}

	template <typename TT,
		typename std::enable_if<std::is_pointer<TT>::value &&
			std::is_same<T, PointerType>::value &&
			std::is_same<T, StorageType>::value &&
			!std::is_base_of<QObject, typename std::remove_pointer<TT>::type>::
				value>::type * = nullptr>
	static void fromScriptValue(const QScriptValue &value, TT &out)
	{
		static_assert(std::is_base_of<typename std::remove_pointer<T>::type,
						  typename std::remove_pointer<TT>::type>::value,
			"Wrong type");
		out = nullptr;
		auto v = QtScriptUtils::scriptValueVariantData(value);
		if (!v.isValid())
			return;

		if (v.userType() != qMetaTypeId<T>())
			return;

		out = dynamic_cast<TT>(v.value<T>());
	}

	template <typename TT,
		typename std::enable_if<std::is_pointer<TT>::value &&
			std::is_same<T, PointerType>::value &&
			!std::is_same<T, StorageType>::value &&
			!std::is_base_of<QObject, typename std::remove_pointer<TT>::type>::
				value>::type * = nullptr>
	static void fromScriptValue(const QScriptValue &value, TT &out)
	{
		static_assert(std::is_base_of<typename std::remove_pointer<T>::type,
						  typename std::remove_pointer<TT>::type>::value,
			"Wrong type");
		out = nullptr;
		auto v = QtScriptUtils::scriptValueVariantData(value);
		if (!v.isValid())
			return;

		PointerType obj = nullptr;
		int userType = v.userType();
		if (userType == qMetaTypeId<T>())
		{
			obj = v.value<T>();
		} else if (userType == qMetaTypeId<StorageType>())
		{
			obj = v.value<StorageType>().get();
		}

		out = dynamic_cast<TT>(obj);
	}

	template <typename TT,
		typename std::enable_if<!std::is_pointer<TT>::value>::type * = nullptr>
	static void fromScriptValue(const QScriptValue &value, TT &out)
	{
		static_assert(std::is_same<T, TT>::value, "Wrong type");
		auto v = QtScriptUtils::scriptValueVariantData(value);
		if (!v.isValid())
			return;

		if (v.userType() == qMetaTypeId<QtScriptQVariantContainer>())
		{
			v = v.value<QtScriptQVariantContainer>().data;
		}

		if (!v.canConvert(qMetaTypeId<TT>()))
			return;

		out = v.value<TT>();
	}

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
	QScriptValue newInstance(
		TT obj, const QScriptValue &thisObject = QScriptValue())
	{
		QScriptEngine *engine = this->engine();
		bool construct = thisObject.isObject();
		if (construct)
		{
			Q_ASSERT(obj);
		} else if (!obj)
		{
			return engine->nullValue();
		}
		QScriptEngine::QObjectWrapOptions wrapOptions(
			QScriptEngine::ExcludeDeleteLater |
			QScriptEngine::SkipMethodsInEnumeration |
			QScriptEngine::ExcludeSuperClassContents |
			QScriptEngine::ExcludeSlots);

		if (!construct)
			wrapOptions |= QScriptEngine::PreferExistingWrapperObject;

		if (construct)
		{
			return engine->newQObject(
				thisObject, obj, QScriptEngine::AutoOwnership, wrapOptions);
		}
		return engine->newQObject(obj, QScriptEngine::QtOwnership, wrapOptions);
	}

	template <typename TT,
		typename std::enable_if<std::is_pointer<TT>::value &&
			!std::is_same<StorageType, T>::value &&
			!std::is_base_of<QObject, typename std::remove_pointer<TT>::type>::
				value>::type * = nullptr>
	QScriptValue newInstance(TT obj, QScriptValue thisObject = QScriptValue())
	{
		QScriptEngine *engine = this->engine();
		bool construct = thisObject.isObject();
		if (construct)
		{
			Q_ASSERT(obj);
		} else if (!obj)
		{
			return engine->nullValue();
		}

		if (construct)
		{
			auto v = QVariant::fromValue(StorageType(obj));
			thisObject.setScriptClass(this);
			thisObject.setData(engine->newVariant(v));
			return thisObject;
		}

		auto v = QVariant::fromValue(static_cast<T>(obj));
		return engine->newObject(this, engine->newVariant(v));
	}

	template <typename TT,
		typename std::enable_if<!std::is_pointer<TT>::value>::type * = nullptr>
	QScriptValue newInstance(
		TT const &obj, QScriptValue thisObject = QScriptValue())
	{
		bool construct = thisObject.isObject();

		QScriptEngine *engine = this->engine();
		auto v = QVariant::fromValue(obj);
		v = QVariant::fromValue(QtScriptQVariantContainer{ v });
		auto data = engine->newVariant(v);
		if (construct)
		{
			thisObject.setScriptClass(this);
			thisObject.setData(data);
			return thisObject;
		}
		return engine->newObject(this, data);
	}

	template <typename TT,
		typename std::enable_if<std::is_pointer<TT>::value &&
			std::is_same<StorageType, T>::value &&
			!std::is_base_of<QObject, typename std::remove_pointer<TT>::type>::
				value>::type * = nullptr>
	QScriptValue newInstance(TT obj, QScriptValue thisObject = QScriptValue())
	{
		bool construct = thisObject.isObject();
		QScriptEngine *engine = this->engine();
		if (construct)
		{
			Q_ASSERT(obj);
		} else if (!obj)
		{
			return engine->nullValue();
		}
		auto v = QVariant::fromValue(obj);
		auto data = engine->newVariant(v);
		if (construct)
		{
			thisObject.setScriptClass(this);
			thisObject.setData(data);
			return thisObject;
		}
		return engine->newObject(this, data);
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
	static void registerPointerMetaType(
		QScriptEngine *engine, const QScriptValue &proto)
	{
		qScriptRegisterMetaType<TT *>(engine,
			QtScriptBaseClassPrototype::toScriptValue<CLS_T, TT *>,
			QtScriptBaseClassPrototype::fromScriptValue<TT *>, proto);

		typedef QScriptValue (*ToScriptValue)(QScriptEngine *, TT *const &);
		typedef void (*FromScriptValue)(const QScriptValue &, TT *&);

		typedef QScriptValue (*ConstToScriptValue)(
			QScriptEngine *, const TT *const &);
		typedef void (*ConstFromScriptValue)(const QScriptValue &, const TT *&);

		qScriptRegisterMetaType<const TT *>(engine,
			reinterpret_cast<ConstToScriptValue>(static_cast<ToScriptValue>(
				&QtScriptBaseClassPrototype::toScriptValue<CLS_T, TT *>)),
			reinterpret_cast<ConstFromScriptValue>(static_cast<FromScriptValue>(
				&QtScriptBaseClassPrototype::fromScriptValue<TT *>)),
			proto);
	}

	template <typename SELF_T, typename TT, typename CLS_T,
		typename std::enable_if<std::is_pointer<SELF_T>::value>::type * =
			nullptr>
	static void registerMetaType(
		QScriptEngine *engine, const QScriptValue &proto)
	{
		static_assert(std::is_same<SELF_T, T>::value, "Wrong type");

		registerPointerMetaType<TT, CLS_T>(engine, proto);
	}

	template <typename SELF_T, typename TT, typename CLS_T,
		typename std::enable_if<!std::is_pointer<SELF_T>::value>::type * =
			nullptr>
	static void registerMetaType(
		QScriptEngine *engine, const QScriptValue &proto)
	{
		static_assert(std::is_same<SELF_T, T>::value, "Wrong type");
		static_assert(std::is_same<SELF_T, TT>::value, "Non-inheritable class");

		qScriptRegisterMetaType<TT>(engine,
			QtScriptBaseClassPrototype::toScriptValue<CLS_T, TT>,
			QtScriptBaseClassPrototype::fromScriptValue<TT>, proto);

		registerPointerMetaType<TT, CLS_T>(engine, proto);
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

		if (inherit.isObject())
			proto.setPrototype(inherit);

		registerMetaType<T, TT, CLS_T>(engine, proto);

		QScriptValue ctor =
			engine->newFunction(QtScriptAbstractClass::construct<CLS_T>, proto);
		ctor.setData(proto);
		targetNamespace.setProperty(obj->mClassName, ctor,
			QScriptValue::ReadOnly | QScriptValue::Undeletable);

		obj->mConstructor = ctor;
		return ctor;
	}

	virtual bool constructObject(QScriptContext *context, T &out) = 0;

	virtual QScriptValue newScriptObject(QScriptContext *context) override
	{
		T newObject;
		if (!constructObject(context, newObject))
		{
			QScriptEngine *engine = this->engine();
			Q_ASSERT(engine->hasUncaughtException());
			return engine->uncaughtException();
		}

		return this->newInstance(newObject, context->thisObject());
	}
};
