#include "QtScriptQDataStream.h"

#include "QtScriptUtils.h"
#include "QtScriptQByteArray.h"

QtScriptQDataStreamContainer::QtScriptQDataStreamContainer()
	: QtScriptQDataStreamContainer(nullptr)
{
}

QtScriptQDataStreamContainer::QtScriptQDataStreamContainer(
	const QtScriptQDataStreamContainer &other)
	: QtScriptQDataStreamContainer(other.mStream->device())
{
	mByteArray = other.mByteArray;
}

QtScriptQDataStreamContainer::QtScriptQDataStreamContainer(
	QtScriptQDataStreamContainer &&other)
{
	moveFrom(other);
}

QtScriptQDataStreamContainer::~QtScriptQDataStreamContainer()
{
	disconnectDevice();
}

QtScriptQDataStreamContainer::QtScriptQDataStreamContainer(QIODevice *device)
	: mStream(new QDataStream)
	, mDeviceConnected(false)
{
	setDevice(device);
}

QtScriptQDataStreamContainer::QtScriptQDataStreamContainer(
	const QScriptValue &ba, QIODevice::OpenMode flags)
	: mByteArray(ba)
	, mStream(new QDataStream(QtScriptQByteArray::getByteArrayPtr(ba), flags))
	, mDeviceConnected(false)
{
}

QtScriptQDataStreamContainer &QtScriptQDataStreamContainer::operator=(
	QtScriptQDataStreamContainer &&other)
{
	moveFrom(other);
	return *this;
}

void QtScriptQDataStreamContainer::setDevice(QIODevice *device)
{
	auto oldDevice = mStream->device();
	if (oldDevice == device)
		return;

	disconnectDevice();

	mByteArray = QScriptValue();
	mStream->setDevice(device);
	connectDevice();
}

void QtScriptQDataStreamContainer::connectDevice()
{
	auto device = mStream->device();
	if (device)
	{
		mDeviceConnection = QObject::connect(device, &QObject::destroyed,
			[this]() { mStream->setDevice(nullptr); });
	}
	mDeviceConnected = !!device;
}

void QtScriptQDataStreamContainer::disconnectDevice()
{
	if (mDeviceConnected)
	{
		QObject::disconnect(mDeviceConnection);
		mDeviceConnected = false;
	}
}

void QtScriptQDataStreamContainer::moveFrom(QtScriptQDataStreamContainer &other)
{
	mByteArray = std::move(other.mByteArray);
	other.disconnectDevice();
	mStream.reset(other.mStream.take());
	connectDevice();
}

QtScriptQDataStream::QtScriptQDataStream(QScriptEngine *engine)
	: QtScriptBaseClassPrototype(engine, "DataStream")
{
}

void QtScriptQDataStream::Register(const QScriptValue &targetNamespace)
{
	auto engine = targetNamespace.engine();
	Q_ASSERT(engine);
	auto ctor = RegisterT<QtScriptQDataStreamContainer, QtScriptQDataStream>(
		targetNamespace, QScriptValue());
	Q_ASSERT(ctor.isFunction());
	ctor.setPrototype(engine->newQMetaObject(
		&QtScriptQDataStreamContainer::staticMetaObject));

	qScriptRegisterMetaType<QDataStream *>(engine,
		QtScriptQDataStream::ptrToScriptValue,
		QtScriptQDataStream::ptrFromScriptValue);
}

QIODevice *QtScriptQDataStream::device() const
{
	auto d = thisDataStream();
	if (d)
		return d->device();

	return nullptr;
}

void QtScriptQDataStream::setDevice(QIODevice *device)
{
	auto d = thisContainer();
	if (d)
		d->setDevice(device);
}

int QtScriptQDataStream::status() const
{
	auto d = thisDataStream();
	if (d)
		return d->status();

	return -1;
}

void QtScriptQDataStream::setStatus(int status)
{
	auto d = thisDataStream();
	if (d)
		d->setStatus(QDataStream::Status(status));
}

int QtScriptQDataStream::floatingPointPrecision() const
{
	auto d = thisDataStream();
	if (d)
		return d->floatingPointPrecision();

	return -1;
}

void QtScriptQDataStream::setFloatingPointPrecision(int precision)
{
	auto d = thisDataStream();
	if (d)
	{
		d->setFloatingPointPrecision(
			QDataStream::FloatingPointPrecision(precision));
	}
}

int QtScriptQDataStream::byteOrder() const
{
	auto d = thisDataStream();
	if (d)
		return d->byteOrder();

	return -1;
}

void QtScriptQDataStream::setByteOrder(int order)
{
	auto d = thisDataStream();
	if (d)
		d->setByteOrder(QDataStream::ByteOrder(order));
}

int QtScriptQDataStream::version() const
{
	auto d = thisDataStream();
	if (d)
		return d->version();

	return -1;
}

void QtScriptQDataStream::setVersion(int ver)
{
	auto d = thisDataStream();
	if (d)
		d->setVersion(ver);
}

bool QtScriptQDataStream::atEnd() const
{
	auto d = thisDataStream();
	if (d)
		return d->atEnd();

	return true;
}

void QtScriptQDataStream::resetStatus()
{
	auto d = thisDataStream();
	if (d)
		d->resetStatus();
}

int QtScriptQDataStream::readUInt8()
{
	quint8 result = 0;
	auto d = thisDataStream();
	if (d)
		*d >> result;

	return result;
}

void QtScriptQDataStream::writeUInt8(int u8)
{
	auto d = thisDataStream();
	if (d)
		*d << quint8(u8);
}

int QtScriptQDataStream::readUInt16()
{
	quint16 result = 0;
	auto d = thisDataStream();
	if (d)
		*d >> result;

	return result;
}

void QtScriptQDataStream::writeUInt16(int u16)
{
	auto d = thisDataStream();
	if (d)
		*d << quint16(u16);
}

quint32 QtScriptQDataStream::readUInt32()
{
	quint32 result = 0;
	auto d = thisDataStream();
	if (d)
		*d >> result;

	return result;
}

void QtScriptQDataStream::writeUInt32(quint32 u32)
{
	auto d = thisDataStream();
	if (d)
		*d << u32;
}

quint64 QtScriptQDataStream::readUInt64()
{
	quint64 result = 0;
	auto d = thisDataStream();
	if (d)
		*d >> result;

	return result;
}

void QtScriptQDataStream::writeUInt64(quint64 u64)
{
	auto d = thisDataStream();
	if (d)
		*d << u64;
}

int QtScriptQDataStream::readInt8()
{
	qint8 result = 0;
	auto d = thisDataStream();
	if (d)
		*d >> result;

	return result;
}

void QtScriptQDataStream::writeInt8(int i8)
{
	auto d = thisDataStream();
	if (d)
		*d << qint8(i8);
}

int QtScriptQDataStream::readInt16()
{
	qint16 result = 0;
	auto d = thisDataStream();
	if (d)
		*d >> result;

	return result;
}

void QtScriptQDataStream::writeInt16(int i16)
{
	auto d = thisDataStream();
	if (d)
		*d << qint16(i16);
}

qint32 QtScriptQDataStream::readInt32()
{
	qint32 result = 0;
	auto d = thisDataStream();
	if (d)
		*d >> result;

	return result;
}

void QtScriptQDataStream::writeInt32(qint32 i32)
{
	auto d = thisDataStream();
	if (d)
		*d << i32;
}

qint64 QtScriptQDataStream::readInt64()
{
	qint64 result = 0;
	auto d = thisDataStream();
	if (d)
		*d >> result;

	return result;
}

void QtScriptQDataStream::writeInt64(qint64 i64)
{
	auto d = thisDataStream();
	if (d)
		*d << i64;
}

qsreal QtScriptQDataStream::readFloat()
{
	qsreal result = 0.0;
	auto d = thisDataStream();
	if (d)
		*d >> result;

	return result;
}

void QtScriptQDataStream::writeFloat(qsreal flt)
{
	auto d = thisDataStream();
	if (d)
		*d << flt;
}

bool QtScriptQDataStream::readBool()
{
	bool result = false;
	auto d = thisDataStream();
	if (d)
		*d >> result;

	return result;
}

void QtScriptQDataStream::writeBool(bool value)
{
	auto d = thisDataStream();
	if (d)
		*d << value;
}

QString QtScriptQDataStream::readString()
{
	QString result;
	auto d = thisDataStream();
	if (d)
		*d >> result;

	return result;
}

void QtScriptQDataStream::writeString(const QString &str)
{
	auto d = thisDataStream();
	if (d)
		*d << str;
}

QByteArray QtScriptQDataStream::readBytes()
{
	QByteArray result;
	auto d = thisDataStream();
	if (d)
	{
		quint32 length;
		*d >> length;
		if (int(length) > 0)
		{
			result.resize(length);
			d->readRawData(result.data(), int(length));
		}
	}

	return result;
}

QByteArray QtScriptQDataStream::readRawData(int length)
{
	QByteArray result;
	auto d = thisDataStream();
	if (d)
	{
		if (length > 0)
		{
			result.resize(length);
			d->readRawData(result.data(), length);
		}
	}
	return result;
}

void QtScriptQDataStream::writeBytes(const QByteArray &bytes)
{
	auto d = thisDataStream();
	if (d)
		d->writeBytes(bytes.data(), bytes.length());
}

int QtScriptQDataStream::writeRawData(const QByteArray &buf)
{
	auto d = thisDataStream();
	if (d)
		return d->writeRawData(buf.data(), buf.length());

	return -1;
}

int QtScriptQDataStream::writeRawData(
	const QByteArray &buf, int from, int length)
{
	auto d = thisDataStream();
	if (d)
	{
		if (from < 0)
			from = buf.length() + from;

		if (from < 0)
			from = 0;

		if (from + length > buf.length())
			length = buf.length() - from;

		return d->writeRawData(&buf.data()[from], length);
	}
	return -1;
}

int QtScriptQDataStream::skipRawData(int len)
{
	if (len >= 0)
	{
		auto d = thisDataStream();
		if (d)
			return d->skipRawData(len);
	}

	return -1;
}

void QtScriptQDataStream::startTransaction()
{
	auto d = thisDataStream();
	if (d)
		d->startTransaction();
}

bool QtScriptQDataStream::commitTransaction()
{
	auto d = thisDataStream();
	if (d)
		return d->commitTransaction();

	return false;
}

void QtScriptQDataStream::rollbackTransaction()
{
	auto d = thisDataStream();
	if (d)
		d->rollbackTransaction();
}

void QtScriptQDataStream::abortTransaction()
{
	auto d = thisDataStream();
	if (d)
		d->abortTransaction();
}

int QtScriptQDataStream::constructorArgumentCountMin() const
{
	return 0;
}

int QtScriptQDataStream::constructorArgumentCountMax() const
{
	return 2;
}

bool QtScriptQDataStream::constructObject(
	QScriptContext *context, QtScriptQDataStreamContainer &out)
{
	int argc = context->argumentCount();
	switch (argc)
	{
		case 0:
			return true;

		case 1:
		case 2:
		{
			auto arg1 = context->argument(0);
			auto byteArray = QtScriptQByteArray::getByteArrayPtr(arg1);
			if (byteArray)
			{
				QIODevice::OpenMode flags(QIODevice::ReadOnly);
				auto arg2 = context->argument(1);
				flags |= QIODevice::OpenModeFlag(arg2.toInt32());
				out = QtScriptQDataStreamContainer(arg1, flags);
				return true;
			}

			if (argc != 1)
				break;

			QIODevice *ioDevice =
				arg1.isNull() ? nullptr : qscriptvalue_cast<QIODevice *>(arg1);
			if (ioDevice || arg1.isNull())
			{
				out.setDevice(ioDevice);
				return true;
			}

			break;
		}
	}

	QtScriptUtils::badArgumentsException(context, QBSTRKEY(QDataStream));
	return false;
}

void QtScriptQDataStream::ptrFromScriptValue(
	const QScriptValue &value, QDataStream *&out)
{
	out = getDataStream(value);
}

QScriptValue QtScriptQDataStream::ptrToScriptValue(
	QScriptEngine *engine, QDataStream *const &object)
{
	if (object)
	{
		return toScriptValue<QtScriptQDataStream>(
			engine, QtScriptQDataStreamContainer(object->device()));
	}

	return engine->nullValue();
}

QDataStream *QtScriptQDataStream::getDataStream(const QScriptValue &value)
{
	auto container = getDataStreamContainer(value);
	if (container)
		return container->stream();
	return nullptr;
}

QtScriptQDataStreamContainer *QtScriptQDataStream::getDataStreamContainer(
	const QScriptValue &value)
{
	auto data = value.data();
	if (!data.isVariant())
		return nullptr;

	return data.toVariant().value<QtScriptQDataStreamContainer *>();
}

QDataStream *QtScriptQDataStream::thisDataStream() const
{
	return getDataStream(thisObject());
}

QtScriptQDataStreamContainer *QtScriptQDataStream::thisContainer() const
{
	return getDataStreamContainer(thisObject());
}
