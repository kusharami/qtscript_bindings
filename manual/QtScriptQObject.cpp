#include "QtScriptQObject.h"

#include "QtScriptUtils.h"

void QtScriptQObject::Register(const QScriptValue &targetNamespace)
{
	RegisterT<QObject, QtScriptQObject>(targetNamespace, QScriptValue());
}

QtScriptQObject::QtScriptQObject(QScriptEngine *engine)
	: QtScriptQObject(engine, "Object")
{
}

QtScriptQObject::QtScriptQObject(
	QScriptEngine *engine, const QByteArray &className)
	: QtScriptBaseClassPrototype(engine, className)
{
}

int QtScriptQObject::constructorArgumentCountMin() const
{
	return 0;
}

int QtScriptQObject::constructorArgumentCountMax() const
{
	return 1;
}

bool QtScriptQObject::constructObject(QScriptContext *context, QObject *&out)
{
	switch (context->argumentCount())
	{
		case 0:
		{
			out = new QObject;
			return true;
		}

		case 1:
		{
			auto arg = context->argument(0);
			if (!arg.isNull() && !arg.isQObject())
				break;

			out = new QObject(arg.toQObject());
			return true;
		}
	}

	QtScriptUtils::badArgumentsException(context, QBSTRKEY(QObject));
	return false;
}

QScriptValue QtScriptQObject::newScriptObject(QScriptContext *context)
{
	QScriptEngine *engine = this->engine();
	QObject *newObject;
	if (!constructObject(context, newObject))
	{
		return engine->uncaughtException();
	}

	return engine->newQObject(newObject, QScriptEngine::AutoOwnership,
		QScriptEngine::ExcludeDeleteLater |
			QScriptEngine::SkipMethodsInEnumeration |
			QScriptEngine::ExcludeSuperClassContents |
			QScriptEngine::ExcludeSlots);
}
