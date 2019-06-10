#pragma once

#include "QtScriptBaseClassPrototype.h"

#include <QDataStream>

class QtScriptQDataStreamContainer
{
	Q_GADGET

	QScriptValue mByteArray;
	QScopedPointer<QDataStream> mStream;
	QMetaObject::Connection mDeviceConnection;
	bool mDeviceConnected;

public:
	using Version = QDataStream::Version;
	Q_ENUM(Version)
	using ByteOrder = QDataStream::ByteOrder;
	Q_ENUM(ByteOrder)
	using Status = QDataStream::Status;
	Q_ENUM(Status)
	using FloatingPointPrecision = QDataStream::FloatingPointPrecision;
	Q_ENUM(FloatingPointPrecision)

	QtScriptQDataStreamContainer();
	QtScriptQDataStreamContainer(const QtScriptQDataStreamContainer &other);
	QtScriptQDataStreamContainer(QtScriptQDataStreamContainer &&other);
	~QtScriptQDataStreamContainer();

	explicit QtScriptQDataStreamContainer(QIODevice *device);
	QtScriptQDataStreamContainer(
		const QScriptValue &ba, QIODevice::OpenMode flags);

	QDataStream *stream();

	QtScriptQDataStreamContainer &operator=(
		const QtScriptQDataStreamContainer &other);
	QtScriptQDataStreamContainer &operator=(
		QtScriptQDataStreamContainer &&other);

	void setDevice(QIODevice *device);

private:
	void connectDevice();
	void disconnectDevice();
	void moveFrom(QtScriptQDataStreamContainer &other);
};

inline QDataStream *QtScriptQDataStreamContainer::stream()
{
	return mStream.data();
}

Q_DECLARE_METATYPE(QtScriptQDataStreamContainer)
Q_DECLARE_METATYPE(QtScriptQDataStreamContainer *)
Q_DECLARE_METATYPE(const QtScriptQDataStreamContainer *)
Q_DECLARE_METATYPE(QDataStream *)

class QtScriptQDataStream final
	: public QtScriptBaseClassPrototype<QtScriptQDataStreamContainer>
{
	Q_OBJECT

	Q_PROPERTY(int version READ version WRITE setVersion)
	Q_PROPERTY(int byteOrder READ byteOrder WRITE setByteOrder)
	Q_PROPERTY(int floatingPointPrecision READ floatingPointPrecision WRITE
			setFloatingPointPrecision)
	Q_PROPERTY(int status READ status WRITE setStatus)
	Q_PROPERTY(QIODevice *device READ device WRITE setDevice)

public:
	explicit QtScriptQDataStream(QScriptEngine *engine);
	static void Register(const QScriptValue &targetNamespace);

	QIODevice *device() const;
	void setDevice(QIODevice *device);

	int status() const;
	void setStatus(int status);

	int floatingPointPrecision() const;
	void setFloatingPointPrecision(int precision);

	int byteOrder() const;
	void setByteOrder(int order);

	int version() const;
	void setVersion(int ver);

public slots:
	bool atEnd() const;
	void resetStatus();

	int readUInt8();
	void writeUInt8(int u8);

	int readUInt16();
	void writeUInt16(int u16);

	quint32 readUInt32();
	void writeUInt32(quint32 u32);

	quint64 readUInt64();
	void writeUInt64(quint64 u64);

	int readInt8();
	void writeInt8(int i8);

	int readInt16();
	void writeInt16(int i16);

	qint32 readInt32();
	void writeInt32(qint32 i32);

	qint64 readInt64();
	void writeInt64(qint64 i64);

	qsreal readFloat();
	void writeFloat(qsreal flt);

	bool readBool();
	void writeBool(bool value);

	QString readString();
	void writeString(const QString &str);

	QByteArray readBytes();
	QByteArray readRawData(int length);
	void writeBytes(const QByteArray &bytes);
	int writeRawData(const QByteArray &buf);
	int writeRawData(const QByteArray &buf, int from, int length);

	int skipRawData(int len);
	void startTransaction();
	bool commitTransaction();
	void rollbackTransaction();
	void abortTransaction();

protected:
	virtual int constructorArgumentCountMin() const override;
	virtual int constructorArgumentCountMax() const override;
	virtual bool constructObject(
		QScriptContext *context, QtScriptQDataStreamContainer &out) override;

	static void ptrFromScriptValue(
		const QScriptValue &value, QDataStream *&out);

	static QScriptValue ptrToScriptValue(
		QScriptEngine *engine, QDataStream *const &object);

	static QDataStream *getDataStream(const QScriptValue &value);
	static QtScriptQDataStreamContainer *getDataStreamContainer(
		const QScriptValue &value);

private:
	QDataStream *thisDataStream() const;
	QtScriptQDataStreamContainer *thisContainer() const;
};
