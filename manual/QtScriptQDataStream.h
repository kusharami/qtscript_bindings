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
	enum Version
	{
		Qt_1_0 = QDataStream::Qt_1_0,
		Qt_2_0 = QDataStream::Qt_2_0,
		Qt_2_1 = QDataStream::Qt_2_1,
		Qt_3_0 = QDataStream::Qt_3_0,
		Qt_3_1 = QDataStream::Qt_3_1,
		Qt_3_3 = QDataStream::Qt_3_3,
		Qt_4_0 = QDataStream::Qt_4_0,
		Qt_4_1 = QDataStream::Qt_4_1,
		Qt_4_2 = QDataStream::Qt_4_2,
		Qt_4_3 = QDataStream::Qt_4_3,
		Qt_4_4 = QDataStream::Qt_4_4,
		Qt_4_5 = QDataStream::Qt_4_5,
		Qt_4_6 = QDataStream::Qt_4_6,
		Qt_4_7 = QDataStream::Qt_4_7,
		Qt_4_8 = QDataStream::Qt_4_8,
		Qt_4_9 = QDataStream::Qt_4_9,
		Qt_5_0 = QDataStream::Qt_5_0,
		Qt_5_1 = QDataStream::Qt_5_1,
		Qt_5_2 = QDataStream::Qt_5_2,
		Qt_5_3 = QDataStream::Qt_5_3,
		Qt_5_4 = QDataStream::Qt_5_4,
		Qt_5_5 = QDataStream::Qt_5_5,
		Qt_5_6 = QDataStream::Qt_5_6,
		Qt_5_7 = QDataStream::Qt_5_7,
		Qt_5_8 = QDataStream::Qt_5_8,
		Qt_5_9 = QDataStream::Qt_5_9,
		Qt_DefaultCompiledVersion = QDataStream::Qt_DefaultCompiledVersion
	};
	Q_ENUM(Version)

	enum ByteOrder
	{
		BigEndian = QDataStream::BigEndian,
		LittleEndian = QDataStream::LittleEndian
	};
	Q_ENUM(ByteOrder)

	enum Status
	{
		Ok = QDataStream::Ok,
		ReadPastEnd = QDataStream::ReadPastEnd,
		ReadCorruptData = QDataStream::ReadCorruptData,
		WriteFailed = QDataStream::WriteFailed
	};
	Q_ENUM(Status)

	enum FloatingPointPrecision
	{
		SinglePrecision = QDataStream::SinglePrecision,
		DoublePrecision = QDataStream::DoublePrecision
	};
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

	Q_INVOKABLE bool atEnd() const;
	Q_INVOKABLE void resetStatus();

	Q_INVOKABLE int readUInt8();
	Q_INVOKABLE void writeUInt8(int u8);

	Q_INVOKABLE int readUInt16();
	Q_INVOKABLE void writeUInt16(int u16);

	Q_INVOKABLE quint32 readUInt32();
	Q_INVOKABLE void writeUInt32(quint32 u32);

	Q_INVOKABLE quint64 readUInt64();
	Q_INVOKABLE void writeUInt64(quint64 u64);

	Q_INVOKABLE int readInt8();
	Q_INVOKABLE void writeInt8(int i8);

	Q_INVOKABLE int readInt16();
	Q_INVOKABLE void writeInt16(int i16);

	Q_INVOKABLE qint32 readInt32();
	Q_INVOKABLE void writeInt32(qint32 i32);

	Q_INVOKABLE qint64 readInt64();
	Q_INVOKABLE void writeInt64(qint64 i64);

	Q_INVOKABLE qsreal readFloat();
	Q_INVOKABLE void writeFloat(qsreal flt);

	Q_INVOKABLE bool readBool();
	Q_INVOKABLE void writeBool(bool value);

	Q_INVOKABLE QString readString();
	Q_INVOKABLE void writeString(const QString &str);

	Q_INVOKABLE QByteArray readBytes();
	Q_INVOKABLE QByteArray readRawData(int length);
	Q_INVOKABLE void writeBytes(const QByteArray &bytes);
	Q_INVOKABLE int writeRawData(const QByteArray &buf);
	Q_INVOKABLE int writeRawData(const QByteArray &buf, int from, int length);

	Q_INVOKABLE int skipRawData(int len);
	Q_INVOKABLE void startTransaction();
	Q_INVOKABLE bool commitTransaction();
	Q_INVOKABLE void rollbackTransaction();
	Q_INVOKABLE void abortTransaction();

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
