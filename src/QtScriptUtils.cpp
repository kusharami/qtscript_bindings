#include "QtScriptUtils.h"

#include <QScriptContext>
#include <QScriptEngine>

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

			for (auto it = vmap.begin(); it != vmap.end(); ++it)
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

QVariant QtScriptUtils::scriptValueVariantData(QScriptValue value)
{
	if (!value.isVariant() && value.isObject())
		value = value.data();

	if (value.isVariant())
		return value.toVariant();

	return QVariant();
}
