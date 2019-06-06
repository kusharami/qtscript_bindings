#pragma once

#include "QtScriptBaseClassPrototype.h"

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

public slots:
	void clear();

	bool equals(const QByteArray &other);
	QByteArray left(int len) const;
	QByteArray mid(int pos, int len) const;
	QByteArray right(int len) const;
	QScriptValue remove(int pos, int len);
	QByteArray simplified() const;
	QByteArray toLower() const;
	QByteArray toUpper() const;
	QByteArray trimmed() const;
	void truncate(int pos);
	void chop(int n);
	QByteArray repeated(int times) const;
	QScriptValue split(const QScriptValue &separator);

	QByteArray replace(const QScriptValue &what, const QScriptValue &to) const;
	QByteArray replace(int index, int len, const QScriptValue &to) const;

	inline QString valueOf() const;
	QString toString() const;
	QString toStringLatin() const;
	QString toStringLocal() const;
	QString toString(const QByteArray &codecName) const;
	QByteArray toBase64() const;
	QByteArray toHex() const;
	QString toBase64Str() const;
	QString toHexStr() const;

	QString join(const QString &separator = QString(',')) const;
	QScriptValue pop();
	QScriptValue reverse();
	QScriptValue shift();
	QByteArray slice(int start = 0, int end = 0x7FFFFFFF) const;
	QScriptValue sort(QScriptValue compareFn = QScriptValue());
	int indexOf(const QScriptValue &search, int fromIndex = 0) const;
	int lastIndexOf(
		const QScriptValue &search, int fromIndex = 0x7FFFFFFF) const;
	bool every(QScriptValue callback,
		const QScriptValue &thisObject = QScriptValue()) const;
	bool some(QScriptValue callback,
		const QScriptValue &thisObject = QScriptValue()) const;
	void forEach(QScriptValue callback,
		const QScriptValue &thisObject = QScriptValue()) const;
	QScriptValue map(QScriptValue callback,
		const QScriptValue &thisObject = QScriptValue()) const;
	QByteArray mapBytes(QScriptValue callback,
		const QScriptValue &thisObject = QScriptValue()) const;
	QByteArray filter(QScriptValue callback,
		const QScriptValue &thisObject = QScriptValue()) const;
	QScriptValue reduce(QScriptValue callback,
		const QScriptValue &initialValue = QScriptValue()) const;
	QScriptValue reduceRight(QScriptValue callback,
		const QScriptValue &initialValue = QScriptValue()) const;

protected:
	virtual int constructorArgumentCountMin() const override;
	virtual int constructorArgumentCountMax() const override;
	virtual bool constructObject(
		QScriptContext *context, QByteArray &out) override;

	static void fromScriptValue(const QScriptValue &value, QByteArray &out);
	static void ptrFromScriptValue(const QScriptValue &value, QByteArray *&out);

	static QScriptValue ptrToScriptValue(
		QScriptEngine *engine, QByteArray *const &object);

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

	static QScriptValue construct(QScriptContext *ctx, QScriptEngine *eng);

	void resize(QByteArray &ba, int newSize);

private:
	QScriptString length;
};
