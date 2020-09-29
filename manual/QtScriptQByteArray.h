#pragma once

#include "QtScriptBaseClassPrototype.h"

Q_DECLARE_METATYPE(QByteArray *)
Q_DECLARE_METATYPE(const QByteArray *)

class QtScriptQByteArray final : public QtScriptBaseClassPrototype<QByteArray>
{
	Q_OBJECT

	class PropertyIterator;

public:
	explicit QtScriptQByteArray(QScriptEngine *engine);
	static void Register(const QScriptValue &targetNamespace);

	static QByteArray *getByteArrayPtr(const QScriptValue &value);

	virtual QueryFlags queryProperty(const QScriptValue &object,
		const QScriptString &name, QueryFlags flags, uint *id) override;

	virtual QScriptValue property(const QScriptValue &object,
		const QScriptString &name, uint id) override;

	virtual void setProperty(QScriptValue &object, const QScriptString &name,
		uint id, const QScriptValue &value) override;

	virtual QScriptValue::PropertyFlags propertyFlags(
		const QScriptValue &, const QScriptString &name, uint) override;

	virtual QScriptClassPropertyIterator *newIterator(
		const QScriptValue &object) override;

	Q_INVOKABLE void clear();
	Q_INVOKABLE bool equals(const QByteArray &other);
	Q_INVOKABLE QByteArray left(int len) const;
	Q_INVOKABLE QByteArray mid(int pos, int len) const;
	Q_INVOKABLE QByteArray right(int len) const;
	Q_INVOKABLE QScriptValue remove(int pos, int len);
	Q_INVOKABLE QByteArray simplified() const;
	Q_INVOKABLE QByteArray toLower() const;
	Q_INVOKABLE QByteArray toUpper() const;
	Q_INVOKABLE QByteArray trimmed() const;
	Q_INVOKABLE void truncate(int pos);
	Q_INVOKABLE void chop(int n);
	Q_INVOKABLE QByteArray repeated(int times) const;
	Q_INVOKABLE QScriptValue split(const QScriptValue &separator);

	Q_INVOKABLE QByteArray replace(
		const QScriptValue &what, const QScriptValue &to) const;
	Q_INVOKABLE QByteArray replace(
		int index, int len, const QScriptValue &to) const;

	Q_INVOKABLE QString valueOf() const;
	Q_INVOKABLE QString toString() const;
	Q_INVOKABLE QString toStringLatin() const;
	Q_INVOKABLE QString toStringLocal() const;
	Q_INVOKABLE QString toString(const QByteArray &codecName) const;
	Q_INVOKABLE QByteArray toBase64() const;
	Q_INVOKABLE QByteArray toHex() const;
	Q_INVOKABLE QString toBase64Str() const;
	Q_INVOKABLE QString toHexStr() const;

	Q_INVOKABLE QString join(const QString &separator = QString(',')) const;
	Q_INVOKABLE QScriptValue pop();
	Q_INVOKABLE QScriptValue reverse();
	Q_INVOKABLE QScriptValue shift();
	Q_INVOKABLE QByteArray slice(int start = 0, int end = 0x7FFFFFFF) const;
	Q_INVOKABLE QScriptValue sort(QScriptValue compareFn = QScriptValue());
	Q_INVOKABLE int indexOf(
		const QScriptValue &search, int fromIndex = 0) const;
	Q_INVOKABLE int lastIndexOf(
		const QScriptValue &search, int fromIndex = 0x7FFFFFFF) const;
	Q_INVOKABLE bool every(QScriptValue callback,
		const QScriptValue &thisObject = QScriptValue()) const;
	Q_INVOKABLE bool some(QScriptValue callback,
		const QScriptValue &thisObject = QScriptValue()) const;
	Q_INVOKABLE void forEach(QScriptValue callback,
		const QScriptValue &thisObject = QScriptValue()) const;
	Q_INVOKABLE QScriptValue map(QScriptValue callback,
		const QScriptValue &thisObject = QScriptValue()) const;
	Q_INVOKABLE QByteArray mapBytes(QScriptValue callback,
		const QScriptValue &thisObject = QScriptValue()) const;
	Q_INVOKABLE QByteArray filter(QScriptValue callback,
		const QScriptValue &thisObject = QScriptValue()) const;
	Q_INVOKABLE QScriptValue reduce(QScriptValue callback,
		const QScriptValue &initialValue = QScriptValue()) const;
	Q_INVOKABLE QScriptValue reduceRight(QScriptValue callback,
		const QScriptValue &initialValue = QScriptValue()) const;

protected:
	virtual int constructorArgumentCountMin() const override;
	virtual int constructorArgumentCountMax() const override;
	virtual bool constructObject(
		QScriptContext *context, QByteArray &out) override;

	static void fromScriptValue(const QScriptValue &value, QByteArray &out);
	static void fromScriptValueAppend(
		const QScriptValue &value, QByteArray &out);

	static QScriptValue toScriptValue(
		QScriptEngine *engine, const QByteArray &object);

private:
	static QString className();

	QScriptValue newInstance(int size = 0, char init = 0);

	static QByteArray scriptValueToByteArray(const QScriptValue &value);

	static int convertIndex(const QByteArray &ba, int index);

	QByteArray *thisByteArray() const;

	static QByteArray *thisByteArray(QScriptContext *context);

	static QTextCodec *scriptValueToTextCodec(const QScriptValue &value);

	static QScriptValue fromBase64(
		QScriptContext *context, QScriptEngine *engine);
	static QScriptValue fromHex(QScriptContext *context, QScriptEngine *engine);

	//concat([item1 [, item2 [, ...]]])
	static QScriptValue concat(QScriptContext *context, QScriptEngine *engine);

	//push([item1 [, item2 [, ...]]])
	static QScriptValue push(QScriptContext *context, QScriptEngine *engine);

	//unshift([item1 [, item2 [, ...]]])
	static QScriptValue unshift(QScriptContext *context, QScriptEngine *engine);

	//splice(start, deleteCount[, item1 [, item2 [, ...]]])
	static QScriptValue splice(QScriptContext *context, QScriptEngine *engine);

	static char scriptValueToChar(
		const QScriptValue &value, bool *okPtr = nullptr);

	void resize(QByteArray &ba, int newSize);

private:
	QScriptString length;
};
