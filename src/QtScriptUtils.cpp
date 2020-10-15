#include "QtScriptUtils.h"

#include <QScriptContext>
#include <QScriptEngine>
#include <QMetaProperty>

QScriptValue QtScriptUtils::noPublicConstructorException(
	QScriptContext *context, const QByteArray &className)
{
	Q_ASSERT(context);
	return context->throwError(tr("No public constructor for class %1")
								   .arg(QString::fromLatin1(className)));
}

QScriptValue QtScriptUtils::unknownError(QScriptContext *context)
{
	Q_ASSERT(context);
	return context->throwError(tr("Unknown error"));
}

QScriptValue QtScriptUtils::calledConstructorWithoutNewError(
	QScriptContext *context, const QByteArray &className)
{
	return calledConstructorWithoutNewError(
		context, QString::fromLatin1(className));
}

QScriptValue QtScriptUtils::calledConstructorWithoutNewError(
	QScriptContext *context, const QString &className)
{
	Q_ASSERT(context);
	return context->throwError(
		tr("Constructor %1 is called without 'new'").arg(className));
}

QScriptValue QtScriptUtils::badArgumentsException(
	QScriptContext *context, const QByteArray &functionName)
{
	Q_ASSERT(context);
	return context->throwError(
		tr("Bad arguments for %1 call").arg(QString::fromLatin1(functionName)));
}

bool QtScriptUtils::isArgumentCountLessThan(
	QScriptContext *context, int minArgs)
{
	Q_ASSERT(context);
	if (context->argumentCount() < minArgs)
	{
		context->throwError(
			tr("Expected at least %1 arguments, but %2 provided")
				.arg(minArgs)
				.arg(context->argumentCount()));
		return true;
	}

	return false;
}

bool QtScriptUtils::isArgumentCountGreaterThan(
	QScriptContext *context, int maxArgs)
{
	Q_ASSERT(context);
	if (context->argumentCount() > maxArgs)
	{
		context->throwError(tr("Expected at most %1 arguments, but %2 provided")
								.arg(maxArgs)
								.arg(context->argumentCount()));
		return true;
	}

	return false;
}

bool QtScriptUtils::checkArgumentCount(
	QScriptContext *context, int minArgs, int maxArgs)
{
	if (isArgumentCountLessThan(context, minArgs) ||
		isArgumentCountGreaterThan(context, maxArgs))
	{
		return false;
	}
	return true;
}

QScriptValue QtScriptUtils::getNamespaceObject(
	QScriptEngine *engine, const QByteArray &nslist)
{
	auto result = engine->globalObject();
	if (!nslist.isEmpty())
	{
		for (const auto &cns : nslist.split('.'))
		{
			auto ns = engine->toStringHandle(QString::fromLatin1(cns));
			auto sv = result.property(ns);
			if (!sv.isObject())
			{
				sv = engine->newObject();
				result.setProperty(
					ns, sv, QScriptValue::ReadOnly | QScriptValue::Undeletable);
			}
			result = sv;
		}
	}
	return result;
}

QScriptValue QtScriptUtils::variantToScriptValue(
	const QVariant &variant, QScriptEngine *engine)
{
	QScriptValue result;

	switch (int(variant.type()))
	{
		case QVariant::Map:
		{
			auto vmap = variant.toMap();

			result = engine->newObject();

			for (auto it = vmap.cbegin(); it != vmap.cend(); ++it)
			{
				auto &key = it.key();
				auto &value = it.value();

				result.setProperty(key, variantToScriptValue(value, engine));
			}
			break;
		}

		case QVariant::List:
		case QVariant::StringList:
		{
			auto vlist = variant.toList();

			int len = vlist.length();
			result = engine->newArray(len);

			for (int i = 0; i < len; i++)
			{
				auto &value = vlist.at(i);

				result.setProperty(i, variantToScriptValue(value, engine));
			}
			break;
		}

		case QVariant::Bool:
			result = QScriptValue(engine, variant.toBool());
			break;

		case QVariant::Int:
			result = QScriptValue(engine, variant.toInt());
			break;

		case QVariant::UInt:
			result = QScriptValue(engine, variant.toUInt());
			break;

		case QVariant::LongLong:
		case QVariant::ULongLong:
		case QVariant::Double:
		case QMetaType::Float:
			result = QScriptValue(engine, variant.toDouble());
			break;

		case QVariant::Char:
		case QVariant::String:
			result = QScriptValue(engine, variant.toString());
			break;

		default:
			if (variant.isNull() || !variant.isValid())
				result = QScriptValue(engine, QScriptValue::NullValue);
			else
				result = engine->newVariant(variant);
			break;
	}

	return result;
}

QVariant QtScriptUtils::scriptValueToVariant(const QScriptValue &sv, int type)
{
	QVariant result(type, nullptr);
	if (!qscriptvalue_cast_helper(sv, type, result.data()))
	{
		result = sv.toVariant();
		if (result.userType() == qMetaTypeId<QtScriptQVariantContainer>())
		{
			result = result.value<QtScriptQVariantContainer>().data;
		}
		if (result.userType() != type)
		{
			if (!result.convert(type))
			{
				result = QVariant(type, nullptr);
			}
		}
	}

	return result;
}

QVariant QtScriptUtils::scriptValueToVariant(const QScriptValue &sv)
{
	if (!sv.isValid() || sv.isUndefined() || sv.isNull())
	{
		return QVariant();
	}

	if (sv.isQObject())
	{
		return QVariant::fromValue(sv.toQObject());
	}

	if (sv.isQMetaObject())
	{
		auto metaObject = sv.toQMetaObject();
		if (!metaObject)
		{
			return QVariant();
		}
		return QVariant::fromValue(
			QString::fromLatin1(metaObject->className()));
	}

	if (sv.scriptClass())
	{
		auto v = QtScriptUtils::scriptValueVariantData(sv);
		if (!v.isValid())
			return v;

		if (v.userType() == qMetaTypeId<QtScriptQVariantContainer>())
		{
			v = v.value<QtScriptQVariantContainer>().data;
		}
		return v;
	}

	return sv.toVariant();
}

QVariant QtScriptUtils::scriptValueVariantData(const QScriptValue &value)
{
	auto data = toScriptValueData(value);

	if (data.isVariant())
		return data.toVariant();

	return QVariant();
}

QScriptValue QtScriptUtils::toScriptValueData(const QScriptValue &value)
{
	if (value.isVariant())
		return value;

	if (value.isObject())
		return value.data();

	return QScriptValue();
}

QScriptValue QtScriptUtils::copyScriptValue(const QScriptValue &src)
{
	if (!src.isObject())
	{
		return src;
	}

	auto variant = scriptValueToVariant(src);
	return variantToScriptValue(variant, src.engine());
}
