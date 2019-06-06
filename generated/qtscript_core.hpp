#pragma once

#include "QtScriptQObject.hpp"
#include "QtCore"

void qtscript_register_all_QtCore(QScriptEngine *engine);

class QtScriptQAbstractAnimation : public QtScriptQObject
{
	Q_OBJECT

protected:
	explicit QtScriptQAbstractAnimation(QScriptEngine *engine, const QByteArray &className);

	virtual int constructorArgumentCountMin() const override;
	virtual int constructorArgumentCountMax() const override;
	virtual bool constructObject(QScriptContext *, NativeObjectType &out) override;

public:
	explicit QtScriptQAbstractAnimation(QScriptEngine *engine);
	static void Register(const QScriptValue &targetNamespace);

	Q_PROPERTY(int loopCount READ loopCount WRITE setLoopCount)
	Q_PROPERTY(int direction READ direction WRITE setDirection)
	Q_PROPERTY(int currentTime READ currentTime WRITE setCurrentTime)
	int direction();
	void setLoopCount(int loopCount);
	Q_INVOKABLE QAnimationGroup* group();
	Q_INVOKABLE void stateChanged(int newState, int oldState);
	int loopCount();
	int currentTime();
	Q_INVOKABLE int currentLoopTime();
	Q_INVOKABLE void directionChanged(int arg0);
	void setDirection(int direction);
	Q_INVOKABLE void finished();
	Q_INVOKABLE int currentLoop();
	Q_INVOKABLE void resume();
	Q_INVOKABLE void stop();
	Q_INVOKABLE void start();
	Q_INVOKABLE void start(int policy);
	Q_INVOKABLE int state();
	Q_INVOKABLE void pause();
	void setCurrentTime(int msecs);
	Q_INVOKABLE void currentLoopChanged(int currentLoop);
	Q_INVOKABLE void setPaused(bool arg0);
	Q_INVOKABLE int totalDuration();
};

Q_DECLARE_METATYPE(QAbstractAnimation *)

class QtScriptQPoint final : public QtScriptBaseClassPrototype<QPoint>
{
	Q_OBJECT

protected:
	explicit QtScriptQPoint(QScriptEngine *engine, const QByteArray &className);

	virtual int constructorArgumentCountMin() const override;
	virtual int constructorArgumentCountMax() const override;
	virtual bool constructObject(QScriptContext *, NativeObjectType &out) override;

public:
	explicit QtScriptQPoint(QScriptEngine *engine);
	static void Register(const QScriptValue &targetNamespace);

	Q_PROPERTY(int x READ x WRITE setX)
	Q_PROPERTY(int y READ y WRITE setY)
	Q_INVOKABLE void dec(const QPoint& p);
	Q_INVOKABLE void multiplyBy(float factor);
	Q_INVOKABLE int rx();
	Q_INVOKABLE int ry();
	Q_INVOKABLE void divideBy(qreal divisor);
	Q_INVOKABLE bool isNull();
	int y();
	int x();
	Q_INVOKABLE void inc(const QPoint& p);
	void setX(int x);
	void setY(int y);
	Q_INVOKABLE int manhattanLength();
	static QScriptValue dotProduct(QScriptContext *context, QScriptEngine* engine);
};

Q_DECLARE_METATYPE(QPoint)
Q_DECLARE_METATYPE(QPoint *)

class QtScriptQPointF final : public QtScriptBaseClassPrototype<QPointF>
{
	Q_OBJECT

protected:
	explicit QtScriptQPointF(QScriptEngine *engine, const QByteArray &className);

	virtual int constructorArgumentCountMin() const override;
	virtual int constructorArgumentCountMax() const override;
	virtual bool constructObject(QScriptContext *, NativeObjectType &out) override;

public:
	explicit QtScriptQPointF(QScriptEngine *engine);
	static void Register(const QScriptValue &targetNamespace);

	Q_PROPERTY(qreal x READ x WRITE setX)
	Q_PROPERTY(qreal y READ y WRITE setY)
	Q_INVOKABLE QPoint toPoint();
	Q_INVOKABLE void dec(const QPointF& p);
	Q_INVOKABLE void multiplyBy(qreal c);
	Q_INVOKABLE qreal rx();
	Q_INVOKABLE qreal ry();
	Q_INVOKABLE void divideBy(qreal c);
	Q_INVOKABLE bool isNull();
	qreal y();
	qreal x();
	Q_INVOKABLE void inc(const QPointF& p);
	void setX(qreal x);
	void setY(qreal y);
	Q_INVOKABLE qreal manhattanLength();
	static QScriptValue dotProduct(QScriptContext *context, QScriptEngine* engine);
};

Q_DECLARE_METATYPE(QPointF)
Q_DECLARE_METATYPE(QPointF *)

class QtScriptQAnimationGroup : public QtScriptQAbstractAnimation
{
	Q_OBJECT

protected:
	explicit QtScriptQAnimationGroup(QScriptEngine *engine, const QByteArray &className);

	virtual int constructorArgumentCountMin() const override;
	virtual int constructorArgumentCountMax() const override;
	virtual bool constructObject(QScriptContext *, NativeObjectType &out) override;

public:
	explicit QtScriptQAnimationGroup(QScriptEngine *engine);
	static void Register(const QScriptValue &targetNamespace);

	Q_INVOKABLE int animationCount();
	Q_INVOKABLE QAbstractAnimation* takeAnimation(int index);
	Q_INVOKABLE void addAnimation(QAbstractAnimation* animation);
	Q_INVOKABLE int indexOfAnimation(QAbstractAnimation* animation);
	Q_INVOKABLE void clear();
	Q_INVOKABLE void insertAnimation(int index, QAbstractAnimation* animation);
	Q_INVOKABLE QAbstractAnimation* animationAt(int index);
	Q_INVOKABLE void removeAnimation(QAbstractAnimation* animation);
};

Q_DECLARE_METATYPE(QAnimationGroup *)

class QtScriptQIODevice : public QtScriptQObject
{
	Q_OBJECT

protected:
	explicit QtScriptQIODevice(QScriptEngine *engine, const QByteArray &className);

	virtual int constructorArgumentCountMin() const override;
	virtual int constructorArgumentCountMax() const override;
	virtual bool constructObject(QScriptContext *, NativeObjectType &out) override;

public:
	explicit QtScriptQIODevice(QScriptEngine *engine);
	static void Register(const QScriptValue &targetNamespace);

	Q_PROPERTY(int currentWriteChannel READ currentWriteChannel WRITE setCurrentWriteChannel)
	Q_PROPERTY(int currentReadChannel READ currentReadChannel WRITE setCurrentReadChannel)
	Q_PROPERTY(bool textModeEnabled READ isTextModeEnabled WRITE setTextModeEnabled)
	void setCurrentWriteChannel(int channel);
	Q_INVOKABLE void channelBytesWritten(int channel, qint64 bytes);
	Q_INVOKABLE qint64 bytesAvailable();
	Q_INVOKABLE void startTransaction();
	Q_INVOKABLE qint64 pos();
	Q_INVOKABLE void channelReadyRead(int channel);
	Q_INVOKABLE qint64 bytesToWrite();
	Q_INVOKABLE void close();
	void setCurrentReadChannel(int channel);
	Q_INVOKABLE bool seek(qint64 pos);
	Q_INVOKABLE bool isSequential();
	Q_INVOKABLE void ungetChar(char c);
	Q_INVOKABLE qint64 size();
	Q_INVOKABLE void readyRead();
	Q_INVOKABLE bool canReadLine();
	Q_INVOKABLE bool waitForBytesWritten(int msecs);
	int currentWriteChannel();
	Q_INVOKABLE QString errorString();
	Q_INVOKABLE bool open(int mode);
	Q_INVOKABLE bool isWritable();
	Q_INVOKABLE qint64 write(const QByteArray& data);
	Q_INVOKABLE qint64 write(const QByteArray& data, qint64 len);
	Q_INVOKABLE void readChannelFinished();
	int currentReadChannel();
	Q_INVOKABLE QByteArray peek(qint64 maxlen);
	Q_INVOKABLE qint64 peek(QByteArray* data, qint64 maxlen);
	Q_INVOKABLE bool putChar(char c);
	Q_INVOKABLE bool isOpen();
	Q_INVOKABLE QByteArray read(qint64 maxlen);
	Q_INVOKABLE qint64 read(QByteArray* data, qint64 maxlen);
	Q_INVOKABLE QByteArray readAll();
	Q_INVOKABLE void rollbackTransaction();
	void setTextModeEnabled(bool enabled);
	Q_INVOKABLE QByteArray readLine();
	Q_INVOKABLE QByteArray readLine(qint64 maxlen);
	Q_INVOKABLE qint64 readLine(QByteArray* data, qint64 maxlen);
	Q_INVOKABLE bool reset();
	Q_INVOKABLE int openMode();
	bool isTextModeEnabled();
	Q_INVOKABLE bool atEnd();
	Q_INVOKABLE bool waitForReadyRead(int msecs);
	Q_INVOKABLE void bytesWritten(qint64 bytes);
	Q_INVOKABLE void aboutToClose();
	Q_INVOKABLE int writeChannelCount();
	Q_INVOKABLE bool isReadable();
	Q_INVOKABLE void commitTransaction();
	Q_INVOKABLE int readChannelCount();
	Q_INVOKABLE bool isTransactionStarted();
	Q_INVOKABLE bool getChar(QByteArray* c);
};

Q_DECLARE_METATYPE(QIODevice *)

class QtScriptQBuffer : public QtScriptQIODevice
{
	Q_OBJECT

protected:
	explicit QtScriptQBuffer(QScriptEngine *engine, const QByteArray &className);

	virtual int constructorArgumentCountMin() const override;
	virtual int constructorArgumentCountMax() const override;
	virtual bool constructObject(QScriptContext *, NativeObjectType &out) override;

public:
	explicit QtScriptQBuffer(QScriptEngine *engine);
	static void Register(const QScriptValue &targetNamespace);

	Q_PROPERTY(QByteArray data READ data WRITE setData)
	Q_INVOKABLE QByteArray buffer();
	void setData(const QByteArray& data);
	Q_INVOKABLE void setData(const QByteArray& data, int len);
	QByteArray data();
	Q_INVOKABLE void setBuffer(QByteArray* a);
};

Q_DECLARE_METATYPE(QBuffer *)

class QtScriptQLocale final : public QtScriptBaseClassPrototype<QLocale>
{
	Q_OBJECT

protected:
	explicit QtScriptQLocale(QScriptEngine *engine, const QByteArray &className);

	virtual int constructorArgumentCountMin() const override;
	virtual int constructorArgumentCountMax() const override;
	virtual bool constructObject(QScriptContext *, NativeObjectType &out) override;

public:
	explicit QtScriptQLocale(QScriptEngine *engine);
	static void Register(const QScriptValue &targetNamespace);

	Q_PROPERTY(int numberOptions READ numberOptions WRITE setNumberOptions)
	Q_INVOKABLE bool notEquals(const QLocale& other);
	Q_INVOKABLE unsigned short toUShort(const QString& s);
	Q_INVOKABLE unsigned short toUShort(const QString& s, bool* ok);
	Q_INVOKABLE void set(const QLocale& other);
	Q_INVOKABLE QStringList uiLanguages();
	Q_INVOKABLE unsigned int toUInt(const QString& s);
	Q_INVOKABLE unsigned int toUInt(const QString& s, bool* ok);
	Q_INVOKABLE QString currencySymbol();
	Q_INVOKABLE QString currencySymbol(int arg0);
	Q_INVOKABLE float toFloat(const QString& s);
	Q_INVOKABLE float toFloat(const QString& s, bool* ok);
	Q_INVOKABLE QString dayName(int arg0);
	Q_INVOKABLE QString dayName(int arg0, int format);
	Q_INVOKABLE QString dateTimeFormat();
	Q_INVOKABLE QString dateTimeFormat(int format);
	Q_INVOKABLE QString bcp47Name();
	Q_INVOKABLE QString amText();
	Q_INVOKABLE QDate toDate(const QString& string);
	Q_INVOKABLE QDate toDate(const QString& string, int arg0);
	Q_INVOKABLE QChar exponential();
	Q_INVOKABLE QString pmText();
	Q_INVOKABLE int script();
	Q_INVOKABLE int firstDayOfWeek();
	Q_INVOKABLE QString standaloneMonthName(int arg0);
	Q_INVOKABLE QString standaloneMonthName(int arg0, int format);
	Q_INVOKABLE QChar percent();
	Q_INVOKABLE QList<Qt::DayOfWeek> weekdays();
	Q_INVOKABLE long long toLongLong(const QString& s);
	Q_INVOKABLE long long toLongLong(const QString& s, bool* ok);
	Q_INVOKABLE QChar negativeSign();
	Q_INVOKABLE QString toString(long long i);
	Q_INVOKABLE QString toString(double i, char f);
	Q_INVOKABLE QString toString(double i, char f, int prec);
	Q_INVOKABLE void swap(QLocale& other);
	Q_INVOKABLE QString monthName(int arg0);
	Q_INVOKABLE QString monthName(int arg0, int format);
	Q_INVOKABLE QString standaloneDayName(int arg0);
	Q_INVOKABLE QString standaloneDayName(int arg0, int format);
	Q_INVOKABLE QString nativeLanguageName();
	Q_INVOKABLE QChar groupSeparator();
	Q_INVOKABLE QString createSeparatedList(const QStringList& strl);
	Q_INVOKABLE QDateTime toDateTime(const QString& string);
	Q_INVOKABLE QDateTime toDateTime(const QString& string, int format);
	Q_INVOKABLE QChar positiveSign();
	Q_INVOKABLE short toShort(const QString& s);
	Q_INVOKABLE short toShort(const QString& s, bool* ok);
	Q_INVOKABLE QString dateFormat();
	Q_INVOKABLE QString dateFormat(int format);
	Q_INVOKABLE bool equals(const QLocale& other);
	Q_INVOKABLE QString toCurrencyString(long long arg0, const QString& symbol);
	Q_INVOKABLE QString toCurrencyString(double arg0, const QString& symbol, int precision);
	Q_INVOKABLE QChar decimalPoint();
	Q_INVOKABLE QString timeFormat();
	Q_INVOKABLE QString timeFormat(int format);
	Q_INVOKABLE QString quoteString(const QString& str);
	Q_INVOKABLE QString quoteString(const QString& str, int style);
	int numberOptions();
	Q_INVOKABLE unsigned long long toULongLong(const QString& s);
	Q_INVOKABLE unsigned long long toULongLong(const QString& s, bool* ok);
	void setNumberOptions(int options);
	Q_INVOKABLE QString name();
	Q_INVOKABLE int language();
	Q_INVOKABLE QString toLower(const QString& str);
	Q_INVOKABLE int country();
	Q_INVOKABLE int toInt(const QString& s);
	Q_INVOKABLE int toInt(const QString& s, bool* ok);
	Q_INVOKABLE int textDirection();
	Q_INVOKABLE double toDouble(const QString& s);
	Q_INVOKABLE double toDouble(const QString& s, bool* ok);
	Q_INVOKABLE QTime toTime(const QString& string);
	Q_INVOKABLE QTime toTime(const QString& string, int arg0);
	Q_INVOKABLE QString nativeCountryName();
	Q_INVOKABLE QString toUpper(const QString& str);
	Q_INVOKABLE QChar zeroDigit();
	Q_INVOKABLE int measurementSystem();
	static QScriptValue countryToString(QScriptContext *context, QScriptEngine* engine);
	static QScriptValue c(QScriptContext *context, QScriptEngine* engine);
	static QScriptValue setDefault(QScriptContext *context, QScriptEngine* engine);
	static QScriptValue scriptToString(QScriptContext *context, QScriptEngine* engine);
	static QScriptValue system(QScriptContext *context, QScriptEngine* engine);
	static QScriptValue matchingLocales(QScriptContext *context, QScriptEngine* engine);
	static QScriptValue countriesForLanguage(QScriptContext *context, QScriptEngine* engine);
	static QScriptValue languageToString(QScriptContext *context, QScriptEngine* engine);
};

Q_DECLARE_METATYPE(QLocale)
Q_DECLARE_METATYPE(QLocale *)

class QtScriptQTime final : public QtScriptBaseClassPrototype<QTime>
{
	Q_OBJECT

protected:
	explicit QtScriptQTime(QScriptEngine *engine, const QByteArray &className);

	virtual int constructorArgumentCountMin() const override;
	virtual int constructorArgumentCountMax() const override;
	virtual bool constructObject(QScriptContext *, NativeObjectType &out) override;

public:
	explicit QtScriptQTime(QScriptEngine *engine);
	static void Register(const QScriptValue &targetNamespace);

	Q_INVOKABLE bool notEquals(const QTime& other);
	Q_INVOKABLE int msec();
	Q_INVOKABLE int second();
	Q_INVOKABLE int msecsSinceStartOfDay();
	Q_INVOKABLE bool setHMS(int h, int m, int s);
	Q_INVOKABLE bool setHMS(int h, int m, int s, int ms);
	Q_INVOKABLE QTime addMSecs(int ms);
	Q_INVOKABLE void start();
	Q_INVOKABLE QString toString();
	Q_INVOKABLE QString toString(int f);
	Q_INVOKABLE bool greaterOrEqual(const QTime& other);
	Q_INVOKABLE bool isValid();
	Q_INVOKABLE int secsTo(const QTime& arg0);
	Q_INVOKABLE int minute();
	Q_INVOKABLE bool equals(const QTime& other);
	Q_INVOKABLE int elapsed();
	Q_INVOKABLE QTime addSecs(int secs);
	Q_INVOKABLE bool greaterThan(const QTime& other);
	Q_INVOKABLE int msecsTo(const QTime& arg0);
	Q_INVOKABLE int restart();
	Q_INVOKABLE bool lessOrEqual(const QTime& other);
	Q_INVOKABLE int hour();
	Q_INVOKABLE bool isNull();
	Q_INVOKABLE bool lessThan(const QTime& other);
	static QScriptValue fromString(QScriptContext *context, QScriptEngine* engine);
	static QScriptValue isValid(QScriptContext *context, QScriptEngine* engine);
	static QScriptValue fromMSecsSinceStartOfDay(QScriptContext *context, QScriptEngine* engine);
	static QScriptValue currentTime(QScriptContext *context, QScriptEngine* engine);
};

Q_DECLARE_METATYPE(QTime)
Q_DECLARE_METATYPE(QTime *)

class QtScriptQTextStream : public QtScriptBaseClassPrototype<QTextStream *>
{
	Q_OBJECT

protected:
	explicit QtScriptQTextStream(QScriptEngine *engine, const QByteArray &className);

	virtual int constructorArgumentCountMin() const override;
	virtual int constructorArgumentCountMax() const override;
	virtual bool constructObject(QScriptContext *, NativeObjectType &out) override;

public:
	explicit QtScriptQTextStream(QScriptEngine *engine);
	static void Register(const QScriptValue &targetNamespace);

	Q_PROPERTY(int realNumberPrecision READ realNumberPrecision WRITE setRealNumberPrecision)
	Q_PROPERTY(int integerBase READ integerBase WRITE setIntegerBase)
	Q_PROPERTY(int numberFlags READ numberFlags WRITE setNumberFlags)
	Q_PROPERTY(QTextCodec* codec READ codec WRITE setCodec)
	Q_PROPERTY(int fieldWidth READ fieldWidth WRITE setFieldWidth)
	Q_PROPERTY(bool autoDetectUnicode READ autoDetectUnicode WRITE setAutoDetectUnicode)
	Q_PROPERTY(int status READ status WRITE setStatus)
	Q_PROPERTY(int realNumberNotation READ realNumberNotation WRITE setRealNumberNotation)
	Q_PROPERTY(QIODevice* device READ device WRITE setDevice)
	Q_PROPERTY(bool generateByteOrderMark READ generateByteOrderMark WRITE setGenerateByteOrderMark)
	Q_PROPERTY(QChar padChar READ padChar WRITE setPadChar)
	Q_PROPERTY(int fieldAlignment READ fieldAlignment WRITE setFieldAlignment)
	Q_PROPERTY(QLocale locale READ locale WRITE setLocale)
	int status();
	void setRealNumberPrecision(int precision);
	QLocale locale();
	Q_INVOKABLE void skipWhiteSpace();
	Q_INVOKABLE qint64 pos();
	Q_INVOKABLE void put(const QString& arg0);
	void setIntegerBase(int base);
	void setNumberFlags(int flags);
	Q_INVOKABLE void flush();
	Q_INVOKABLE bool seek(qint64 pos);
	void setCodec(QTextCodec* codec);
	void setFieldWidth(int width);
	int fieldWidth();
	void setAutoDetectUnicode(bool enabled);
	bool generateByteOrderMark();
	void setStatus(int status);
	QTextCodec* codec();
	void setRealNumberNotation(int notation);
	int realNumberPrecision();
	void setDevice(QIODevice* device);
	QChar padChar();
	bool autoDetectUnicode();
	int fieldAlignment();
	void setGenerateByteOrderMark(bool generate);
	Q_INVOKABLE QString read(qint64 maxlen);
	int realNumberNotation();
	void setPadChar(QChar ch);
	QIODevice* device();
	void setFieldAlignment(int alignment);
	Q_INVOKABLE void reset();
	Q_INVOKABLE QString readAll();
	void setLocale(const QLocale& locale);
	Q_INVOKABLE void resetStatus();
	Q_INVOKABLE bool atEnd();
	int numberFlags();
	int integerBase();
	Q_INVOKABLE QString readLine();
	Q_INVOKABLE QString readLine(qint64 maxlen);
};

Q_DECLARE_METATYPE(QTextStream *)

class QtScriptQFileDevice : public QtScriptQIODevice
{
	Q_OBJECT

protected:
	explicit QtScriptQFileDevice(QScriptEngine *engine, const QByteArray &className);

	virtual int constructorArgumentCountMin() const override;
	virtual int constructorArgumentCountMax() const override;
	virtual bool constructObject(QScriptContext *, NativeObjectType &out) override;

public:
	explicit QtScriptQFileDevice(QScriptEngine *engine);
	static void Register(const QScriptValue &targetNamespace);

	Q_INVOKABLE int handle();
	Q_INVOKABLE int error();
	Q_INVOKABLE void unsetError();
	Q_INVOKABLE QString fileName();
	Q_INVOKABLE bool flush();
	Q_INVOKABLE bool setPermissions(int permissionSpec);
	Q_INVOKABLE bool resize(qint64 sz);
	Q_INVOKABLE int permissions();
};

Q_DECLARE_METATYPE(QFileDevice *)

class QtScriptQFile : public QtScriptQFileDevice
{
	Q_OBJECT

protected:
	explicit QtScriptQFile(QScriptEngine *engine, const QByteArray &className);

	virtual int constructorArgumentCountMin() const override;
	virtual int constructorArgumentCountMax() const override;
	virtual bool constructObject(QScriptContext *, NativeObjectType &out) override;

public:
	explicit QtScriptQFile(QScriptEngine *engine);
	static void Register(const QScriptValue &targetNamespace);

	Q_INVOKABLE bool rename(const QString& newName);
	Q_INVOKABLE bool exists();
	Q_INVOKABLE QString symLinkTarget();
	Q_INVOKABLE void setFileName(const QString& name);
	Q_INVOKABLE bool remove();
	Q_INVOKABLE QString readLink();
	Q_INVOKABLE bool link(const QString& newName);
	Q_INVOKABLE bool copy(const QString& newName);
	Q_INVOKABLE bool open(_iobuf* f, int ioFlags);
	Q_INVOKABLE bool open(_iobuf* f, int ioFlags, int handleFlags);
	static QScriptValue rename(QScriptContext *context, QScriptEngine* engine);
	static QScriptValue encodeName(QScriptContext *context, QScriptEngine* engine);
	static QScriptValue exists(QScriptContext *context, QScriptEngine* engine);
	static QScriptValue symLinkTarget(QScriptContext *context, QScriptEngine* engine);
	static QScriptValue decodeName(QScriptContext *context, QScriptEngine* engine);
	static QScriptValue remove(QScriptContext *context, QScriptEngine* engine);
	static QScriptValue readLink(QScriptContext *context, QScriptEngine* engine);
	static QScriptValue link(QScriptContext *context, QScriptEngine* engine);
	static QScriptValue setPermissions(QScriptContext *context, QScriptEngine* engine);
	static QScriptValue copy(QScriptContext *context, QScriptEngine* engine);
	static QScriptValue resize(QScriptContext *context, QScriptEngine* engine);
	static QScriptValue permissions(QScriptContext *context, QScriptEngine* engine);
};

Q_DECLARE_METATYPE(QFile *)

class QtScriptQFileInfo final : public QtScriptBaseClassPrototype<QFileInfo>
{
	Q_OBJECT

protected:
	explicit QtScriptQFileInfo(QScriptEngine *engine, const QByteArray &className);

	virtual int constructorArgumentCountMin() const override;
	virtual int constructorArgumentCountMax() const override;
	virtual bool constructObject(QScriptContext *, NativeObjectType &out) override;

public:
	explicit QtScriptQFileInfo(QScriptEngine *engine);
	static void Register(const QScriptValue &targetNamespace);

	Q_PROPERTY(bool caching READ caching WRITE setCaching)
	Q_INVOKABLE bool notEquals(const QFileInfo& fileinfo);
	Q_INVOKABLE void set(const QFileInfo& fileinfo);
	Q_INVOKABLE QString suffix();
	Q_INVOKABLE bool exists();
	Q_INVOKABLE QString symLinkTarget();
	Q_INVOKABLE bool isRelative();
	Q_INVOKABLE QString completeBaseName();
	Q_INVOKABLE QString canonicalFilePath();
	Q_INVOKABLE bool isAbsolute();
	Q_INVOKABLE QString owner();
	Q_INVOKABLE bool isExecutable();
	Q_INVOKABLE qint64 size();
	Q_INVOKABLE QString bundleName();
	Q_INVOKABLE QString group();
	Q_INVOKABLE bool isWritable();
	Q_INVOKABLE QString filePath();
	Q_INVOKABLE QString absolutePath();
	Q_INVOKABLE void swap(QFileInfo& other);
	Q_INVOKABLE QString canonicalPath();
	Q_INVOKABLE bool isBundle();
	Q_INVOKABLE bool isHidden();
	Q_INVOKABLE bool isDir();
	Q_INVOKABLE QDateTime lastRead();
	Q_INVOKABLE bool isRoot();
	Q_INVOKABLE QDir absoluteDir();
	Q_INVOKABLE QString absoluteFilePath();
	Q_INVOKABLE bool equals(const QFileInfo& fileinfo);
	Q_INVOKABLE QString fileName();
	void setCaching(bool on);
	Q_INVOKABLE QString completeSuffix();
	Q_INVOKABLE QString path();
	Q_INVOKABLE unsigned int groupId();
	Q_INVOKABLE int permissions();
	Q_INVOKABLE bool isNativePath();
	Q_INVOKABLE QDateTime created();
	Q_INVOKABLE bool isSymLink();
	Q_INVOKABLE QDateTime lastModified();
	Q_INVOKABLE QString baseName();
	Q_INVOKABLE void refresh();
	Q_INVOKABLE QString readLink();
	Q_INVOKABLE void setFile(const QString& file);
	Q_INVOKABLE void setFile(const QDir& dir, const QString& file);
	Q_INVOKABLE bool isReadable();
	bool caching();
	Q_INVOKABLE unsigned int ownerId();
	Q_INVOKABLE bool permission(int permissions);
	Q_INVOKABLE bool isFile();
	Q_INVOKABLE bool makeAbsolute();
	Q_INVOKABLE QDir dir();
	static QScriptValue exists(QScriptContext *context, QScriptEngine* engine);
};

Q_DECLARE_METATYPE(QFileInfo)
Q_DECLARE_METATYPE(QFileInfo *)

class QtScriptQDir : public QtScriptBaseClassPrototype<QDir *>
{
	Q_OBJECT

protected:
	explicit QtScriptQDir(QScriptEngine *engine, const QByteArray &className);

	virtual int constructorArgumentCountMin() const override;
	virtual int constructorArgumentCountMax() const override;
	virtual bool constructObject(QScriptContext *, NativeObjectType &out) override;

public:
	explicit QtScriptQDir(QScriptEngine *engine);
	static void Register(const QScriptValue &targetNamespace);

	Q_PROPERTY(QStringList nameFilters READ nameFilters WRITE setNameFilters)
	Q_PROPERTY(QString path READ path WRITE setPath)
	Q_PROPERTY(int sorting READ sorting WRITE setSorting)
	Q_PROPERTY(int filter READ filter WRITE setFilter)
	void setNameFilters(const QStringList& nameFilters);
	Q_INVOKABLE bool notEquals(const QDir& dir);
	Q_INVOKABLE void refresh();
	Q_INVOKABLE void set(const QDir& arg0);
	Q_INVOKABLE bool exists();
	Q_INVOKABLE bool exists(const QString& name);
	Q_INVOKABLE QString relativeFilePath(const QString& fileName);
	Q_INVOKABLE bool isRelative();
	Q_INVOKABLE bool cd(const QString& dirName);
	Q_INVOKABLE QString at(int arg0);
	Q_INVOKABLE bool mkdir(const QString& dirName);
	Q_INVOKABLE QStringList entryList();
	Q_INVOKABLE QStringList entryList(int filters);
	Q_INVOKABLE QStringList entryList(int filters, int sort);
	Q_INVOKABLE QStringList entryList(const QStringList& nameFilters, int filters, int sort);
	Q_INVOKABLE QString absolutePath();
	Q_INVOKABLE bool isEmpty();
	Q_INVOKABLE bool isEmpty(int filters);
	Q_INVOKABLE void swap(QDir& other);
	Q_INVOKABLE QString canonicalPath();
	Q_INVOKABLE bool removeRecursively();
	void setPath(const QString& path);
	Q_INVOKABLE QString dirName();
	Q_INVOKABLE bool rmdir(const QString& dirName);
	Q_INVOKABLE bool isRoot();
	Q_INVOKABLE QString filePath(const QString& fileName);
	Q_INVOKABLE QString absoluteFilePath(const QString& fileName);
	Q_INVOKABLE bool equals(const QDir& dir);
	void setSorting(int sort);
	Q_INVOKABLE bool rmpath(const QString& dirPath);
	QString path();
	void setFilter(int filter);
	Q_INVOKABLE unsigned int count();
	Q_INVOKABLE bool cdUp();
	int sorting();
	QStringList nameFilters();
	Q_INVOKABLE bool mkpath(const QString& dirPath);
	Q_INVOKABLE bool remove(const QString& fileName);
	Q_INVOKABLE bool makeAbsolute();
	int filter();
	Q_INVOKABLE bool rename(const QString& oldName, const QString& newName);
	Q_INVOKABLE bool isReadable();
	Q_INVOKABLE QList<QFileInfo> entryInfoList();
	Q_INVOKABLE QList<QFileInfo> entryInfoList(int filters);
	Q_INVOKABLE QList<QFileInfo> entryInfoList(int filters, int sort);
	Q_INVOKABLE QList<QFileInfo> entryInfoList(const QStringList& nameFilters, int filters, int sort);
	Q_INVOKABLE bool isAbsolute();
	static QScriptValue listSeparator(QScriptContext *context, QScriptEngine* engine);
	static QScriptValue currentPath(QScriptContext *context, QScriptEngine* engine);
	static QScriptValue isAbsolutePath(QScriptContext *context, QScriptEngine* engine);
	static QScriptValue tempPath(QScriptContext *context, QScriptEngine* engine);
	static QScriptValue homePath(QScriptContext *context, QScriptEngine* engine);
	static QScriptValue home(QScriptContext *context, QScriptEngine* engine);
	static QScriptValue cleanPath(QScriptContext *context, QScriptEngine* engine);
	static QScriptValue setCurrent(QScriptContext *context, QScriptEngine* engine);
	static QScriptValue toNativeSeparators(QScriptContext *context, QScriptEngine* engine);
	static QScriptValue searchPaths(QScriptContext *context, QScriptEngine* engine);
	static QScriptValue addResourceSearchPath(QScriptContext *context, QScriptEngine* engine);
	static QScriptValue current(QScriptContext *context, QScriptEngine* engine);
	static QScriptValue fromNativeSeparators(QScriptContext *context, QScriptEngine* engine);
	static QScriptValue isRelativePath(QScriptContext *context, QScriptEngine* engine);
	static QScriptValue match(QScriptContext *context, QScriptEngine* engine);
	static QScriptValue setSearchPaths(QScriptContext *context, QScriptEngine* engine);
	static QScriptValue drives(QScriptContext *context, QScriptEngine* engine);
	static QScriptValue addSearchPath(QScriptContext *context, QScriptEngine* engine);
	static QScriptValue temp(QScriptContext *context, QScriptEngine* engine);
	static QScriptValue rootPath(QScriptContext *context, QScriptEngine* engine);
	static QScriptValue nameFiltersFromString(QScriptContext *context, QScriptEngine* engine);
	static QScriptValue separator(QScriptContext *context, QScriptEngine* engine);
	static QScriptValue root(QScriptContext *context, QScriptEngine* engine);
};

Q_DECLARE_METATYPE(QDir *)

class QtScriptQDirIterator : public QtScriptBaseClassPrototype<QDirIterator *>
{
	Q_OBJECT

protected:
	explicit QtScriptQDirIterator(QScriptEngine *engine, const QByteArray &className);

	virtual int constructorArgumentCountMin() const override;
	virtual int constructorArgumentCountMax() const override;
	virtual bool constructObject(QScriptContext *, NativeObjectType &out) override;

public:
	explicit QtScriptQDirIterator(QScriptEngine *engine);
	static void Register(const QScriptValue &targetNamespace);

	Q_INVOKABLE bool hasNext();
	Q_INVOKABLE QString filePath();
	Q_INVOKABLE QString fileName();
	Q_INVOKABLE QString path();
	Q_INVOKABLE QFileInfo fileInfo();
	Q_INVOKABLE QString next();
};

Q_DECLARE_METATYPE(QDirIterator *)

class QtScriptQEasingCurve final : public QtScriptBaseClassPrototype<QEasingCurve>
{
	Q_OBJECT

protected:
	explicit QtScriptQEasingCurve(QScriptEngine *engine, const QByteArray &className);

	virtual int constructorArgumentCountMin() const override;
	virtual int constructorArgumentCountMax() const override;
	virtual bool constructObject(QScriptContext *, NativeObjectType &out) override;

public:
	explicit QtScriptQEasingCurve(QScriptEngine *engine);
	static void Register(const QScriptValue &targetNamespace);

	Q_PROPERTY(qreal period READ period WRITE setPeriod)
	Q_PROPERTY(int type READ type WRITE setType)
	Q_PROPERTY(qreal amplitude READ amplitude WRITE setAmplitude)
	Q_PROPERTY(qreal overshoot READ overshoot WRITE setOvershoot)
	Q_INVOKABLE bool notEquals(const QEasingCurve& other);
	void setPeriod(qreal period);
	Q_INVOKABLE void set(const QEasingCurve& other);
	Q_INVOKABLE void addTCBSegment(const QPointF& nextPoint, qreal t, qreal c, qreal b);
	Q_INVOKABLE void addCubicBezierSegment(const QPointF& c1, const QPointF& c2, const QPointF& endPoint);
	qreal overshoot();
	Q_INVOKABLE bool equals(const QEasingCurve& other);
	qreal period();
	void setType(int type);
	void setAmplitude(qreal amplitude);
	Q_INVOKABLE qreal valueForProgress(qreal progress);
	Q_INVOKABLE void swap(QEasingCurve& other);
	qreal amplitude();
	void setOvershoot(qreal overshoot);
	int type();
	Q_INVOKABLE QVector<QPointF> toCubicSpline();
};

Q_DECLARE_METATYPE(QEasingCurve)
Q_DECLARE_METATYPE(QEasingCurve *)

class QtScriptQLine final : public QtScriptBaseClassPrototype<QLine>
{
	Q_OBJECT

protected:
	explicit QtScriptQLine(QScriptEngine *engine, const QByteArray &className);

	virtual int constructorArgumentCountMin() const override;
	virtual int constructorArgumentCountMax() const override;
	virtual bool constructObject(QScriptContext *, NativeObjectType &out) override;

public:
	explicit QtScriptQLine(QScriptEngine *engine);
	static void Register(const QScriptValue &targetNamespace);

	Q_PROPERTY(QPoint p1 READ p1 WRITE setP1)
	Q_PROPERTY(QPoint p2 READ p2 WRITE setP2)
	QPoint p2();
	Q_INVOKABLE bool notEquals(const QLine& d);
	QPoint p1();
	void setP1(const QPoint& p1);
	Q_INVOKABLE QPoint center();
	void setP2(const QPoint& p2);
	Q_INVOKABLE void translate(const QPoint& p);
	Q_INVOKABLE void translate(int dx, int dy);
	Q_INVOKABLE int y2();
	Q_INVOKABLE QLine translated(const QPoint& p);
	Q_INVOKABLE QLine translated(int dx, int dy);
	Q_INVOKABLE bool equals(const QLine& d);
	Q_INVOKABLE int x2();
	Q_INVOKABLE bool isNull();
	Q_INVOKABLE int dx();
	Q_INVOKABLE int dy();
	Q_INVOKABLE int y1();
	Q_INVOKABLE void setLine(int x1, int y1, int x2, int y2);
	Q_INVOKABLE int x1();
	Q_INVOKABLE void setPoints(const QPoint& p1, const QPoint& p2);
};

Q_DECLARE_METATYPE(QLine)
Q_DECLARE_METATYPE(QLine *)

class QtScriptQLineF final : public QtScriptBaseClassPrototype<QLineF>
{
	Q_OBJECT

protected:
	explicit QtScriptQLineF(QScriptEngine *engine, const QByteArray &className);

	virtual int constructorArgumentCountMin() const override;
	virtual int constructorArgumentCountMax() const override;
	virtual bool constructObject(QScriptContext *, NativeObjectType &out) override;

public:
	explicit QtScriptQLineF(QScriptEngine *engine);
	static void Register(const QScriptValue &targetNamespace);

	Q_PROPERTY(qreal angle READ angle WRITE setAngle)
	Q_PROPERTY(QPointF p1 READ p1 WRITE setP1)
	Q_PROPERTY(QPointF p2 READ p2 WRITE setP2)
	Q_PROPERTY(qreal length READ length WRITE setLength)
	Q_INVOKABLE bool notEquals(const QLineF& d);
	void setAngle(qreal angle);
	Q_INVOKABLE bool equals(const QLineF& d);
	Q_INVOKABLE qreal y1();
	Q_INVOKABLE qreal y2();
	Q_INVOKABLE QLineF normalVector();
	qreal angle();
	Q_INVOKABLE qreal angle(const QLineF& l);
	Q_INVOKABLE int intersect(const QLineF& l, QPointF* intersectionPoint);
	Q_INVOKABLE void setLine(qreal x1, qreal y1, qreal x2, qreal y2);
	Q_INVOKABLE void translate(const QPointF& p);
	Q_INVOKABLE void translate(qreal dx, qreal dy);
	void setP1(const QPointF& p1);
	void setP2(const QPointF& p2);
	Q_INVOKABLE qreal angleTo(const QLineF& l);
	Q_INVOKABLE QLineF unitVector();
	Q_INVOKABLE qreal dx();
	Q_INVOKABLE qreal dy();
	Q_INVOKABLE qreal x2();
	Q_INVOKABLE qreal x1();
	Q_INVOKABLE void setPoints(const QPointF& p1, const QPointF& p2);
	void setLength(qreal len);
	QPointF p2();
	QPointF p1();
	Q_INVOKABLE QPointF center();
	Q_INVOKABLE QPointF pointAt(qreal t);
	Q_INVOKABLE QLine toLine();
	Q_INVOKABLE bool isNull();
	qreal length();
	Q_INVOKABLE QLineF translated(const QPointF& p);
	Q_INVOKABLE QLineF translated(qreal dx, qreal dy);
	static QScriptValue fromPolar(QScriptContext *context, QScriptEngine* engine);
};

Q_DECLARE_METATYPE(QLineF)
Q_DECLARE_METATYPE(QLineF *)

class QtScriptQMargins final : public QtScriptBaseClassPrototype<QMargins>
{
	Q_OBJECT

protected:
	explicit QtScriptQMargins(QScriptEngine *engine, const QByteArray &className);

	virtual int constructorArgumentCountMin() const override;
	virtual int constructorArgumentCountMax() const override;
	virtual bool constructObject(QScriptContext *, NativeObjectType &out) override;

public:
	explicit QtScriptQMargins(QScriptEngine *engine);
	static void Register(const QScriptValue &targetNamespace);

	Q_PROPERTY(int bottom READ bottom WRITE setBottom)
	Q_PROPERTY(int right READ right WRITE setRight)
	Q_PROPERTY(int top READ top WRITE setTop)
	Q_PROPERTY(int left READ left WRITE setLeft)
	Q_INVOKABLE void dec(const QMargins& margins);
	int right();
	Q_INVOKABLE void multiplyBy(int arg0);
	int bottom();
	void setBottom(int bottom);
	int top();
	void setRight(int right);
	void setTop(int top);
	Q_INVOKABLE void divideBy(int arg0);
	Q_INVOKABLE bool isNull();
	Q_INVOKABLE void inc(const QMargins& margins);
	void setLeft(int left);
	int left();
};

Q_DECLARE_METATYPE(QMargins)
Q_DECLARE_METATYPE(QMargins *)

class QtScriptQMarginsF final : public QtScriptBaseClassPrototype<QMarginsF>
{
	Q_OBJECT

protected:
	explicit QtScriptQMarginsF(QScriptEngine *engine, const QByteArray &className);

	virtual int constructorArgumentCountMin() const override;
	virtual int constructorArgumentCountMax() const override;
	virtual bool constructObject(QScriptContext *, NativeObjectType &out) override;

public:
	explicit QtScriptQMarginsF(QScriptEngine *engine);
	static void Register(const QScriptValue &targetNamespace);

	Q_PROPERTY(qreal bottom READ bottom WRITE setBottom)
	Q_PROPERTY(qreal right READ right WRITE setRight)
	Q_PROPERTY(qreal top READ top WRITE setTop)
	Q_PROPERTY(qreal left READ left WRITE setLeft)
	Q_INVOKABLE void dec(const QMarginsF& margins);
	qreal right();
	Q_INVOKABLE void multiplyBy(qreal factor);
	qreal bottom();
	void setBottom(qreal bottom);
	qreal top();
	Q_INVOKABLE QMargins toMargins();
	void setRight(qreal right);
	void setTop(qreal top);
	Q_INVOKABLE void divideBy(qreal divisor);
	Q_INVOKABLE bool isNull();
	Q_INVOKABLE void inc(const QMarginsF& margins);
	void setLeft(qreal left);
	qreal left();
};

Q_DECLARE_METATYPE(QMarginsF)
Q_DECLARE_METATYPE(QMarginsF *)

class QtScriptQParallelAnimationGroup : public QtScriptQAnimationGroup
{
	Q_OBJECT

protected:
	explicit QtScriptQParallelAnimationGroup(QScriptEngine *engine, const QByteArray &className);

	virtual int constructorArgumentCountMin() const override;
	virtual int constructorArgumentCountMax() const override;
	virtual bool constructObject(QScriptContext *, NativeObjectType &out) override;

public:
	explicit QtScriptQParallelAnimationGroup(QScriptEngine *engine);
	static void Register(const QScriptValue &targetNamespace);

	Q_INVOKABLE int duration();
};

Q_DECLARE_METATYPE(QParallelAnimationGroup *)

class QtScriptQPauseAnimation : public QtScriptQAbstractAnimation
{
	Q_OBJECT

protected:
	explicit QtScriptQPauseAnimation(QScriptEngine *engine, const QByteArray &className);

	virtual int constructorArgumentCountMin() const override;
	virtual int constructorArgumentCountMax() const override;
	virtual bool constructObject(QScriptContext *, NativeObjectType &out) override;

public:
	explicit QtScriptQPauseAnimation(QScriptEngine *engine);
	static void Register(const QScriptValue &targetNamespace);

	Q_PROPERTY(int duration READ duration WRITE setDuration)
	int duration();
	void setDuration(int msecs);
};

Q_DECLARE_METATYPE(QPauseAnimation *)

class QtScriptQVariantAnimation : public QtScriptQAbstractAnimation
{
	Q_OBJECT

protected:
	explicit QtScriptQVariantAnimation(QScriptEngine *engine, const QByteArray &className);

	virtual int constructorArgumentCountMin() const override;
	virtual int constructorArgumentCountMax() const override;
	virtual bool constructObject(QScriptContext *, NativeObjectType &out) override;

public:
	explicit QtScriptQVariantAnimation(QScriptEngine *engine);
	static void Register(const QScriptValue &targetNamespace);

	Q_PROPERTY(QEasingCurve easingCurve READ easingCurve WRITE setEasingCurve)
	Q_PROPERTY(QVector<QPair<double, QVariant>> keyValues READ keyValues WRITE setKeyValues)
	Q_PROPERTY(QVariant endValue READ endValue WRITE setEndValue)
	Q_PROPERTY(QVariant startValue READ startValue WRITE setStartValue)
	Q_PROPERTY(int duration READ duration WRITE setDuration)
	Q_INVOKABLE QVariant keyValueAt(qreal step);
	Q_INVOKABLE QVariant currentValue();
	Q_INVOKABLE void setKeyValueAt(qreal step, const QVariant& value);
	void setEasingCurve(const QEasingCurve& easing);
	void setKeyValues(const QVector<QPair<double, QVariant>>& values);
	QVector<QPair<double, QVariant>> keyValues();
	QEasingCurve easingCurve();
	void setEndValue(const QVariant& value);
	QVariant endValue();
	int duration();
	Q_INVOKABLE void valueChanged(const QVariant& value);
	void setStartValue(const QVariant& value);
	void setDuration(int msecs);
	QVariant startValue();
};

Q_DECLARE_METATYPE(QVariantAnimation *)

class QtScriptQPropertyAnimation : public QtScriptQVariantAnimation
{
	Q_OBJECT

protected:
	explicit QtScriptQPropertyAnimation(QScriptEngine *engine, const QByteArray &className);

	virtual int constructorArgumentCountMin() const override;
	virtual int constructorArgumentCountMax() const override;
	virtual bool constructObject(QScriptContext *, NativeObjectType &out) override;

public:
	explicit QtScriptQPropertyAnimation(QScriptEngine *engine);
	static void Register(const QScriptValue &targetNamespace);

	Q_PROPERTY(QByteArray propertyName READ propertyName WRITE setPropertyName)
	Q_PROPERTY(QObject* targetObject READ targetObject WRITE setTargetObject)
	void setPropertyName(const QByteArray& propertyName);
	QByteArray propertyName();
	void setTargetObject(QObject* target);
	QObject* targetObject();
};

Q_DECLARE_METATYPE(QPropertyAnimation *)

class QtScriptQSize final : public QtScriptBaseClassPrototype<QSize>
{
	Q_OBJECT

protected:
	explicit QtScriptQSize(QScriptEngine *engine, const QByteArray &className);

	virtual int constructorArgumentCountMin() const override;
	virtual int constructorArgumentCountMax() const override;
	virtual bool constructObject(QScriptContext *, NativeObjectType &out) override;

public:
	explicit QtScriptQSize(QScriptEngine *engine);
	static void Register(const QScriptValue &targetNamespace);

	Q_PROPERTY(int height READ height WRITE setHeight)
	Q_PROPERTY(int width READ width WRITE setWidth)
	void setHeight(int h);
	Q_INVOKABLE QSize transposed();
	Q_INVOKABLE void scale(const QSize& s, int mode);
	Q_INVOKABLE void scale(int w, int h, int mode);
	Q_INVOKABLE void multiplyBy(qreal c);
	int width();
	Q_INVOKABLE bool isValid();
	Q_INVOKABLE QSize boundedTo(const QSize& arg0);
	Q_INVOKABLE void transpose();
	Q_INVOKABLE void divideBy(qreal c);
	int height();
	Q_INVOKABLE QSize scaled(const QSize& s, int mode);
	Q_INVOKABLE QSize scaled(int w, int h, int mode);
	Q_INVOKABLE bool isNull();
	Q_INVOKABLE QSize expandedTo(const QSize& arg0);
	Q_INVOKABLE bool isEmpty();
	Q_INVOKABLE int rwidth();
	Q_INVOKABLE int rheight();
	Q_INVOKABLE void dec(const QSize& arg0);
	void setWidth(int w);
	Q_INVOKABLE void inc(const QSize& arg0);
};

Q_DECLARE_METATYPE(QSize)
Q_DECLARE_METATYPE(QSize *)

class QtScriptQSizeF final : public QtScriptBaseClassPrototype<QSizeF>
{
	Q_OBJECT

protected:
	explicit QtScriptQSizeF(QScriptEngine *engine, const QByteArray &className);

	virtual int constructorArgumentCountMin() const override;
	virtual int constructorArgumentCountMax() const override;
	virtual bool constructObject(QScriptContext *, NativeObjectType &out) override;

public:
	explicit QtScriptQSizeF(QScriptEngine *engine);
	static void Register(const QScriptValue &targetNamespace);

	Q_PROPERTY(qreal height READ height WRITE setHeight)
	Q_PROPERTY(qreal width READ width WRITE setWidth)
	void setHeight(qreal h);
	Q_INVOKABLE QSizeF transposed();
	Q_INVOKABLE void scale(const QSizeF& s, int mode);
	Q_INVOKABLE void scale(qreal w, qreal h, int mode);
	Q_INVOKABLE void multiplyBy(qreal c);
	qreal width();
	Q_INVOKABLE bool isValid();
	Q_INVOKABLE QSizeF boundedTo(const QSizeF& arg0);
	Q_INVOKABLE void transpose();
	Q_INVOKABLE void divideBy(qreal c);
	qreal height();
	Q_INVOKABLE QSizeF scaled(const QSizeF& s, int mode);
	Q_INVOKABLE QSizeF scaled(qreal w, qreal h, int mode);
	Q_INVOKABLE bool isNull();
	Q_INVOKABLE QSizeF expandedTo(const QSizeF& arg0);
	Q_INVOKABLE bool isEmpty();
	Q_INVOKABLE qreal rwidth();
	Q_INVOKABLE qreal rheight();
	Q_INVOKABLE void dec(const QSizeF& arg0);
	void setWidth(qreal w);
	Q_INVOKABLE QSize toSize();
	Q_INVOKABLE void inc(const QSizeF& arg0);
};

Q_DECLARE_METATYPE(QSizeF)
Q_DECLARE_METATYPE(QSizeF *)

class QtScriptQRect final : public QtScriptBaseClassPrototype<QRect>
{
	Q_OBJECT

protected:
	explicit QtScriptQRect(QScriptEngine *engine, const QByteArray &className);

	virtual int constructorArgumentCountMin() const override;
	virtual int constructorArgumentCountMax() const override;
	virtual bool constructObject(QScriptContext *, NativeObjectType &out) override;

public:
	explicit QtScriptQRect(QScriptEngine *engine);
	static void Register(const QScriptValue &targetNamespace);

	Q_PROPERTY(int bottom READ bottom WRITE setBottom)
	Q_PROPERTY(int top READ top WRITE setTop)
	Q_PROPERTY(QPoint bottomLeft READ bottomLeft WRITE setBottomLeft)
	Q_PROPERTY(int width READ width WRITE setWidth)
	Q_PROPERTY(int left READ left WRITE setLeft)
	Q_PROPERTY(QPoint topLeft READ topLeft WRITE setTopLeft)
	Q_PROPERTY(int height READ height WRITE setHeight)
	Q_PROPERTY(QPoint bottomRight READ bottomRight WRITE setBottomRight)
	Q_PROPERTY(QPoint topRight READ topRight WRITE setTopRight)
	Q_PROPERTY(int x READ x WRITE setX)
	Q_PROPERTY(int y READ y WRITE setY)
	Q_PROPERTY(QSize size READ size WRITE setSize)
	Q_PROPERTY(int right READ right WRITE setRight)
	QPoint topLeft();
	Q_INVOKABLE void moveTo(const QPoint& p);
	Q_INVOKABLE void moveTo(int x, int t);
	int right();
	Q_INVOKABLE bool intersects(const QRect& r);
	Q_INVOKABLE QRect marginsRemoved(const QMargins& margins);
	void setBottom(int pos);
	Q_INVOKABLE QRect adjusted(int x1, int y1, int x2, int y2);
	void setTop(int pos);
	void setBottomLeft(const QPoint& p);
	Q_INVOKABLE void moveRight(int pos);
	Q_INVOKABLE void moveBottomLeft(const QPoint& p);
	void setWidth(int w);
	Q_INVOKABLE QRect marginsAdded(const QMargins& margins);
	QSize size();
	Q_INVOKABLE void moveBottom(int pos);
	Q_INVOKABLE void setCoords(int x1, int y1, int x2, int y2);
	Q_INVOKABLE void inc(const QMargins& margins);
	QPoint bottomRight();
	int bottom();
	void setLeft(int pos);
	int top();
	Q_INVOKABLE bool contains(const QRect& r);
	Q_INVOKABLE bool contains(const QRect& r, bool proper);
	Q_INVOKABLE bool contains(int x, int y, bool proper);
	void setTopLeft(const QPoint& p);
	QPoint topRight();
	Q_INVOKABLE void moveCenter(const QPoint& p);
	int width();
	Q_INVOKABLE bool isEmpty();
	Q_INVOKABLE void translate(const QPoint& p);
	Q_INVOKABLE void translate(int dx, int dy);
	Q_INVOKABLE void setRect(int x, int y, int w, int h);
	void setHeight(int h);
	void setBottomRight(const QPoint& p);
	Q_INVOKABLE bool isValid();
	void setTopRight(const QPoint& p);
	Q_INVOKABLE QRect translated(const QPoint& p);
	Q_INVOKABLE QRect translated(int dx, int dy);
	Q_INVOKABLE QRect united(const QRect& other);
	Q_INVOKABLE QRect normalized();
	Q_INVOKABLE void moveBottomRight(const QPoint& p);
	void setX(int x);
	void setY(int y);
	Q_INVOKABLE void moveLeft(int pos);
	Q_INVOKABLE QRect transposed();
	Q_INVOKABLE void dec(const QMargins& margins);
	QPoint bottomLeft();
	Q_INVOKABLE QPoint center();
	Q_INVOKABLE void moveTopRight(const QPoint& p);
	void setSize(const QSize& s);
	Q_INVOKABLE QRect intersected(const QRect& other);
	void setRight(int pos);
	int height();
	Q_INVOKABLE bool isNull();
	Q_INVOKABLE void adjust(int x1, int y1, int x2, int y2);
	int y();
	int x();
	Q_INVOKABLE void moveTop(int pos);
	Q_INVOKABLE void moveTopLeft(const QPoint& p);
	int left();
};

Q_DECLARE_METATYPE(QRect)
Q_DECLARE_METATYPE(QRect *)

class QtScriptQRectF final : public QtScriptBaseClassPrototype<QRectF>
{
	Q_OBJECT

protected:
	explicit QtScriptQRectF(QScriptEngine *engine, const QByteArray &className);

	virtual int constructorArgumentCountMin() const override;
	virtual int constructorArgumentCountMax() const override;
	virtual bool constructObject(QScriptContext *, NativeObjectType &out) override;

public:
	explicit QtScriptQRectF(QScriptEngine *engine);
	static void Register(const QScriptValue &targetNamespace);

	Q_PROPERTY(qreal bottom READ bottom WRITE setBottom)
	Q_PROPERTY(qreal top READ top WRITE setTop)
	Q_PROPERTY(QPointF bottomLeft READ bottomLeft WRITE setBottomLeft)
	Q_PROPERTY(qreal width READ width WRITE setWidth)
	Q_PROPERTY(qreal left READ left WRITE setLeft)
	Q_PROPERTY(QPointF topLeft READ topLeft WRITE setTopLeft)
	Q_PROPERTY(qreal height READ height WRITE setHeight)
	Q_PROPERTY(QPointF bottomRight READ bottomRight WRITE setBottomRight)
	Q_PROPERTY(QPointF topRight READ topRight WRITE setTopRight)
	Q_PROPERTY(qreal x READ x WRITE setX)
	Q_PROPERTY(qreal y READ y WRITE setY)
	Q_PROPERTY(QSizeF size READ size WRITE setSize)
	Q_PROPERTY(qreal right READ right WRITE setRight)
	QPointF topLeft();
	Q_INVOKABLE void moveTo(const QPointF& p);
	Q_INVOKABLE void moveTo(qreal x, qreal y);
	qreal right();
	Q_INVOKABLE bool intersects(const QRectF& r);
	Q_INVOKABLE QRectF marginsRemoved(const QMarginsF& margins);
	void setBottom(qreal pos);
	Q_INVOKABLE QRectF adjusted(qreal x1, qreal y1, qreal x2, qreal y2);
	void setTop(qreal pos);
	void setBottomLeft(const QPointF& p);
	Q_INVOKABLE void moveRight(qreal pos);
	Q_INVOKABLE void moveBottomLeft(const QPointF& p);
	void setWidth(qreal w);
	Q_INVOKABLE QRectF marginsAdded(const QMarginsF& margins);
	QSizeF size();
	Q_INVOKABLE void moveBottom(qreal pos);
	Q_INVOKABLE void setCoords(qreal x1, qreal y1, qreal x2, qreal y2);
	Q_INVOKABLE void inc(const QMarginsF& margins);
	QPointF bottomRight();
	qreal bottom();
	Q_INVOKABLE QRect toRect();
	void setLeft(qreal pos);
	qreal top();
	Q_INVOKABLE bool contains(const QRectF& r);
	Q_INVOKABLE bool contains(qreal x, qreal y);
	void setTopLeft(const QPointF& p);
	QPointF topRight();
	Q_INVOKABLE void moveCenter(const QPointF& p);
	qreal width();
	Q_INVOKABLE bool isEmpty();
	Q_INVOKABLE void translate(const QPointF& p);
	Q_INVOKABLE void translate(qreal dx, qreal dy);
	Q_INVOKABLE void setRect(qreal x, qreal y, qreal w, qreal h);
	void setHeight(qreal h);
	void setBottomRight(const QPointF& p);
	Q_INVOKABLE bool isValid();
	void setTopRight(const QPointF& p);
	Q_INVOKABLE QRectF translated(const QPointF& p);
	Q_INVOKABLE QRectF translated(qreal dx, qreal dy);
	Q_INVOKABLE QRectF united(const QRectF& other);
	Q_INVOKABLE QRectF normalized();
	Q_INVOKABLE void moveBottomRight(const QPointF& p);
	void setX(qreal pos);
	void setY(qreal pos);
	Q_INVOKABLE void moveLeft(qreal pos);
	Q_INVOKABLE QRectF transposed();
	Q_INVOKABLE void dec(const QMarginsF& margins);
	QPointF bottomLeft();
	Q_INVOKABLE QPointF center();
	Q_INVOKABLE void moveTopRight(const QPointF& p);
	void setSize(const QSizeF& s);
	Q_INVOKABLE QRect toAlignedRect();
	Q_INVOKABLE QRectF intersected(const QRectF& other);
	void setRight(qreal pos);
	qreal height();
	Q_INVOKABLE bool isNull();
	Q_INVOKABLE void adjust(qreal x1, qreal y1, qreal x2, qreal y2);
	qreal y();
	qreal x();
	Q_INVOKABLE void moveTop(qreal pos);
	Q_INVOKABLE void moveTopLeft(const QPointF& p);
	qreal left();
};

Q_DECLARE_METATYPE(QRectF)
Q_DECLARE_METATYPE(QRectF *)

class QtScriptQSaveFile : public QtScriptQFileDevice
{
	Q_OBJECT

protected:
	explicit QtScriptQSaveFile(QScriptEngine *engine, const QByteArray &className);

	virtual int constructorArgumentCountMin() const override;
	virtual int constructorArgumentCountMax() const override;
	virtual bool constructObject(QScriptContext *, NativeObjectType &out) override;

public:
	explicit QtScriptQSaveFile(QScriptEngine *engine);
	static void Register(const QScriptValue &targetNamespace);

	Q_PROPERTY(bool directWriteFallback READ directWriteFallback WRITE setDirectWriteFallback)
	void setDirectWriteFallback(bool enabled);
	Q_INVOKABLE bool commit();
	bool directWriteFallback();
	Q_INVOKABLE void setFileName(const QString& name);
	Q_INVOKABLE void cancelWriting();
};

Q_DECLARE_METATYPE(QSaveFile *)

class QtScriptQSequentialAnimationGroup : public QtScriptQAnimationGroup
{
	Q_OBJECT

protected:
	explicit QtScriptQSequentialAnimationGroup(QScriptEngine *engine, const QByteArray &className);

	virtual int constructorArgumentCountMin() const override;
	virtual int constructorArgumentCountMax() const override;
	virtual bool constructObject(QScriptContext *, NativeObjectType &out) override;

public:
	explicit QtScriptQSequentialAnimationGroup(QScriptEngine *engine);
	static void Register(const QScriptValue &targetNamespace);

	Q_INVOKABLE int duration();
	Q_INVOKABLE QPauseAnimation* addPause(int msecs);
	Q_INVOKABLE QPauseAnimation* insertPause(int index, int msecs);
	Q_INVOKABLE void currentAnimationChanged(QAbstractAnimation* current);
	Q_INVOKABLE QAbstractAnimation* currentAnimation();
};

Q_DECLARE_METATYPE(QSequentialAnimationGroup *)

class QtScriptQSettings : public QtScriptQObject
{
	Q_OBJECT

protected:
	explicit QtScriptQSettings(QScriptEngine *engine, const QByteArray &className);

	virtual int constructorArgumentCountMin() const override;
	virtual int constructorArgumentCountMax() const override;
	virtual bool constructObject(QScriptContext *, NativeObjectType &out) override;

public:
	explicit QtScriptQSettings(QScriptEngine *engine);
	static void Register(const QScriptValue &targetNamespace);

	Q_PROPERTY(QTextCodec* iniCodec READ iniCodec WRITE setIniCodec)
	Q_PROPERTY(bool fallbacksEnabled READ fallbacksEnabled WRITE setFallbacksEnabled)
	void setIniCodec(QTextCodec* codec);
	Q_INVOKABLE void sync();
	Q_INVOKABLE void remove(const QString& key);
	bool fallbacksEnabled();
	Q_INVOKABLE QStringList allKeys();
	Q_INVOKABLE QString applicationName();
	Q_INVOKABLE QString group();
	Q_INVOKABLE bool isWritable();
	Q_INVOKABLE bool contains(const QString& key);
	Q_INVOKABLE void setArrayIndex(int i);
	Q_INVOKABLE void beginGroup(const QString& prefix);
	Q_INVOKABLE QStringList childGroups();
	Q_INVOKABLE int scope();
	void setFallbacksEnabled(bool b);
	Q_INVOKABLE int status();
	Q_INVOKABLE void setValue(const QString& key, const QVariant& value);
	Q_INVOKABLE void beginWriteArray(const QString& prefix);
	Q_INVOKABLE void beginWriteArray(const QString& prefix, int size);
	Q_INVOKABLE int format();
	Q_INVOKABLE void endGroup();
	Q_INVOKABLE QString fileName();
	Q_INVOKABLE QStringList childKeys();
	QTextCodec* iniCodec();
	Q_INVOKABLE QString organizationName();
	Q_INVOKABLE void clear();
	Q_INVOKABLE QVariant value(const QString& key, const QVariant& defaultValue);
	Q_INVOKABLE int beginReadArray(const QString& prefix);
	Q_INVOKABLE void endArray();
	static QScriptValue setUserIniPath(QScriptContext *context, QScriptEngine* engine);
	static QScriptValue defaultFormat(QScriptContext *context, QScriptEngine* engine);
	static QScriptValue setSystemIniPath(QScriptContext *context, QScriptEngine* engine);
	static QScriptValue setDefaultFormat(QScriptContext *context, QScriptEngine* engine);
	static QScriptValue setPath(QScriptContext *context, QScriptEngine* engine);
};

Q_DECLARE_METATYPE(QSettings *)

class QtScriptQStandardPaths : public QtScriptBaseClassPrototype<QStandardPaths *>
{
	Q_OBJECT

protected:
	explicit QtScriptQStandardPaths(QScriptEngine *engine, const QByteArray &className);

	virtual int constructorArgumentCountMin() const override;
	virtual int constructorArgumentCountMax() const override;
	virtual bool constructObject(QScriptContext *, NativeObjectType &out) override;

public:
	explicit QtScriptQStandardPaths(QScriptEngine *engine);
	static void Register(const QScriptValue &targetNamespace);

	static QScriptValue locate(QScriptContext *context, QScriptEngine* engine);
	static QScriptValue displayName(QScriptContext *context, QScriptEngine* engine);
	static QScriptValue setTestModeEnabled(QScriptContext *context, QScriptEngine* engine);
	static QScriptValue enableTestMode(QScriptContext *context, QScriptEngine* engine);
	static QScriptValue writableLocation(QScriptContext *context, QScriptEngine* engine);
	static QScriptValue findExecutable(QScriptContext *context, QScriptEngine* engine);
	static QScriptValue standardLocations(QScriptContext *context, QScriptEngine* engine);
	static QScriptValue locateAll(QScriptContext *context, QScriptEngine* engine);
	static QScriptValue isTestModeEnabled(QScriptContext *context, QScriptEngine* engine);
};

Q_DECLARE_METATYPE(QStandardPaths *)

class QtScriptQTemporaryDir : public QtScriptBaseClassPrototype<QTemporaryDir *>
{
	Q_OBJECT

protected:
	explicit QtScriptQTemporaryDir(QScriptEngine *engine, const QByteArray &className);

	virtual int constructorArgumentCountMin() const override;
	virtual int constructorArgumentCountMax() const override;
	virtual bool constructObject(QScriptContext *, NativeObjectType &out) override;

public:
	explicit QtScriptQTemporaryDir(QScriptEngine *engine);
	static void Register(const QScriptValue &targetNamespace);

	Q_PROPERTY(bool autoRemove READ autoRemove WRITE setAutoRemove)
	bool autoRemove();
	void setAutoRemove(bool b);
	Q_INVOKABLE QString errorString();
	Q_INVOKABLE QString filePath(const QString& fileName);
	Q_INVOKABLE bool isValid();
	Q_INVOKABLE bool remove();
	Q_INVOKABLE QString path();
};

Q_DECLARE_METATYPE(QTemporaryDir *)

class QtScriptQTemporaryFile : public QtScriptQFile
{
	Q_OBJECT

protected:
	explicit QtScriptQTemporaryFile(QScriptEngine *engine, const QByteArray &className);

	virtual int constructorArgumentCountMin() const override;
	virtual int constructorArgumentCountMax() const override;
	virtual bool constructObject(QScriptContext *, NativeObjectType &out) override;

public:
	explicit QtScriptQTemporaryFile(QScriptEngine *engine);
	static void Register(const QScriptValue &targetNamespace);

	Q_PROPERTY(bool autoRemove READ autoRemove WRITE setAutoRemove)
	Q_PROPERTY(QString fileTemplate READ fileTemplate WRITE setFileTemplate)
	Q_INVOKABLE bool open();
	bool autoRemove();
	void setAutoRemove(bool b);
	void setFileTemplate(const QString& name);
	QString fileTemplate();
	static QScriptValue createNativeFile(QScriptContext *context, QScriptEngine* engine);
	static QScriptValue createLocalFile(QScriptContext *context, QScriptEngine* engine);
};

Q_DECLARE_METATYPE(QTemporaryFile *)

class QtScriptQTextCodec : public QtScriptBaseClassPrototype<QTextCodec *>
{
	Q_OBJECT

protected:
	explicit QtScriptQTextCodec(QScriptEngine *engine, const QByteArray &className);

	virtual int constructorArgumentCountMin() const override;
	virtual int constructorArgumentCountMax() const override;
	virtual bool constructObject(QScriptContext *, NativeObjectType &out) override;

public:
	explicit QtScriptQTextCodec(QScriptEngine *engine);
	static void Register(const QScriptValue &targetNamespace);

	Q_INVOKABLE bool canEncode(QChar arg0);
	Q_INVOKABLE QTextDecoder* makeDecoder();
	Q_INVOKABLE QTextDecoder* makeDecoder(int flags);
	Q_INVOKABLE QString toUnicode(const QByteArray& arg0);
	Q_INVOKABLE QTextEncoder* makeEncoder();
	Q_INVOKABLE QTextEncoder* makeEncoder(int flags);
	Q_INVOKABLE QByteArray fromUnicode(const QString& uc);
	Q_INVOKABLE QList<QByteArray> aliases();
	static QScriptValue codecForHtml(QScriptContext *context, QScriptEngine* engine);
	static QScriptValue codecForName(QScriptContext *context, QScriptEngine* engine);
	static QScriptValue codecForLocale(QScriptContext *context, QScriptEngine* engine);
	static QScriptValue setCodecForLocale(QScriptContext *context, QScriptEngine* engine);
	static QScriptValue codecForUtfText(QScriptContext *context, QScriptEngine* engine);
	static QScriptValue availableMibs(QScriptContext *context, QScriptEngine* engine);
	static QScriptValue codecForMib(QScriptContext *context, QScriptEngine* engine);
	static QScriptValue availableCodecs(QScriptContext *context, QScriptEngine* engine);
};

Q_DECLARE_METATYPE(QTextCodec *)

class QtScriptQTextEncoder : public QtScriptBaseClassPrototype<QTextEncoder *>
{
	Q_OBJECT

protected:
	explicit QtScriptQTextEncoder(QScriptEngine *engine, const QByteArray &className);

	virtual int constructorArgumentCountMin() const override;
	virtual int constructorArgumentCountMax() const override;
	virtual bool constructObject(QScriptContext *, NativeObjectType &out) override;

public:
	explicit QtScriptQTextEncoder(QScriptEngine *engine);
	static void Register(const QScriptValue &targetNamespace);

	Q_INVOKABLE QByteArray fromUnicode(const QString& str);
	Q_INVOKABLE bool hasFailure();
};

Q_DECLARE_METATYPE(QTextEncoder *)

class QtScriptQTextDecoder : public QtScriptBaseClassPrototype<QTextDecoder *>
{
	Q_OBJECT

protected:
	explicit QtScriptQTextDecoder(QScriptEngine *engine, const QByteArray &className);

	virtual int constructorArgumentCountMin() const override;
	virtual int constructorArgumentCountMax() const override;
	virtual bool constructObject(QScriptContext *, NativeObjectType &out) override;

public:
	explicit QtScriptQTextDecoder(QScriptEngine *engine);
	static void Register(const QScriptValue &targetNamespace);

	Q_INVOKABLE bool hasFailure();
	Q_INVOKABLE QString toUnicode(const QByteArray& ba);
};

Q_DECLARE_METATYPE(QTextDecoder *)

class QtScriptQTimeLine : public QtScriptQObject
{
	Q_OBJECT

protected:
	explicit QtScriptQTimeLine(QScriptEngine *engine, const QByteArray &className);

	virtual int constructorArgumentCountMin() const override;
	virtual int constructorArgumentCountMax() const override;
	virtual bool constructObject(QScriptContext *, NativeObjectType &out) override;

public:
	explicit QtScriptQTimeLine(QScriptEngine *engine);
	static void Register(const QScriptValue &targetNamespace);

	Q_PROPERTY(int curveShape READ curveShape WRITE setCurveShape)
	Q_PROPERTY(QEasingCurve easingCurve READ easingCurve WRITE setEasingCurve)
	Q_PROPERTY(int currentTime READ currentTime WRITE setCurrentTime)
	Q_PROPERTY(int direction READ direction WRITE setDirection)
	Q_PROPERTY(int loopCount READ loopCount WRITE setLoopCount)
	Q_PROPERTY(int updateInterval READ updateInterval WRITE setUpdateInterval)
	Q_PROPERTY(int endFrame READ endFrame WRITE setEndFrame)
	Q_PROPERTY(int duration READ duration WRITE setDuration)
	Q_PROPERTY(int startFrame READ startFrame WRITE setStartFrame)
	Q_INVOKABLE void toggleDirection();
	void setCurveShape(int shape);
	Q_INVOKABLE qreal currentValue();
	Q_INVOKABLE void stateChanged(int newState, QTimeLine::QPrivateSignal arg0);
	void setEasingCurve(const QEasingCurve& curve);
	void setCurrentTime(int msec);
	Q_INVOKABLE void setFrameRange(int startFrame, int endFrame);
	int duration();
	Q_INVOKABLE void frameChanged(int arg0, QTimeLine::QPrivateSignal arg1);
	int loopCount();
	void setDirection(int direction);
	Q_INVOKABLE qreal valueForTime(int msec);
	Q_INVOKABLE void start();
	Q_INVOKABLE int state();
	Q_INVOKABLE void valueChanged(qreal x, QTimeLine::QPrivateSignal arg0);
	int direction();
	void setLoopCount(int count);
	Q_INVOKABLE int frameForTime(int msec);
	int endFrame();
	Q_INVOKABLE void stop();
	Q_INVOKABLE void finished(QTimeLine::QPrivateSignal arg0);
	int startFrame();
	int updateInterval();
	Q_INVOKABLE int currentFrame();
	void setUpdateInterval(int interval);
	int curveShape();
	int currentTime();
	void setEndFrame(int frame);
	Q_INVOKABLE void resume();
	QEasingCurve easingCurve();
	void setDuration(int duration);
	void setStartFrame(int frame);
	Q_INVOKABLE void setPaused(bool paused);
};

Q_DECLARE_METATYPE(QTimeLine *)

class QtScriptQUrl final : public QtScriptBaseClassPrototype<QUrl>
{
	Q_OBJECT

protected:
	explicit QtScriptQUrl(QScriptEngine *engine, const QByteArray &className);

	virtual int constructorArgumentCountMin() const override;
	virtual int constructorArgumentCountMax() const override;
	virtual bool constructObject(QScriptContext *, NativeObjectType &out) override;

public:
	explicit QtScriptQUrl(QScriptEngine *engine);
	static void Register(const QScriptValue &targetNamespace);

	Q_PROPERTY(QString userName READ userName WRITE setUserName)
	Q_PROPERTY(QString scheme READ scheme WRITE setScheme)
	Q_PROPERTY(QString fragment READ fragment WRITE setFragment)
	Q_PROPERTY(QString host READ host WRITE setHost)
	Q_PROPERTY(QString password READ password WRITE setPassword)
	Q_PROPERTY(QString path READ path WRITE setPath)
	Q_PROPERTY(QString url READ url WRITE setUrl)
	Q_PROPERTY(QString authority READ authority WRITE setAuthority)
	Q_PROPERTY(QString query READ query WRITE setQuery)
	Q_PROPERTY(QString userInfo READ userInfo WRITE setUserInfo)
	Q_PROPERTY(int port READ port WRITE setPort)
	Q_INVOKABLE bool isDetached();
	Q_INVOKABLE QUrl adjusted(QUrlTwoFlags<QUrl::UrlFormattingOption, QUrl::ComponentFormattingOption> options);
	Q_INVOKABLE void set(const QUrl& copy);
	Q_INVOKABLE bool notEquals(const QUrl& url);
	Q_INVOKABLE bool isRelative();
	Q_INVOKABLE bool matches(const QUrl& url, QUrlTwoFlags<QUrl::UrlFormattingOption, QUrl::ComponentFormattingOption> options);
	QString authority();
	QString authority(int options);
	Q_INVOKABLE bool equals(const QUrl& url);
	void setUserName(const QString& userName);
	void setUserName(const QString& userName, int mode);
	void setScheme(const QString& scheme);
	QString query();
	QString query(int arg0);
	Q_INVOKABLE QString toDisplayString();
	Q_INVOKABLE QString toDisplayString(QUrlTwoFlags<QUrl::UrlFormattingOption, QUrl::ComponentFormattingOption> options);
	int port();
	int port(int defaultPort);
	Q_INVOKABLE QString topLevelDomain();
	Q_INVOKABLE QString topLevelDomain(int options);
	void setFragment(const QString& fragment);
	void setFragment(const QString& fragment, int mode);
	void setHost(const QString& host);
	void setHost(const QString& host, int mode);
	Q_INVOKABLE QString toString();
	Q_INVOKABLE QString toString(QUrlTwoFlags<QUrl::UrlFormattingOption, QUrl::ComponentFormattingOption> options);
	Q_INVOKABLE void swap(QUrl& other);
	void setPassword(const QString& password);
	void setPassword(const QString& password, int mode);
	Q_INVOKABLE bool isEmpty();
	void setPath(const QString& path);
	void setPath(const QString& path, int mode);
	QString scheme();
	Q_INVOKABLE QUrl resolved(const QUrl& relative);
	Q_INVOKABLE void detach();
	Q_INVOKABLE QString errorString();
	QString fragment();
	QString fragment(int options);
	Q_INVOKABLE bool isValid();
	void setUrl(const QString& url);
	void setUrl(const QString& url, int mode);
	Q_INVOKABLE QString fileName();
	Q_INVOKABLE QString fileName(int options);
	QString host();
	QString host(int arg0);
	QString userInfo();
	QString userInfo(int options);
	Q_INVOKABLE bool isParentOf(const QUrl& url);
	QString path();
	QString path(int options);
	QString password();
	QString password(int arg0);
	Q_INVOKABLE bool hasQuery();
	Q_INVOKABLE QByteArray toEncoded();
	Q_INVOKABLE QByteArray toEncoded(QUrlTwoFlags<QUrl::UrlFormattingOption, QUrl::ComponentFormattingOption> options);
	QString userName();
	QString userName(int options);
	Q_INVOKABLE QUrlPrivate* data_ptr();
	QString url();
	QString url(QUrlTwoFlags<QUrl::UrlFormattingOption, QUrl::ComponentFormattingOption> options);
	Q_INVOKABLE void clear();
	void setAuthority(const QString& authority);
	void setAuthority(const QString& authority, int mode);
	Q_INVOKABLE bool lessThan(const QUrl& url);
	Q_INVOKABLE bool hasFragment();
	void setQuery(const QString& query);
	void setQuery(const QString& query, int mode);
	void setUserInfo(const QString& userInfo);
	void setUserInfo(const QString& userInfo, int mode);
	Q_INVOKABLE bool isLocalFile();
	void setPort(int port);
	Q_INVOKABLE QString toLocalFile();
	static QScriptValue toAce(QScriptContext *context, QScriptEngine* engine);
	static QScriptValue fromAce(QScriptContext *context, QScriptEngine* engine);
	static QScriptValue toStringList(QScriptContext *context, QScriptEngine* engine);
	static QScriptValue fromEncoded(QScriptContext *context, QScriptEngine* engine);
	static QScriptValue fromUserInput(QScriptContext *context, QScriptEngine* engine);
	static QScriptValue fromPercentEncoding(QScriptContext *context, QScriptEngine* engine);
	static QScriptValue fromStringList(QScriptContext *context, QScriptEngine* engine);
	static QScriptValue fromLocalFile(QScriptContext *context, QScriptEngine* engine);
	static QScriptValue toPercentEncoding(QScriptContext *context, QScriptEngine* engine);
	static QScriptValue setIdnWhitelist(QScriptContext *context, QScriptEngine* engine);
	static QScriptValue idnWhitelist(QScriptContext *context, QScriptEngine* engine);
};

Q_DECLARE_METATYPE(QUrl)
Q_DECLARE_METATYPE(QUrl *)

class QtScriptQUrlQuery final : public QtScriptBaseClassPrototype<QUrlQuery>
{
	Q_OBJECT

protected:
	explicit QtScriptQUrlQuery(QScriptEngine *engine, const QByteArray &className);

	virtual int constructorArgumentCountMin() const override;
	virtual int constructorArgumentCountMax() const override;
	virtual bool constructObject(QScriptContext *, NativeObjectType &out) override;

public:
	explicit QtScriptQUrlQuery(QScriptEngine *engine);
	static void Register(const QScriptValue &targetNamespace);

	Q_PROPERTY(QList<QPair<QString, QString>> queryItems READ queryItems WRITE setQueryItems)
	Q_PROPERTY(QString query READ query WRITE setQuery)
	Q_INVOKABLE bool notEquals(const QUrlQuery& other);
	Q_INVOKABLE void addQueryItem(const QString& key, const QString& value);
	Q_INVOKABLE void set(const QUrlQuery& other);
	void setQueryItems(const QList<QPair<QString, QString>>& query);
	Q_INVOKABLE bool hasQueryItem(const QString& key);
	QString query();
	QString query(int encoding);
	Q_INVOKABLE QChar queryValueDelimiter();
	Q_INVOKABLE void removeAllQueryItems(const QString& key);
	Q_INVOKABLE bool isEmpty();
	Q_INVOKABLE void swap(QUrlQuery& other);
	Q_INVOKABLE QString toString();
	Q_INVOKABLE QString toString(int encoding);
	Q_INVOKABLE QSharedDataPointer<QUrlQueryPrivate> data_ptr();
	Q_INVOKABLE bool isDetached();
	Q_INVOKABLE QString queryItemValue(const QString& key);
	Q_INVOKABLE QString queryItemValue(const QString& key, int encoding);
	Q_INVOKABLE bool equals(const QUrlQuery& other);
	Q_INVOKABLE void setQueryDelimiters(QChar valueDelimiter, QChar pairDelimiter);
	QList<QPair<QString, QString>> queryItems();
	QList<QPair<QString, QString>> queryItems(int encoding);
	Q_INVOKABLE void clear();
	Q_INVOKABLE QChar queryPairDelimiter();
	Q_INVOKABLE QStringList allQueryItemValues(const QString& key);
	Q_INVOKABLE QStringList allQueryItemValues(const QString& key, int encoding);
	void setQuery(const QString& queryString);
	Q_INVOKABLE void removeQueryItem(const QString& key);
	static QScriptValue defaultQueryValueDelimiter(QScriptContext *context, QScriptEngine* engine);
	static QScriptValue defaultQueryPairDelimiter(QScriptContext *context, QScriptEngine* engine);
};

Q_DECLARE_METATYPE(QUrlQuery)
Q_DECLARE_METATYPE(QUrlQuery *)

