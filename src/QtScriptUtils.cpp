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
