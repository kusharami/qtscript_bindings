#pragma once

#include <QObject>
#include <QScriptValue>
#include <QScriptEngine>
#include <QVariant>

#define CSTRKEY(key) #key
#define WSTRKEY(key) QT_UNICODE_LITERAL(CSTRKEY(key))
#define QBSTRKEY(key) QByteArrayLiteral(#key)
#define QSTRKEY(key) QStringLiteral(#key)

class QScriptContext;

struct QtScriptQVariantContainer
{
	QVariant data;
};

Q_DECLARE_METATYPE(QtScriptQVariantContainer)
Q_DECLARE_METATYPE(QtScriptQVariantContainer *)

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

	static QVariant scriptValueVariantData(const QScriptValue &value);
	static QScriptValue toScriptValueData(const QScriptValue &value);

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
		auto data = toScriptValueData(value);
		if (!data.isVariant())
			return nullptr;

		auto v = data.toVariant();

		if (v.userType() == qMetaTypeId<QtScriptQVariantContainer>())
		{
			auto c = qscriptvalue_cast<QtScriptQVariantContainer *>(data);
			Q_ASSERT(c);
			return const_cast<TT *>(
				reinterpret_cast<const TT *>(c->data.constData()));
		}

		if (v.userType() == qMetaTypeId<TT *>())
			return v.value<TT *>();

		return nullptr;
	}
};
