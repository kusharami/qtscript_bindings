#include "QtScriptQByteArray.h"

#include "QtScriptUtils.h"

#include <QScriptClassPropertyIterator>
#include <QTextCodec>

class QtScriptQByteArray::PropertyIterator : public QScriptClassPropertyIterator
{
public:
	PropertyIterator(const QScriptValue &object);

	virtual bool hasNext() const override;
	virtual void next() override;

	virtual bool hasPrevious() const override;
	virtual void previous() override;

	virtual void toFront() override;
	virtual void toBack() override;

	virtual QScriptString name() const override;
	virtual uint id() const override;

private:
	int m_index;
	int m_last;
};

QtScriptQByteArray::QtScriptQByteArray(QScriptEngine *engine)
	: QtScriptBaseClassPrototype(engine, "ByteArray")
{
	length = engine->toStringHandle(QSTRKEY(length));
}

void QtScriptQByteArray::Register(const QScriptValue &targetNamespace)
{
	auto engine = targetNamespace.engine();
	Q_ASSERT(engine);
	auto ctor = RegisterT<QByteArray, QtScriptQByteArray>(
		targetNamespace, QScriptValue());
	Q_ASSERT(ctor.isFunction());

	auto proto = ctor.data();
	Q_ASSERT(proto.isObject());

	proto.setProperty(QSTRKEY(concat), engine->newFunction(concat));
	proto.setProperty(QSTRKEY(push), engine->newFunction(push));
	proto.setProperty(QSTRKEY(splice), engine->newFunction(splice));
	proto.setProperty(QSTRKEY(unshift), engine->newFunction(unshift));

	ctor.setProperty(QSTRKEY(fromBase64), engine->newFunction(fromBase64));
	ctor.setProperty(QSTRKEY(fromHex), engine->newFunction(fromHex));

	qScriptRegisterMetaType<QByteArray>(engine,
		QtScriptQByteArray::toScriptValue, QtScriptQByteArray::fromScriptValue,
		proto);
}

void QtScriptQByteArray::fromScriptValue(
	const QScriptValue &value, QByteArray &out)
{
	out = QByteArray();
	if (value.isValid() && !value.isNull() && !value.isUndefined())
	{
		fromScriptValueAppend(value, out);
	}
}

void QtScriptQByteArray::fromScriptValueAppend(
	const QScriptValue &value, QByteArray &out)
{
	if (value.isArray())
	{
		int length = value.property(QSTRKEY(length)).toInt32();
		int prevSize = out.size();
		out.resize(prevSize + length);
		char *ptr = &out.data()[prevSize];
		for (int j = 0; j < length; j++, ptr++)
		{
			*ptr = scriptValueToChar(value.property(j));
		}
	} else
	{
		QByteArray tempBa;
		auto ba = getByteArrayPtr(value);
		tempBa = ba ? *ba : value.toString().toUtf8();

		if (!out.isEmpty())
			out.append(tempBa);
		else
			out = tempBa;
	}
}

QScriptValue QtScriptQByteArray::toScriptValue(
	QScriptEngine *engine, const QByteArray &object)
{
	return QtScriptBaseClassPrototype::toScriptValue<QtScriptQByteArray>(
		engine, object);
}

QByteArray *QtScriptQByteArray::getByteArrayPtr(const QScriptValue &value)
{
	return QtScriptUtils::scriptValueData<QByteArray>(value);
}

QScriptClass::QueryFlags QtScriptQByteArray::queryProperty(
	const QScriptValue &object, const QScriptString &name,
	QScriptClass::QueryFlags flags, uint *id)
{
	QByteArray *ba = getByteArrayPtr(object);
	if (!ba)
		return 0;

	if (name == length)
	{
		return flags;
	}

	bool isArrayIndex;
	int pos = int(name.toArrayIndex(&isArrayIndex));
	if (!isArrayIndex)
		return 0;

	*id = uint(pos);
	if (0 != (flags & HandlesReadAccess) && pos >= ba->size())
		flags &= ~HandlesReadAccess;
	return flags;
}

QScriptValue QtScriptQByteArray::property(
	const QScriptValue &object, const QScriptString &name, uint id)
{
	QByteArray *ba = getByteArrayPtr(object);
	if (!ba)
		return QScriptValue();

	if (name == length)
	{
		return ba->length();
	}

	int pos = int(id);
	if (pos < 0 || pos >= ba->size())
		return QScriptValue();

	return QScriptValue(engine(), int(ba->at(pos)));
}

void QtScriptQByteArray::setProperty(QScriptValue &object,
	const QScriptString &name, uint id, const QScriptValue &value)
{
	QByteArray *ba = getByteArrayPtr(object);
	if (!ba)
		return;

	if (name == length)
	{
		resize(*ba, value.toInt32());
	} else
	{
		int pos = int(id);
		if (pos < 0)
			return;

		if (ba->size() <= pos)
			resize(*ba, pos + 1);

		(*ba)[pos] = scriptValueToChar(value);
	}
}

QScriptValue::PropertyFlags QtScriptQByteArray::propertyFlags(
	const QScriptValue &, const QScriptString &name, uint)
{
	if (name == length)
	{
		return QScriptValue::Undeletable | QScriptValue::SkipInEnumeration;
	}

	return QScriptValue::Undeletable;
}

QScriptClassPropertyIterator *QtScriptQByteArray::newIterator(
	const QScriptValue &object)
{
	return new PropertyIterator(object);
}

void QtScriptQByteArray::clear()
{
	auto ba = thisByteArray();
	if (ba)
		ba->clear();
}

bool QtScriptQByteArray::equals(const QByteArray &other)
{
	auto ba = thisByteArray();
	if (ba)
		return *ba == other;

	return false;
}

QByteArray QtScriptQByteArray::left(int len) const
{
	auto ba = thisByteArray();
	if (ba)
		return ba->left(len);

	return QByteArray();
}

QByteArray QtScriptQByteArray::mid(int pos, int len) const
{
	auto ba = thisByteArray();
	if (ba)
		return ba->mid(pos, len);

	return QByteArray();
}

QByteArray QtScriptQByteArray::right(int len) const
{
	auto ba = thisByteArray();
	if (ba)
		return ba->right(len);

	return QByteArray();
}

QScriptValue QtScriptQByteArray::remove(int pos, int len)
{
	auto ba = thisByteArray();
	if (ba)
		ba->remove(pos, len);

	return thisObject();
}

QByteArray QtScriptQByteArray::simplified() const
{
	auto ba = thisByteArray();
	if (ba)
		return ba->simplified();

	return QByteArray();
}

QByteArray QtScriptQByteArray::toLower() const
{
	auto ba = thisByteArray();
	if (ba)
		return ba->toLower();

	return QByteArray();
}

QByteArray QtScriptQByteArray::toUpper() const
{
	auto ba = thisByteArray();
	if (ba)
		return ba->toUpper();

	return QByteArray();
}

QByteArray QtScriptQByteArray::trimmed() const
{
	auto ba = thisByteArray();
	if (ba)
		return ba->trimmed();

	return QByteArray();
}

void QtScriptQByteArray::truncate(int pos)
{
	auto ba = thisByteArray();
	if (ba)
		return ba->truncate(pos);
}

void QtScriptQByteArray::chop(int n)
{
	auto ba = thisByteArray();
	if (ba)
		ba->chop(n);
}

QByteArray QtScriptQByteArray::repeated(int times) const
{
	auto ba = thisByteArray();
	if (ba)
		return ba->repeated(times);

	return QByteArray();
}

QScriptValue QtScriptQByteArray::split(const QScriptValue &separator)
{
	auto ba = thisByteArray();
	if (!ba)
		return QScriptValue();

	bool ok;
	char sep = scriptValueToChar(separator, &ok);
	if (!ok)
	{
		return QtScriptUtils::badArgumentsException(
			context(), QBSTRKEY(QByteArray::split));
	}

	auto list = ba->split(sep);

	auto count = quint32(list.size());
	QScriptValue result = engine()->newArray(count);

	for (quint32 i = 0; i < count; i++)
	{
		result.setProperty(
			i, QtScriptBaseClassPrototype::newInstance(list.at(int(i))));
	}

	return result;
}

QByteArray QtScriptQByteArray::replace(
	const QScriptValue &what, const QScriptValue &to) const
{
	auto ba = thisByteArray();
	if (ba)
	{
		return ba->replace(
			scriptValueToByteArray(what), scriptValueToByteArray(to));
	}

	return QByteArray();
}

QByteArray QtScriptQByteArray::replace(
	int index, int len, const QScriptValue &to) const
{
	auto ba = thisByteArray();
	if (nullptr == ba)
		return QByteArray();

	if (len < 0)
	{
		index -= len;
		len = -len;
	}

	if (index > ba->size())
	{
		index = ba->size();
		len = 0;
	}

	if (index < 0)
	{
		len += index;
		index = 0;
	}

	if (len < 0)
		len = 0;

	return ba->replace(index, len, scriptValueToByteArray(to));
}

QString QtScriptQByteArray::valueOf() const
{
	return join();
}

QString QtScriptQByteArray::toString() const
{
	auto ba = thisByteArray();
	if (nullptr == ba)
		return mClassName;

	return QStringLiteral("%1(length=%2)").arg(mClassName).arg(ba->size());
}

QString QtScriptQByteArray::toStringLatin() const
{
	auto ba = thisByteArray();
	if (ba)
		return QString::fromLatin1(*ba);

	return QString();
}

QString QtScriptQByteArray::toStringLocal() const
{
	return toString(QByteArray());
}

QString QtScriptQByteArray::toString(const QByteArray &codecName) const
{
	auto ba = thisByteArray();
	if (nullptr == ba)
		return QString();

	auto codec = QTextCodec::codecForName(codecName);
	if (nullptr == codec)
		codec = QTextCodec::codecForLocale();

	return codec->toUnicode(*ba);
}

QByteArray QtScriptQByteArray::toBase64() const
{
	auto ba = thisByteArray();
	if (ba)
		return ba->toBase64();

	return QByteArray();
}

QByteArray QtScriptQByteArray::toHex() const
{
	auto ba = thisByteArray();
	if (ba)
		return ba->toHex();

	return QByteArray();
}

QString QtScriptQByteArray::toBase64Str() const
{
	return QString::fromLatin1(toBase64());
}

QString QtScriptQByteArray::toHexStr() const
{
	return QString::fromLatin1(toHex());
}

QString QtScriptQByteArray::join(const QString &separator) const
{
	QString result;

	auto ba = thisByteArray();

	if (nullptr != ba)
	{
		for (char c : *ba)
		{
			if (!result.isEmpty())
				result += separator;
			result += QString::number(int(c));
		}
	}

	return result;
}

QScriptValue QtScriptQByteArray::pop()
{
	QScriptValue result;

	auto ba = thisByteArray();
	if (ba)
	{
		int len = ba->length();
		if (len > 0)
		{
			result = QScriptValue(engine(), int(ba->at(len - 1)));

			ba->chop(1);
		}
	}

	return result;
}

QScriptValue QtScriptQByteArray::reverse()
{
	auto ba = thisByteArray();

	if (ba)
		std::reverse(ba->begin(), ba->end());

	return thisObject();
}

QScriptValue QtScriptQByteArray::shift()
{
	QScriptValue result;

	auto ba = thisByteArray();
	if (ba)
	{
		int len = ba->length();
		if (len > 0)
		{
			result = QScriptValue(engine(), int(ba->at(0)));

			ba->remove(0, 1);
		}
	}

	return result;
}

QByteArray QtScriptQByteArray::slice(int start, int end) const
{
	QByteArray result;

	auto ba = thisByteArray();
	if (ba)
	{
		start = convertIndex(*ba, start);
		end = convertIndex(*ba, end);

		int len = end - start;

		if (len > 0)
		{
			result = ba->mid(start, len);

			engine()->reportAdditionalMemoryCost(len);
		}
	}

	return result;
}

QScriptValue QtScriptQByteArray::sort(QScriptValue compareFn)
{
	auto ba = thisByteArray();
	if (ba)
	{
		if (compareFn.isValid())
		{
			if (!compareFn.isFunction())
			{
				return QtScriptUtils::badArgumentsException(
					context(), QBSTRKEY(qt.ByteArray.sort));
			}

			auto engine = this->engine();
			try
			{
				std::sort(ba->begin(), ba->end(),
					[engine, &compareFn](char a, char b) mutable -> bool {
						QScriptValueList args;
						args.reserve(2);
						args.append(int(a));
						args.append(int(b));
						auto result = compareFn.call(QScriptValue(), args);

						if (engine->hasUncaughtException())
						{
							throw std::exception();
						}

						return result.toBool();
					});
			} catch (...)
			{
				if (engine->hasUncaughtException())
					return engine->uncaughtException();

				return QtScriptUtils::unknownError(context());
			}
		} else
		{
			std::sort(ba->begin(), ba->end());
		}
	}

	return thisObject();
}

int QtScriptQByteArray::indexOf(const QScriptValue &search, int fromIndex) const
{
	auto ba = thisByteArray();
	if (nullptr == ba || search.isUndefined() || !search.isValid())
		return -1;

	fromIndex = convertIndex(*ba, fromIndex);
	auto searchBa = getByteArrayPtr(search);
	if (searchBa)
		return ba->indexOf(*searchBa, fromIndex);

	bool ok;

	char ch = scriptValueToChar(search, &ok);
	if (ok)
		return ba->indexOf(ch, fromIndex);

	return -1;
}

int QtScriptQByteArray::lastIndexOf(
	const QScriptValue &search, int fromIndex) const
{
	auto ba = thisByteArray();
	if (nullptr == ba || search.isUndefined() || !search.isValid())
		return -1;

	fromIndex = convertIndex(*ba, fromIndex);
	auto searchBa = getByteArrayPtr(search);
	if (searchBa)
		return ba->lastIndexOf(*searchBa, fromIndex);

	bool ok;

	char ch = scriptValueToChar(search, &ok);
	if (ok)
		return ba->lastIndexOf(ch, fromIndex);

	return -1;
}

bool QtScriptQByteArray::every(
	QScriptValue callback, const QScriptValue &thisObject) const
{
	auto ba = thisByteArray();
	if (nullptr == ba)
		return false;

	if (!callback.isFunction())
	{
		QtScriptUtils::badArgumentsException(
			context(), QBSTRKEY(qt.ByteArray.every));
		return false;
	}

	auto engine = this->engine();
	int count = ba->length();

	if (count > 0)
	{
		int checkCount = 0;

		for (int i = 0; i < count; i++)
		{
			QScriptValueList args;
			args.reserve(3);
			args.append(int(ba->at(i)));
			args.append(i);
			args.append(this->thisObject());
			auto result = callback.call(thisObject, args);
			if (engine->hasUncaughtException())
				return false;

			if (result.toBool())
				checkCount++;
		}

		return checkCount == count;
	}

	return false;
}

bool QtScriptQByteArray::some(
	QScriptValue callback, const QScriptValue &thisObject) const
{
	auto ba = thisByteArray();
	if (nullptr == ba)
		return false;

	auto engine = this->engine();
	if (!callback.isFunction())
	{
		QtScriptUtils::badArgumentsException(
			context(), QBSTRKEY(qt.ByteArray.some));
		return false;
	}

	int count = ba->length();

	for (int i = 0; i < count; i++)
	{
		QScriptValueList args;
		args.reserve(3);
		args.append(int(ba->at(i)));
		args.append(i);
		args.append(this->thisObject());
		auto result = callback.call(thisObject, args);
		if (engine->hasUncaughtException())
			break;

		if (result.toBool())
			return true;
	}

	return false;
}

void QtScriptQByteArray::forEach(
	QScriptValue callback, const QScriptValue &thisObject) const
{
	auto ba = thisByteArray();
	if (nullptr == ba)
		return;

	auto engine = this->engine();
	if (!callback.isFunction())
	{
		QtScriptUtils::badArgumentsException(
			context(), QBSTRKEY(qt.ByteArray.forEach));
		return;
	}

	int count = ba->length();

	for (int i = 0; i < count; i++)
	{
		QScriptValueList args;
		args.reserve(3);
		args.append(int(ba->at(i)));
		args.append(i);
		args.append(this->thisObject());
		callback.call(thisObject, args);
		if (engine->hasUncaughtException())
			break;
	}
}

QScriptValue QtScriptQByteArray::map(
	QScriptValue callback, const QScriptValue &thisObject) const
{
	auto ba = thisByteArray();
	if (nullptr == ba)
		return QScriptValue();

	auto engine = this->engine();
	if (!callback.isFunction())
	{
		return QtScriptUtils::badArgumentsException(
			context(), QBSTRKEY(qt.ByteArray.map));
	}

	int count = ba->length();

	QScriptValue result = engine->newArray(count);

	for (int i = 0; i < count; i++)
	{
		QScriptValueList args;
		args.reserve(3);
		args.append(int(ba->at(i)));
		args.append(i);
		args.append(this->thisObject());
		result.setProperty(i, callback.call(thisObject, args));
		if (engine->hasUncaughtException())
			return engine->uncaughtException();
	}

	return result;
}

QByteArray QtScriptQByteArray::mapBytes(
	QScriptValue callback, const QScriptValue &thisObject) const
{
	auto ba = thisByteArray();
	if (nullptr == ba)
		return QByteArray();

	auto engine = this->engine();
	if (!callback.isFunction())
	{
		QtScriptUtils::badArgumentsException(
			context(), QBSTRKEY(qt.ByteArray.mapBytes));
		return QByteArray();
	}

	int count = ba->length();
	QByteArray result(count, 0);

	for (int i = 0; i < count; i++)
	{
		QScriptValueList args;
		args.reserve(3);
		args.append(int(ba->at(i)));
		args.append(i);
		args.append(this->thisObject());
		result[i] = scriptValueToChar(callback.call(thisObject, args));
		if (engine->hasUncaughtException())
			break;
	}

	if (!result.isEmpty())
		engine->reportAdditionalMemoryCost(result.size());

	return result;
}

QByteArray QtScriptQByteArray::filter(
	QScriptValue callback, const QScriptValue &thisObject) const
{
	QByteArray result;
	auto ba = thisByteArray();
	if (nullptr == ba)
		return result;

	auto engine = this->engine();
	if (!callback.isFunction())
	{
		QtScriptUtils::badArgumentsException(
			context(), QBSTRKEY(qt.ByteArray.filter));
		return result;
	}

	int count = ba->length();
	result.reserve(count);
	for (int i = 0; i < count; i++)
	{
		QScriptValueList args;
		args.reserve(3);
		args.append(int(ba->at(i)));
		args.append(i);
		args.append(this->thisObject());
		auto ok = callback.call(thisObject, args);
		if (engine->hasUncaughtException())
			break;
		if (ok.toBool())
			result.push_back(ba->at(i));
	}
	result.squeeze();

	if (!result.isEmpty())
		engine->reportAdditionalMemoryCost(result.size());

	return result;
}

QScriptValue QtScriptQByteArray::reduce(
	QScriptValue callback, const QScriptValue &initialValue) const
{
	auto ba = thisByteArray();
	if (nullptr == ba)
		return QScriptValue();

	auto engine = this->engine();

	if (!callback.isFunction())
	{
		return QtScriptUtils::badArgumentsException(
			context(), QBSTRKEY(qt.ByteArray.reduce));
	}

	QScriptValue result(engine, initialValue.toNumber());

	int count = ba->length();

	for (int i = 0; i < count; i++)
	{
		QScriptValueList args;
		args.reserve(4);
		args.append(result);
		args.append(int(ba->at(i)));
		args.append(i);
		args.append(this->thisObject());
		result = callback.call(QScriptValue(), args);
		if (engine->hasUncaughtException())
			return engine->uncaughtException();
	}

	return result;
}

QScriptValue QtScriptQByteArray::reduceRight(
	QScriptValue callback, const QScriptValue &initialValue) const
{
	auto ba = thisByteArray();
	if (nullptr == ba)
		return QScriptValue();

	auto engine = this->engine();
	if (!callback.isFunction())
	{
		return QtScriptUtils::badArgumentsException(
			context(), QBSTRKEY(qt.ByteArray.reduceRight));
	}

	QScriptValue result(engine, initialValue.toNumber());

	int count = ba->length();

	for (int i = count - 1; i >= 0; i--)
	{
		QScriptValueList args;
		args.reserve(4);
		args.append(result);
		args.append(int(ba->at(i)));
		args.append(i);
		args.append(this->thisObject());
		result = callback.call(QScriptValue(), args);
		if (engine->hasUncaughtException())
			return engine->uncaughtException();
	}

	return result;
}

int QtScriptQByteArray::constructorArgumentCountMin() const
{
	return 0;
}

int QtScriptQByteArray::constructorArgumentCountMax() const
{
	return 2;
}

bool QtScriptQByteArray::constructObject(
	QScriptContext *context, QByteArray &out)
{
	int argc = context->argumentCount();
	switch (argc)
	{
		case 0:
			return true;

		case 1:
		case 2:
		{
			auto arg = context->argument(0);
			if (arg.scriptClass() == this)
			{
				out = *getByteArrayPtr(arg);
				return true;
			}

			if (arg.isArray())
			{
				QByteArray ba;
				fromScriptValue(arg, ba);
				out = ba;
				return true;
			}

			auto arg2 = context->argument(1);
			if (!arg.isNumber())
			{
				auto codec = scriptValueToTextCodec(arg2);
				out = codec->fromUnicode(arg.toString());
				engine()->reportAdditionalMemoryCost(out.size());
				return true;
			}

			bool ok = false;
			char init = scriptValueToChar(arg2, &ok);
			if (!ok)
				break;
			int size = arg.toInt32();
			engine()->reportAdditionalMemoryCost(size);
			out = QByteArray(size, init);
			return true;
		}
	}

	QtScriptUtils::badArgumentsException(context, QBSTRKEY(QByteArray));
	return false;
}

QScriptValue QtScriptQByteArray::newInstance(int size, char init)
{
	if (size > 0)
		engine()->reportAdditionalMemoryCost(size);
	return QtScriptBaseClassPrototype::newInstance(
		size > 0 ? QByteArray(size, init) : QByteArray());
}

QByteArray QtScriptQByteArray::scriptValueToByteArray(const QScriptValue &value)
{
	auto pb = getByteArrayPtr(value);

	return (pb ? QByteArray::fromRawData(pb->data(), pb->size())
			   : value.isNumber() || value.isNull() || value.isUndefined() ||
					value.isBool()
				? QByteArray(1, char(value.toInt32()))
				: value.toString().toUtf8());
}

int QtScriptQByteArray::convertIndex(const QByteArray &ba, int index)
{
	if (index >= 0)
	{
		return qMin(index, ba.length());
	}

	return qMax(0, ba.length() + index);
}

QByteArray *QtScriptQByteArray::thisByteArray() const
{
	return getByteArrayPtr(thisObject());
}

QByteArray *QtScriptQByteArray::thisByteArray(QScriptContext *context)
{
	Q_ASSERT(nullptr != context);
	return getByteArrayPtr(context->thisObject());
}

QTextCodec *QtScriptQByteArray::scriptValueToTextCodec(
	const QScriptValue &value)
{
	QByteArray codecBA;
	fromScriptValue(value, codecBA);

	auto codec = QTextCodec::codecForName(codecBA);
	if (nullptr == codec)
		codec = QTextCodec::codecForLocale();

	return codec;
}

QScriptValue QtScriptQByteArray::fromBase64(
	QScriptContext *context, QScriptEngine *engine)
{
	if (context->argumentCount() != 1)
	{
		return QtScriptUtils::badArgumentsException(
			context, QBSTRKEY(QByteArray::fromBase64));
	}

	QByteArray ba;
	fromScriptValue(context->argument(0), ba);

	ba = QByteArray::fromBase64(ba);
	return toScriptValue(engine, ba);
}

QScriptValue QtScriptQByteArray::fromHex(
	QScriptContext *context, QScriptEngine *engine)
{
	if (context->argumentCount() != 1)
	{
		return QtScriptUtils::badArgumentsException(
			context, QBSTRKEY(QByteArray::fromHex));
	}

	QByteArray ba;
	fromScriptValue(context->argument(0), ba);

	ba = QByteArray::fromHex(ba);
	return toScriptValue(engine, ba);
}

QScriptValue QtScriptQByteArray::concat(
	QScriptContext *context, QScriptEngine *engine)
{
	auto ba = thisByteArray(context);

	if (nullptr == ba)
		return QScriptValue();

	QByteArray result = *ba;

	for (int i = 0, count = context->argumentCount(); i < count; i++)
	{
		fromScriptValueAppend(context->argument(i), result);
	}

	if (!result.isEmpty())
		engine->reportAdditionalMemoryCost(result.size());

	return toScriptValue(engine, result);
}

QScriptValue QtScriptQByteArray::push(
	QScriptContext *context, QScriptEngine *engine)
{
	auto ba = thisByteArray(context);
	if (nullptr == ba)
		return QScriptValue();

	int count = context->argumentCount();
	int prevSize = ba->size();
	ba->resize(prevSize + count);
	char *ptr = &ba->data()[prevSize];
	for (int i = 0; i < count; i++, ptr++)
	{
		*ptr = scriptValueToChar(context->argument(i));
	}

	if (count > 0)
		engine->reportAdditionalMemoryCost(count);

	return QScriptValue(engine, ba->length());
}

QScriptValue QtScriptQByteArray::unshift(
	QScriptContext *context, QScriptEngine *engine)
{
	auto ba = thisByteArray(context);
	if (nullptr == ba)
		return QScriptValue();

	int count = context->argumentCount();
	ba->prepend(count, 0);
	char *ptr = ba->data();
	for (int i = count - 1; i >= 0; i--, ptr++)
	{
		*ptr = scriptValueToChar(context->argument(i));
	}

	if (count > 0)
		engine->reportAdditionalMemoryCost(count);

	return QScriptValue(engine, ba->length());
}

QScriptValue QtScriptQByteArray::splice(
	QScriptContext *context, QScriptEngine *engine)
{
	auto ba = thisByteArray(context);
	if (nullptr == ba)
		return QScriptValue();

	int start = convertIndex(*ba, context->argument(0).toInt32());

	int argCount = context->argumentCount();

	int deleteCount = 0;
	if (argCount >= 2)
		deleteCount = context->argument(1).toInt32();

	ba->remove(start, deleteCount);

	int memoryCost = -deleteCount;

	if (argCount > 2)
	{
		QByteArray toInsert(argCount - 2, Qt::Uninitialized);

		for (int i = 2; i < argCount; i++)
		{
			toInsert[i - 2] = scriptValueToChar(context->argument(i));
		}

		ba->insert(start, toInsert);

		memoryCost += toInsert.size();
	}

	if (memoryCost > 0)
		engine->reportAdditionalMemoryCost(memoryCost);

	return context->thisObject();
}

char QtScriptQByteArray::scriptValueToChar(
	const QScriptValue &value, bool *okPtr)
{
	bool ok = false;
	int ch = 0;

	if (!value.isValid() || value.isNumber() || value.isBool() ||
		value.isNull() || value.isUndefined())
	{
		ch = value.toInt32();
		ok = true;
	} else
	{
		auto str = value.toString();
		auto latin1 = str.toLatin1();
		if (latin1.size() == 1)
		{
			ch = latin1.at(0);
			ok = true;
		}
	}

	if (nullptr != okPtr)
		*okPtr = ok;

	return char(ch);
}

void QtScriptQByteArray::resize(QByteArray &ba, int newSize)
{
	int oldSize = ba.size();
	ba.resize(newSize);
	if (newSize > oldSize)
		engine()->reportAdditionalMemoryCost(newSize - oldSize);
}

QtScriptQByteArray::PropertyIterator::PropertyIterator(
	const QScriptValue &object)
	: QScriptClassPropertyIterator(object)
{
	toFront();
}

bool QtScriptQByteArray::PropertyIterator::hasNext() const
{
	QByteArray *ba = getByteArrayPtr(object());
	return ba && m_index < ba->size();
}

void QtScriptQByteArray::PropertyIterator::next()
{
	m_last = m_index;
	++m_index;
}

bool QtScriptQByteArray::PropertyIterator::hasPrevious() const
{
	return (m_index > 0);
}

void QtScriptQByteArray::PropertyIterator::previous()
{
	--m_index;
	m_last = m_index;
}

void QtScriptQByteArray::PropertyIterator::toFront()
{
	m_index = 0;
	m_last = -1;
}

void QtScriptQByteArray::PropertyIterator::toBack()
{
	QByteArray *ba = getByteArrayPtr(object());
	m_index = ba ? ba->size() : 0;
	m_last = -1;
}

QScriptString QtScriptQByteArray::PropertyIterator::name() const
{
	return object().engine()->toStringHandle(QString::number(m_last));
}

uint QtScriptQByteArray::PropertyIterator::id() const
{
	return uint(m_last);
}
