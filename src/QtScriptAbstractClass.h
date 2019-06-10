#pragma once

#include <QScriptable>
#include <QScriptClass>
#include <QScriptContext>

class QtScriptAbstractClass
	: public QObject
	, public QScriptable
	, public QScriptClass
{
	Q_OBJECT

public:
	QScriptEngine *engine() const;

	// QScriptClass
	virtual QString name() const override;
	virtual QScriptValue prototype() const override;

protected:
	explicit QtScriptAbstractClass(
		QScriptEngine *engine, const QByteArray &className);

	virtual int constructorArgumentCountMin() const = 0;
	virtual int constructorArgumentCountMax() const = 0;
	virtual QScriptValue newScriptObject(QScriptContext *context) = 0;

	QScriptValue tryConstructObject(QScriptContext *context);

	template <typename CLS_T>
	static QScriptValue construct(QScriptContext *ctx, QScriptEngine *)
	{
		QtScriptAbstractClass *cls =
			qobject_cast<CLS_T *>(ctx->callee().data().toQObject());
		Q_ASSERT(cls);

		return cls->tryConstructObject(ctx);
	}

protected:
	QScriptValue mProto;
	QString mClassName;
};

inline QScriptEngine *QtScriptAbstractClass::engine() const
{
	return QScriptClass::engine();
}
