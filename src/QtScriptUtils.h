#pragma once

#include <QObject>
#include <QScriptValue>

#define CSTRKEY(key) #key
#define WSTRKEY(key) QT_UNICODE_LITERAL(CSTRKEY(key))
#define QBSTRKEY(key) QByteArrayLiteral(#key)
#define QSTRKEY(key) QStringLiteral(#key)

class QScriptContext;

class QtScriptUtils : public QObject
{
	Q_OBJECT

public:
	static QScriptValue noPublicConstructorException(
		QScriptContext *context, const QByteArray &className);
	static QScriptValue unknownError(QScriptContext *context);
	static QScriptValue badArgumentsException(
		QScriptContext *context, const QByteArray &functionName);
	static bool isArgumentCountLessThan(QScriptContext *context, int minArgs);
	static bool isArgumentCountGreaterThan(
		QScriptContext *context, int maxArgs);
	static bool checkArgumentCount(
		QScriptContext *context, int minArgs, int maxArgs);
	static QScriptValue getNamespaceObject(
		QScriptEngine *engine, std::initializer_list<const char *> ns_list);
};
