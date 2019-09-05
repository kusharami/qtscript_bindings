#pragma once

#include "QtScriptBaseClassPrototype.h"

Q_DECLARE_METATYPE(const QObject *)

class QtScriptQObject : public QtScriptBaseClassPrototype<QObject *>
{
	Q_OBJECT

public:
	explicit QtScriptQObject(QScriptEngine *engine);
	static void Register(const QScriptValue &targetNamespace);

protected:
	explicit QtScriptQObject(
		QScriptEngine *engine, const QByteArray &className);

	virtual int constructorArgumentCountMin() const override;
	virtual int constructorArgumentCountMax() const override;
	virtual bool constructObject(
		QScriptContext *context, QObject *&out) override;

	virtual QScriptValue newScriptObject(QScriptContext *context) override;
};
