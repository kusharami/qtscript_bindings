#pragma once

#include <QObject>
#include <QScriptValue>
#include <QVariant>

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
		QScriptEngine *engine, const QByteArray &nslist);

	static QScriptValue variantToScriptValue(
		const QVariant &variant, QScriptEngine *engine);

	static QVariant scriptValueVariantData(QScriptValue value);

	template <typename ENUM_T>
	static QScriptValue enumToScriptValue(
		QScriptEngine *engine, const ENUM_T &in)
	{
		return QScriptValue(engine, qint32(in));
	}

	template <typename ENUM_T>
	static void enumFromScriptValue(const QScriptValue &object, ENUM_T &out)
	{
		out = ENUM_T(object.toInt32());
	}

	template <typename TT>
	static TT *scriptValueData(const QScriptValue &value)
	{
		auto v = scriptValueVariantData(value);

		if (v.userType() == qMetaTypeId<TT>())
			return reinterpret_cast<TT *>(v.data());

		if (v.userType() == qMetaTypeId<TT *>())
			return v.value<TT *>();

		return nullptr;
	}
};
