#include "QtScriptAbstractClass.h"

#include <QScriptEngine>

#include "QtScriptUtils.h"

QtScriptAbstractClass::QtScriptAbstractClass(
	QScriptEngine *engine, const QByteArray &className)
	: QObject(engine)
	, QScriptClass(engine)
	, mClassName(QString::fromLatin1(className))
{
}

QScriptValue QtScriptAbstractClass::tryConstructObject(QScriptContext *context)
{
	auto engine = this->engine();
	if (!QtScriptUtils::checkArgumentCount(context,
			constructorArgumentCountMin(), constructorArgumentCountMax()))
	{
		return engine->uncaughtException();
	}

	auto result = newScriptObject(context);
	if (engine->hasUncaughtException())
		result = engine->uncaughtException();
	return result;
}

QString QtScriptAbstractClass::name() const
{
	return mClassName;
}

QScriptValue QtScriptAbstractClass::prototype() const
{
	return mProto;
}
