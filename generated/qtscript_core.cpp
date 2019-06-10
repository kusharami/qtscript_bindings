#include "qtscript_core.hpp"
#include "QtScriptUtils.h"
#include "QtScriptQByteArray.h"

QtScriptQAbstractAnimation::QtScriptQAbstractAnimation(QScriptEngine *engine, const QByteArray &className)
	: QtScriptQObject(engine, className)
{
}

QtScriptQAbstractAnimation::QtScriptQAbstractAnimation(QScriptEngine *engine)
	: QtScriptQAbstractAnimation(engine, "AbstractAnimation")
{
}

void QtScriptQAbstractAnimation::Register(const QScriptValue &targetNamespace)
{
	auto engine = targetNamespace.engine();
	Q_ASSERT(engine);
	auto inherit = engine->defaultPrototype(qMetaTypeId<QObject *>());
	auto ctor = RegisterT<QAbstractAnimation, QtScriptQAbstractAnimation>(targetNamespace, inherit);
	Q_ASSERT(ctor.isFunction());
}

int QtScriptQAbstractAnimation::constructorArgumentCountMin() const
{
	return 0;
}

int QtScriptQAbstractAnimation::constructorArgumentCountMax() const
{
	return 0;
}

bool QtScriptQAbstractAnimation::constructObject(QScriptContext *context, NativeObjectType &)
{
	QtScriptUtils::noPublicConstructorException(context,
		"QAbstractAnimation");
	return false;
}

int QtScriptQAbstractAnimation::direction()
{
	auto __o = this->thiz<QAbstractAnimation *>();
	if (__o)
	{
		return int(__o->direction());
	}
	return 0;
}

void QtScriptQAbstractAnimation::setLoopCount(int loopCount)
{
	auto __o = this->thiz<QAbstractAnimation *>();
	if (__o)
	{
		__o->setLoopCount(loopCount);
	}
}

QAnimationGroup* QtScriptQAbstractAnimation::group()
{
	auto __o = this->thiz<QAbstractAnimation *>();
	if (__o)
	{
		return __o->group();
	}
	return nullptr;
}

int QtScriptQAbstractAnimation::loopCount()
{
	auto __o = this->thiz<QAbstractAnimation *>();
	if (__o)
	{
		return __o->loopCount();
	}
	return 0;
}

int QtScriptQAbstractAnimation::currentTime()
{
	auto __o = this->thiz<QAbstractAnimation *>();
	if (__o)
	{
		return __o->currentTime();
	}
	return 0;
}

int QtScriptQAbstractAnimation::currentLoopTime()
{
	auto __o = this->thiz<QAbstractAnimation *>();
	if (__o)
	{
		return __o->currentLoopTime();
	}
	return 0;
}

void QtScriptQAbstractAnimation::setDirection(int direction)
{
	auto __o = this->thiz<QAbstractAnimation *>();
	if (__o)
	{
		__o->setDirection(QAbstractAnimation::Direction(direction));
	}
}

void QtScriptQAbstractAnimation::stop()
{
	auto __o = this->thiz<QAbstractAnimation *>();
	if (__o)
	{
		__o->stop();
	}
}

int QtScriptQAbstractAnimation::currentLoop()
{
	auto __o = this->thiz<QAbstractAnimation *>();
	if (__o)
	{
		return __o->currentLoop();
	}
	return 0;
}

void QtScriptQAbstractAnimation::resume()
{
	auto __o = this->thiz<QAbstractAnimation *>();
	if (__o)
	{
		__o->resume();
	}
}

void QtScriptQAbstractAnimation::start()
{
	auto __o = this->thiz<QAbstractAnimation *>();
	if (__o)
	{
		__o->start();
	}
}

void QtScriptQAbstractAnimation::start(int policy)
{
	auto __o = this->thiz<QAbstractAnimation *>();
	if (__o)
	{
		__o->start(QAbstractAnimation::DeletionPolicy(policy));
	}
}

int QtScriptQAbstractAnimation::state()
{
	auto __o = this->thiz<QAbstractAnimation *>();
	if (__o)
	{
		return int(__o->state());
	}
	return 0;
}

void QtScriptQAbstractAnimation::pause()
{
	auto __o = this->thiz<QAbstractAnimation *>();
	if (__o)
	{
		__o->pause();
	}
}

void QtScriptQAbstractAnimation::setCurrentTime(int msecs)
{
	auto __o = this->thiz<QAbstractAnimation *>();
	if (__o)
	{
		__o->setCurrentTime(msecs);
	}
}

void QtScriptQAbstractAnimation::setPaused(bool arg0)
{
	auto __o = this->thiz<QAbstractAnimation *>();
	if (__o)
	{
		__o->setPaused(arg0);
	}
}

int QtScriptQAbstractAnimation::totalDuration()
{
	auto __o = this->thiz<QAbstractAnimation *>();
	if (__o)
	{
		return __o->totalDuration();
	}
	return 0;
}

QtScriptQPoint::QtScriptQPoint(QScriptEngine *engine, const QByteArray &className)
	: QtScriptBaseClassPrototype<QPoint, false>(engine, className)
{
}

QtScriptQPoint::QtScriptQPoint(QScriptEngine *engine)
	: QtScriptQPoint(engine, "Point")
{
}

void QtScriptQPoint::Register(const QScriptValue &targetNamespace)
{
	auto engine = targetNamespace.engine();
	Q_ASSERT(engine);
	QScriptValue inherit;
	auto ctor = RegisterT<QPoint, QtScriptQPoint>(targetNamespace, inherit);
	Q_ASSERT(ctor.isFunction());
	ctor.setProperty("dotProduct", engine->newFunction(
		static_cast<QScriptValue (*)(QScriptContext *, QScriptEngine *)>(
			&QtScriptQPoint::dotProduct)),
			QScriptValue::ReadOnly | QScriptValue::Undeletable);
}

void QtScriptQPoint::dec(const QPoint& p)
{
	auto __o = this->thiz<QPoint *>();
	if (__o)
	{
		__o->operator-=(p);
	}
}

void QtScriptQPoint::multiplyBy(float factor)
{
	auto __o = this->thiz<QPoint *>();
	if (__o)
	{
		__o->operator*=(factor);
	}
}

int QtScriptQPoint::rx()
{
	auto __o = this->thiz<QPoint *>();
	if (__o)
	{
		return __o->rx();
	}
	return 0;
}

int QtScriptQPoint::ry()
{
	auto __o = this->thiz<QPoint *>();
	if (__o)
	{
		return __o->ry();
	}
	return 0;
}

void QtScriptQPoint::divideBy(qreal divisor)
{
	auto __o = this->thiz<QPoint *>();
	if (__o)
	{
		__o->operator/=(divisor);
	}
}

bool QtScriptQPoint::isNull()
{
	auto __o = this->thiz<QPoint *>();
	if (__o)
	{
		return __o->isNull();
	}
	return false;
}

int QtScriptQPoint::y()
{
	auto __o = this->thiz<QPoint *>();
	if (__o)
	{
		return __o->y();
	}
	return 0;
}

int QtScriptQPoint::x()
{
	auto __o = this->thiz<QPoint *>();
	if (__o)
	{
		return __o->x();
	}
	return 0;
}

void QtScriptQPoint::inc(const QPoint& p)
{
	auto __o = this->thiz<QPoint *>();
	if (__o)
	{
		__o->operator+=(p);
	}
}

void QtScriptQPoint::setX(int x)
{
	auto __o = this->thiz<QPoint *>();
	if (__o)
	{
		__o->setX(x);
	}
}

void QtScriptQPoint::setY(int y)
{
	auto __o = this->thiz<QPoint *>();
	if (__o)
	{
		__o->setY(y);
	}
}

int QtScriptQPoint::manhattanLength()
{
	auto __o = this->thiz<QPoint *>();
	if (__o)
	{
		return __o->manhattanLength();
	}
	return 0;
}

QScriptValue QtScriptQPoint::dotProduct(QScriptContext *context, QScriptEngine* __e)
{
	if (!QtScriptUtils::checkArgumentCount(context, 2, 2))
	{
		return __e->uncaughtException();
	}

	switch (context->argumentCount())
	{
		case 2:
		{
			auto arg0 = qscriptvalue_cast<QPoint>(context->argument(0));
			auto arg1 = qscriptvalue_cast<QPoint>(context->argument(1));
			return __e->toScriptValue(QPoint::dotProduct(arg0, arg1));
		}
	}

	QtScriptUtils::badArgumentsException(context,
			"QPoint::dotProduct");
	return __e->uncaughtException();
}

int QtScriptQPoint::constructorArgumentCountMin() const
{
	return 0;
}

int QtScriptQPoint::constructorArgumentCountMax() const
{
	return 2;
}

bool QtScriptQPoint::constructObject(QScriptContext *context, NativeObjectType &out)
{
	auto __e = context->engine();
	Q_UNUSED(__e);
	bool ok = false;
	switch (context->argumentCount())
	{
		case 0:
		{
			ok = true;
			break;
		}
		case 1:
		{
			break;
		}
		case 2:
		{
			auto arg0 = qscriptvalue_cast<int>(context->argument(0));
			auto arg1 = qscriptvalue_cast<int>(context->argument(1));
			out = QPoint(arg0, arg1);
			ok = true;
			break;
		}
	}
	
	if (!ok)
	{
		QtScriptUtils::badArgumentsException(context,
			"QPoint constructor");
	}
	return ok;
}

QtScriptQPointF::QtScriptQPointF(QScriptEngine *engine, const QByteArray &className)
	: QtScriptBaseClassPrototype<QPointF, false>(engine, className)
{
}

QtScriptQPointF::QtScriptQPointF(QScriptEngine *engine)
	: QtScriptQPointF(engine, "PointF")
{
}

void QtScriptQPointF::Register(const QScriptValue &targetNamespace)
{
	auto engine = targetNamespace.engine();
	Q_ASSERT(engine);
	QScriptValue inherit;
	auto ctor = RegisterT<QPointF, QtScriptQPointF>(targetNamespace, inherit);
	Q_ASSERT(ctor.isFunction());
	ctor.setProperty("dotProduct", engine->newFunction(
		static_cast<QScriptValue (*)(QScriptContext *, QScriptEngine *)>(
			&QtScriptQPointF::dotProduct)),
			QScriptValue::ReadOnly | QScriptValue::Undeletable);
}

QPoint QtScriptQPointF::toPoint()
{
	auto __o = this->thiz<QPointF *>();
	if (__o)
	{
		return __o->toPoint();
	}
	return QPoint();
}

void QtScriptQPointF::dec(const QPointF& p)
{
	auto __o = this->thiz<QPointF *>();
	if (__o)
	{
		__o->operator-=(p);
	}
}

void QtScriptQPointF::multiplyBy(qreal c)
{
	auto __o = this->thiz<QPointF *>();
	if (__o)
	{
		__o->operator*=(c);
	}
}

qreal QtScriptQPointF::rx()
{
	auto __o = this->thiz<QPointF *>();
	if (__o)
	{
		return __o->rx();
	}
	return static_cast<qreal>(0);
}

qreal QtScriptQPointF::ry()
{
	auto __o = this->thiz<QPointF *>();
	if (__o)
	{
		return __o->ry();
	}
	return static_cast<qreal>(0);
}

void QtScriptQPointF::divideBy(qreal c)
{
	auto __o = this->thiz<QPointF *>();
	if (__o)
	{
		__o->operator/=(c);
	}
}

bool QtScriptQPointF::isNull()
{
	auto __o = this->thiz<QPointF *>();
	if (__o)
	{
		return __o->isNull();
	}
	return false;
}

qreal QtScriptQPointF::y()
{
	auto __o = this->thiz<QPointF *>();
	if (__o)
	{
		return __o->y();
	}
	return static_cast<qreal>(0);
}

qreal QtScriptQPointF::x()
{
	auto __o = this->thiz<QPointF *>();
	if (__o)
	{
		return __o->x();
	}
	return static_cast<qreal>(0);
}

void QtScriptQPointF::inc(const QPointF& p)
{
	auto __o = this->thiz<QPointF *>();
	if (__o)
	{
		__o->operator+=(p);
	}
}

void QtScriptQPointF::setX(qreal x)
{
	auto __o = this->thiz<QPointF *>();
	if (__o)
	{
		__o->setX(x);
	}
}

void QtScriptQPointF::setY(qreal y)
{
	auto __o = this->thiz<QPointF *>();
	if (__o)
	{
		__o->setY(y);
	}
}

qreal QtScriptQPointF::manhattanLength()
{
	auto __o = this->thiz<QPointF *>();
	if (__o)
	{
		return __o->manhattanLength();
	}
	return static_cast<qreal>(0);
}

QScriptValue QtScriptQPointF::dotProduct(QScriptContext *context, QScriptEngine* __e)
{
	if (!QtScriptUtils::checkArgumentCount(context, 2, 2))
	{
		return __e->uncaughtException();
	}

	switch (context->argumentCount())
	{
		case 2:
		{
			auto arg0 = qscriptvalue_cast<QPointF>(context->argument(0));
			auto arg1 = qscriptvalue_cast<QPointF>(context->argument(1));
			return __e->toScriptValue(QPointF::dotProduct(arg0, arg1));
		}
	}

	QtScriptUtils::badArgumentsException(context,
			"QPointF::dotProduct");
	return __e->uncaughtException();
}

int QtScriptQPointF::constructorArgumentCountMin() const
{
	return 0;
}

int QtScriptQPointF::constructorArgumentCountMax() const
{
	return 2;
}

bool QtScriptQPointF::constructObject(QScriptContext *context, NativeObjectType &out)
{
	auto __e = context->engine();
	Q_UNUSED(__e);
	bool ok = false;
	switch (context->argumentCount())
	{
		case 0:
		{
			ok = true;
			break;
		}
		case 1:
		{
			auto arg0 = qscriptvalue_cast<QPoint>(context->argument(0));
			out = QPointF(arg0);
			ok = true;
			break;
		}
		case 2:
		{
			auto arg0 = qscriptvalue_cast<qreal>(context->argument(0));
			auto arg1 = qscriptvalue_cast<qreal>(context->argument(1));
			out = QPointF(arg0, arg1);
			ok = true;
			break;
		}
	}
	
	if (!ok)
	{
		QtScriptUtils::badArgumentsException(context,
			"QPointF constructor");
	}
	return ok;
}

QtScriptQAnimationGroup::QtScriptQAnimationGroup(QScriptEngine *engine, const QByteArray &className)
	: QtScriptQAbstractAnimation(engine, className)
{
}

QtScriptQAnimationGroup::QtScriptQAnimationGroup(QScriptEngine *engine)
	: QtScriptQAnimationGroup(engine, "AnimationGroup")
{
}

void QtScriptQAnimationGroup::Register(const QScriptValue &targetNamespace)
{
	auto engine = targetNamespace.engine();
	Q_ASSERT(engine);
	auto inherit = engine->defaultPrototype(qMetaTypeId<QAbstractAnimation *>());
	auto ctor = RegisterT<QAnimationGroup, QtScriptQAnimationGroup>(targetNamespace, inherit);
	Q_ASSERT(ctor.isFunction());
}

int QtScriptQAnimationGroup::constructorArgumentCountMin() const
{
	return 0;
}

int QtScriptQAnimationGroup::constructorArgumentCountMax() const
{
	return 0;
}

bool QtScriptQAnimationGroup::constructObject(QScriptContext *context, NativeObjectType &)
{
	QtScriptUtils::noPublicConstructorException(context,
		"QAnimationGroup");
	return false;
}

int QtScriptQAnimationGroup::animationCount()
{
	auto __o = this->thiz<QAnimationGroup *>();
	if (__o)
	{
		return __o->animationCount();
	}
	return 0;
}

QAbstractAnimation* QtScriptQAnimationGroup::takeAnimation(int index)
{
	auto __o = this->thiz<QAnimationGroup *>();
	if (__o)
	{
		return __o->takeAnimation(index);
	}
	return nullptr;
}

void QtScriptQAnimationGroup::addAnimation(QAbstractAnimation* animation)
{
	auto __o = this->thiz<QAnimationGroup *>();
	if (__o)
	{
		__o->addAnimation(animation);
	}
}

int QtScriptQAnimationGroup::indexOfAnimation(QAbstractAnimation* animation)
{
	auto __o = this->thiz<QAnimationGroup *>();
	if (__o)
	{
		return __o->indexOfAnimation(animation);
	}
	return 0;
}

void QtScriptQAnimationGroup::clear()
{
	auto __o = this->thiz<QAnimationGroup *>();
	if (__o)
	{
		__o->clear();
	}
}

void QtScriptQAnimationGroup::insertAnimation(int index, QAbstractAnimation* animation)
{
	auto __o = this->thiz<QAnimationGroup *>();
	if (__o)
	{
		__o->insertAnimation(index, animation);
	}
}

QAbstractAnimation* QtScriptQAnimationGroup::animationAt(int index)
{
	auto __o = this->thiz<QAnimationGroup *>();
	if (__o)
	{
		return __o->animationAt(index);
	}
	return nullptr;
}

void QtScriptQAnimationGroup::removeAnimation(QAbstractAnimation* animation)
{
	auto __o = this->thiz<QAnimationGroup *>();
	if (__o)
	{
		__o->removeAnimation(animation);
	}
}

QtScriptQIODevice::QtScriptQIODevice(QScriptEngine *engine, const QByteArray &className)
	: QtScriptQObject(engine, className)
{
}

QtScriptQIODevice::QtScriptQIODevice(QScriptEngine *engine)
	: QtScriptQIODevice(engine, "IODevice")
{
}

void QtScriptQIODevice::Register(const QScriptValue &targetNamespace)
{
	auto engine = targetNamespace.engine();
	Q_ASSERT(engine);
	auto inherit = engine->defaultPrototype(qMetaTypeId<QObject *>());
	auto ctor = RegisterT<QIODevice, QtScriptQIODevice>(targetNamespace, inherit);
	Q_ASSERT(ctor.isFunction());
}

int QtScriptQIODevice::constructorArgumentCountMin() const
{
	return 0;
}

int QtScriptQIODevice::constructorArgumentCountMax() const
{
	return 0;
}

bool QtScriptQIODevice::constructObject(QScriptContext *context, NativeObjectType &)
{
	QtScriptUtils::noPublicConstructorException(context,
		"QIODevice");
	return false;
}

void QtScriptQIODevice::setCurrentWriteChannel(int channel)
{
	auto __o = this->thiz<QIODevice *>();
	if (__o)
	{
		__o->setCurrentWriteChannel(channel);
	}
}

qint64 QtScriptQIODevice::bytesAvailable()
{
	auto __o = this->thiz<QIODevice *>();
	if (__o)
	{
		return __o->bytesAvailable();
	}
	return static_cast<qint64>(0);
}

void QtScriptQIODevice::startTransaction()
{
	auto __o = this->thiz<QIODevice *>();
	if (__o)
	{
		__o->startTransaction();
	}
}

qint64 QtScriptQIODevice::pos()
{
	auto __o = this->thiz<QIODevice *>();
	if (__o)
	{
		return __o->pos();
	}
	return static_cast<qint64>(0);
}

qint64 QtScriptQIODevice::bytesToWrite()
{
	auto __o = this->thiz<QIODevice *>();
	if (__o)
	{
		return __o->bytesToWrite();
	}
	return static_cast<qint64>(0);
}

void QtScriptQIODevice::close()
{
	auto __o = this->thiz<QIODevice *>();
	if (__o)
	{
		__o->close();
	}
}

void QtScriptQIODevice::setCurrentReadChannel(int channel)
{
	auto __o = this->thiz<QIODevice *>();
	if (__o)
	{
		__o->setCurrentReadChannel(channel);
	}
}

bool QtScriptQIODevice::seek(qint64 pos)
{
	auto __o = this->thiz<QIODevice *>();
	if (__o)
	{
		return __o->seek(pos);
	}
	return false;
}

bool QtScriptQIODevice::isSequential()
{
	auto __o = this->thiz<QIODevice *>();
	if (__o)
	{
		return __o->isSequential();
	}
	return false;
}

void QtScriptQIODevice::ungetChar(char c)
{
	auto __o = this->thiz<QIODevice *>();
	if (__o)
	{
		__o->ungetChar(c);
	}
}

qint64 QtScriptQIODevice::size()
{
	auto __o = this->thiz<QIODevice *>();
	if (__o)
	{
		return __o->size();
	}
	return static_cast<qint64>(0);
}

bool QtScriptQIODevice::canReadLine()
{
	auto __o = this->thiz<QIODevice *>();
	if (__o)
	{
		return __o->canReadLine();
	}
	return false;
}

bool QtScriptQIODevice::waitForBytesWritten(int msecs)
{
	auto __o = this->thiz<QIODevice *>();
	if (__o)
	{
		return __o->waitForBytesWritten(msecs);
	}
	return false;
}

int QtScriptQIODevice::currentWriteChannel()
{
	auto __o = this->thiz<QIODevice *>();
	if (__o)
	{
		return __o->currentWriteChannel();
	}
	return 0;
}

QString QtScriptQIODevice::errorString()
{
	auto __o = this->thiz<QIODevice *>();
	if (__o)
	{
		return __o->errorString();
	}
	return QString();
}

bool QtScriptQIODevice::open(int mode)
{
	auto __o = this->thiz<QIODevice *>();
	if (__o)
	{
		return __o->open(QFlags<QIODevice::OpenModeFlag>(mode));
	}
	return false;
}

bool QtScriptQIODevice::isWritable()
{
	auto __o = this->thiz<QIODevice *>();
	if (__o)
	{
		return __o->isWritable();
	}
	return false;
}

qint64 QtScriptQIODevice::write(const QByteArray& data)
{
	auto __o = this->thiz<QIODevice *>();
	if (__o)
	{
		return __o->write(data.data());
	}
	return static_cast<qint64>(0);
}

qint64 QtScriptQIODevice::write(const QByteArray& data, qint64 len)
{
	auto __o = this->thiz<QIODevice *>();
	if (__o)
	{
		return __o->write(data.data(), len);
	}
	return static_cast<qint64>(0);
}

int QtScriptQIODevice::currentReadChannel()
{
	auto __o = this->thiz<QIODevice *>();
	if (__o)
	{
		return __o->currentReadChannel();
	}
	return 0;
}

QByteArray QtScriptQIODevice::peek(qint64 maxlen)
{
	auto __o = this->thiz<QIODevice *>();
	if (__o)
	{
		return __o->peek(maxlen);
	}
	return QByteArray();
}

qint64 QtScriptQIODevice::peek(QByteArray* data, qint64 maxlen)
{
	auto __o = this->thiz<QIODevice *>();
	if (__o)
	{
		return __o->peek(data->data(), maxlen);
	}
	return static_cast<qint64>(0);
}

bool QtScriptQIODevice::putChar(char c)
{
	auto __o = this->thiz<QIODevice *>();
	if (__o)
	{
		return __o->putChar(c);
	}
	return false;
}

bool QtScriptQIODevice::isOpen()
{
	auto __o = this->thiz<QIODevice *>();
	if (__o)
	{
		return __o->isOpen();
	}
	return false;
}

QByteArray QtScriptQIODevice::read(qint64 maxlen)
{
	auto __o = this->thiz<QIODevice *>();
	if (__o)
	{
		return __o->read(maxlen);
	}
	return QByteArray();
}

qint64 QtScriptQIODevice::read(QByteArray* data, qint64 maxlen)
{
	auto __o = this->thiz<QIODevice *>();
	if (__o)
	{
		return __o->read(data->data(), maxlen);
	}
	return static_cast<qint64>(0);
}

QByteArray QtScriptQIODevice::readAll()
{
	auto __o = this->thiz<QIODevice *>();
	if (__o)
	{
		return __o->readAll();
	}
	return QByteArray();
}

void QtScriptQIODevice::rollbackTransaction()
{
	auto __o = this->thiz<QIODevice *>();
	if (__o)
	{
		__o->rollbackTransaction();
	}
}

void QtScriptQIODevice::setTextModeEnabled(bool enabled)
{
	auto __o = this->thiz<QIODevice *>();
	if (__o)
	{
		__o->setTextModeEnabled(enabled);
	}
}

QByteArray QtScriptQIODevice::readLine()
{
	auto __o = this->thiz<QIODevice *>();
	if (__o)
	{
		return __o->readLine();
	}
	return QByteArray();
}

QByteArray QtScriptQIODevice::readLine(qint64 maxlen)
{
	auto __o = this->thiz<QIODevice *>();
	if (__o)
	{
		return __o->readLine(maxlen);
	}
	return QByteArray();
}

qint64 QtScriptQIODevice::readLine(QByteArray* data, qint64 maxlen)
{
	auto __o = this->thiz<QIODevice *>();
	if (__o)
	{
		return __o->readLine(data->data(), maxlen);
	}
	return static_cast<qint64>(0);
}

bool QtScriptQIODevice::reset()
{
	auto __o = this->thiz<QIODevice *>();
	if (__o)
	{
		return __o->reset();
	}
	return false;
}

int QtScriptQIODevice::openMode()
{
	auto __o = this->thiz<QIODevice *>();
	if (__o)
	{
		return int(__o->openMode());
	}
	return 0;
}

bool QtScriptQIODevice::isTextModeEnabled()
{
	auto __o = this->thiz<QIODevice *>();
	if (__o)
	{
		return __o->isTextModeEnabled();
	}
	return false;
}

bool QtScriptQIODevice::atEnd()
{
	auto __o = this->thiz<QIODevice *>();
	if (__o)
	{
		return __o->atEnd();
	}
	return false;
}

bool QtScriptQIODevice::waitForReadyRead(int msecs)
{
	auto __o = this->thiz<QIODevice *>();
	if (__o)
	{
		return __o->waitForReadyRead(msecs);
	}
	return false;
}

int QtScriptQIODevice::writeChannelCount()
{
	auto __o = this->thiz<QIODevice *>();
	if (__o)
	{
		return __o->writeChannelCount();
	}
	return 0;
}

bool QtScriptQIODevice::isReadable()
{
	auto __o = this->thiz<QIODevice *>();
	if (__o)
	{
		return __o->isReadable();
	}
	return false;
}

void QtScriptQIODevice::commitTransaction()
{
	auto __o = this->thiz<QIODevice *>();
	if (__o)
	{
		__o->commitTransaction();
	}
}

int QtScriptQIODevice::readChannelCount()
{
	auto __o = this->thiz<QIODevice *>();
	if (__o)
	{
		return __o->readChannelCount();
	}
	return 0;
}

bool QtScriptQIODevice::isTransactionStarted()
{
	auto __o = this->thiz<QIODevice *>();
	if (__o)
	{
		return __o->isTransactionStarted();
	}
	return false;
}

bool QtScriptQIODevice::getChar(QByteArray* c)
{
	auto __o = this->thiz<QIODevice *>();
	if (__o)
	{
		return __o->getChar(c->data());
	}
	return false;
}

QtScriptQBuffer::QtScriptQBuffer(QScriptEngine *engine, const QByteArray &className)
	: QtScriptQIODevice(engine, className)
{
}

QtScriptQBuffer::QtScriptQBuffer(QScriptEngine *engine)
	: QtScriptQBuffer(engine, "Buffer")
{
}

void QtScriptQBuffer::Register(const QScriptValue &targetNamespace)
{
	auto engine = targetNamespace.engine();
	Q_ASSERT(engine);
	auto inherit = engine->defaultPrototype(qMetaTypeId<QIODevice *>());
	auto ctor = RegisterT<QBuffer, QtScriptQBuffer>(targetNamespace, inherit);
	Q_ASSERT(ctor.isFunction());
}

QByteArray QtScriptQBuffer::buffer()
{
	auto __o = this->thiz<QBuffer *>();
	if (__o)
	{
		return __o->buffer();
	}
	return QByteArray();
}

void QtScriptQBuffer::setData(const QByteArray& data)
{
	auto __o = this->thiz<QBuffer *>();
	if (__o)
	{
		__o->setData(data);
	}
}

void QtScriptQBuffer::setData(const QByteArray& data, int len)
{
	auto __o = this->thiz<QBuffer *>();
	if (__o)
	{
		__o->setData(data.data(), len);
	}
}

QByteArray QtScriptQBuffer::data()
{
	auto __o = this->thiz<QBuffer *>();
	if (__o)
	{
		return __o->data();
	}
	return QByteArray();
}

void QtScriptQBuffer::setBuffer(QByteArray* a)
{
	auto __o = this->thiz<QBuffer *>();
	if (__o)
	{
		__o->setBuffer(a);
	}
}

int QtScriptQBuffer::constructorArgumentCountMin() const
{
	return 0;
}

int QtScriptQBuffer::constructorArgumentCountMax() const
{
	return 2;
}

bool QtScriptQBuffer::constructObject(QScriptContext *context, NativeObjectType &out)
{
	auto __e = context->engine();
	Q_UNUSED(__e);
	bool ok = false;
	switch (context->argumentCount())
	{
		case 0:
		{
			out = new QBuffer();
			ok = true;
			break;
		}
		case 1:
		{
			auto arg0 = qscriptvalue_cast<QObject*>(context->argument(0));
			out = new QBuffer(arg0);
			ok = true;
			break;
		}
		case 2:
		{
			auto arg0 = qscriptvalue_cast<QByteArray*>(context->argument(0));
			auto arg1 = qscriptvalue_cast<QObject*>(context->argument(1));
			out = new QBuffer(arg0, arg1);
			ok = true;
			break;
		}
	}
	
	if (!ok)
	{
		QtScriptUtils::badArgumentsException(context,
			"QBuffer constructor");
	}
	return ok;
}

QtScriptQLocale::QtScriptQLocale(QScriptEngine *engine, const QByteArray &className)
	: QtScriptBaseClassPrototype<QLocale, false>(engine, className)
{
}

QtScriptQLocale::QtScriptQLocale(QScriptEngine *engine)
	: QtScriptQLocale(engine, "Locale")
{
}

void QtScriptQLocale::Register(const QScriptValue &targetNamespace)
{
	auto engine = targetNamespace.engine();
	Q_ASSERT(engine);
	QScriptValue inherit;
	auto ctor = RegisterT<QLocale, QtScriptQLocale>(targetNamespace, inherit);
	Q_ASSERT(ctor.isFunction());
	ctor.setProperty("countryToString", engine->newFunction(
		static_cast<QScriptValue (*)(QScriptContext *, QScriptEngine *)>(
			&QtScriptQLocale::countryToString)),
			QScriptValue::ReadOnly | QScriptValue::Undeletable);
	ctor.setProperty("c", engine->newFunction(
		static_cast<QScriptValue (*)(QScriptContext *, QScriptEngine *)>(
			&QtScriptQLocale::c)),
			QScriptValue::ReadOnly | QScriptValue::Undeletable);
	ctor.setProperty("setDefault", engine->newFunction(
		static_cast<QScriptValue (*)(QScriptContext *, QScriptEngine *)>(
			&QtScriptQLocale::setDefault)),
			QScriptValue::ReadOnly | QScriptValue::Undeletable);
	ctor.setProperty("scriptToString", engine->newFunction(
		static_cast<QScriptValue (*)(QScriptContext *, QScriptEngine *)>(
			&QtScriptQLocale::scriptToString)),
			QScriptValue::ReadOnly | QScriptValue::Undeletable);
	ctor.setProperty("system", engine->newFunction(
		static_cast<QScriptValue (*)(QScriptContext *, QScriptEngine *)>(
			&QtScriptQLocale::system)),
			QScriptValue::ReadOnly | QScriptValue::Undeletable);
	ctor.setProperty("matchingLocales", engine->newFunction(
		static_cast<QScriptValue (*)(QScriptContext *, QScriptEngine *)>(
			&QtScriptQLocale::matchingLocales)),
			QScriptValue::ReadOnly | QScriptValue::Undeletable);
	ctor.setProperty("countriesForLanguage", engine->newFunction(
		static_cast<QScriptValue (*)(QScriptContext *, QScriptEngine *)>(
			&QtScriptQLocale::countriesForLanguage)),
			QScriptValue::ReadOnly | QScriptValue::Undeletable);
	ctor.setProperty("languageToString", engine->newFunction(
		static_cast<QScriptValue (*)(QScriptContext *, QScriptEngine *)>(
			&QtScriptQLocale::languageToString)),
			QScriptValue::ReadOnly | QScriptValue::Undeletable);
}

bool QtScriptQLocale::notEquals(const QLocale& other)
{
	auto __o = this->thiz<QLocale *>();
	if (__o)
	{
		return __o->operator!=(other);
	}
	return false;
}

ushort QtScriptQLocale::toUShort(const QString& s)
{
	auto __o = this->thiz<QLocale *>();
	if (__o)
	{
		return __o->toUShort(s);
	}
	return static_cast<ushort>(0);
}

ushort QtScriptQLocale::toUShort(const QString& s, bool* ok)
{
	auto __o = this->thiz<QLocale *>();
	if (__o)
	{
		return __o->toUShort(s, ok);
	}
	return static_cast<ushort>(0);
}

void QtScriptQLocale::set(const QLocale& other)
{
	auto __o = this->thiz<QLocale *>();
	if (__o)
	{
		__o->operator=(other);
	}
}

QStringList QtScriptQLocale::uiLanguages()
{
	auto __o = this->thiz<QLocale *>();
	if (__o)
	{
		return __o->uiLanguages();
	}
	return QStringList();
}

uint QtScriptQLocale::toUInt(const QString& s)
{
	auto __o = this->thiz<QLocale *>();
	if (__o)
	{
		return __o->toUInt(s);
	}
	return static_cast<uint>(0);
}

uint QtScriptQLocale::toUInt(const QString& s, bool* ok)
{
	auto __o = this->thiz<QLocale *>();
	if (__o)
	{
		return __o->toUInt(s, ok);
	}
	return static_cast<uint>(0);
}

QString QtScriptQLocale::currencySymbol()
{
	auto __o = this->thiz<QLocale *>();
	if (__o)
	{
		return __o->currencySymbol();
	}
	return QString();
}

QString QtScriptQLocale::currencySymbol(int arg0)
{
	auto __o = this->thiz<QLocale *>();
	if (__o)
	{
		return __o->currencySymbol(QLocale::CurrencySymbolFormat(arg0));
	}
	return QString();
}

float QtScriptQLocale::toFloat(const QString& s)
{
	auto __o = this->thiz<QLocale *>();
	if (__o)
	{
		return __o->toFloat(s);
	}
	return static_cast<float>(0);
}

float QtScriptQLocale::toFloat(const QString& s, bool* ok)
{
	auto __o = this->thiz<QLocale *>();
	if (__o)
	{
		return __o->toFloat(s, ok);
	}
	return static_cast<float>(0);
}

QString QtScriptQLocale::dayName(int arg0)
{
	auto __o = this->thiz<QLocale *>();
	if (__o)
	{
		return __o->dayName(arg0);
	}
	return QString();
}

QString QtScriptQLocale::dayName(int arg0, int format)
{
	auto __o = this->thiz<QLocale *>();
	if (__o)
	{
		return __o->dayName(arg0, QLocale::FormatType(format));
	}
	return QString();
}

QString QtScriptQLocale::dateTimeFormat()
{
	auto __o = this->thiz<QLocale *>();
	if (__o)
	{
		return __o->dateTimeFormat();
	}
	return QString();
}

QString QtScriptQLocale::dateTimeFormat(int format)
{
	auto __o = this->thiz<QLocale *>();
	if (__o)
	{
		return __o->dateTimeFormat(QLocale::FormatType(format));
	}
	return QString();
}

QString QtScriptQLocale::bcp47Name()
{
	auto __o = this->thiz<QLocale *>();
	if (__o)
	{
		return __o->bcp47Name();
	}
	return QString();
}

QString QtScriptQLocale::amText()
{
	auto __o = this->thiz<QLocale *>();
	if (__o)
	{
		return __o->amText();
	}
	return QString();
}

QDate QtScriptQLocale::toDate(const QString& string)
{
	auto __o = this->thiz<QLocale *>();
	if (__o)
	{
		return __o->toDate(string);
	}
	return QDate();
}

QDate QtScriptQLocale::toDate(const QString& string, int arg0)
{
	auto __o = this->thiz<QLocale *>();
	if (__o)
	{
		return __o->toDate(string, QLocale::FormatType(arg0));
	}
	return QDate();
}

QChar QtScriptQLocale::exponential()
{
	auto __o = this->thiz<QLocale *>();
	if (__o)
	{
		return __o->exponential();
	}
	return QChar();
}

QString QtScriptQLocale::pmText()
{
	auto __o = this->thiz<QLocale *>();
	if (__o)
	{
		return __o->pmText();
	}
	return QString();
}

int QtScriptQLocale::script()
{
	auto __o = this->thiz<QLocale *>();
	if (__o)
	{
		return int(__o->script());
	}
	return 0;
}

int QtScriptQLocale::firstDayOfWeek()
{
	auto __o = this->thiz<QLocale *>();
	if (__o)
	{
		return int(__o->firstDayOfWeek());
	}
	return 0;
}

QString QtScriptQLocale::standaloneMonthName(int arg0)
{
	auto __o = this->thiz<QLocale *>();
	if (__o)
	{
		return __o->standaloneMonthName(arg0);
	}
	return QString();
}

QString QtScriptQLocale::standaloneMonthName(int arg0, int format)
{
	auto __o = this->thiz<QLocale *>();
	if (__o)
	{
		return __o->standaloneMonthName(arg0, QLocale::FormatType(format));
	}
	return QString();
}

QChar QtScriptQLocale::percent()
{
	auto __o = this->thiz<QLocale *>();
	if (__o)
	{
		return __o->percent();
	}
	return QChar();
}

QList<Qt::DayOfWeek> QtScriptQLocale::weekdays()
{
	auto __o = this->thiz<QLocale *>();
	if (__o)
	{
		return __o->weekdays();
	}
	return QList<Qt::DayOfWeek>();
}

qlonglong QtScriptQLocale::toLongLong(const QString& s)
{
	auto __o = this->thiz<QLocale *>();
	if (__o)
	{
		return __o->toLongLong(s);
	}
	return static_cast<qlonglong>(0);
}

qlonglong QtScriptQLocale::toLongLong(const QString& s, bool* ok)
{
	auto __o = this->thiz<QLocale *>();
	if (__o)
	{
		return __o->toLongLong(s, ok);
	}
	return static_cast<qlonglong>(0);
}

QChar QtScriptQLocale::negativeSign()
{
	auto __o = this->thiz<QLocale *>();
	if (__o)
	{
		return __o->negativeSign();
	}
	return QChar();
}

QString QtScriptQLocale::toString(qlonglong i)
{
	auto __o = this->thiz<QLocale *>();
	if (__o)
	{
		return __o->toString(i);
	}
	return QString();
}

QString QtScriptQLocale::toString(double i, char f)
{
	auto __o = this->thiz<QLocale *>();
	if (__o)
	{
		return __o->toString(i, f);
	}
	return QString();
}

QString QtScriptQLocale::toString(double i, char f, int prec)
{
	auto __o = this->thiz<QLocale *>();
	if (__o)
	{
		return __o->toString(i, f, prec);
	}
	return QString();
}

void QtScriptQLocale::swap(QLocale& other)
{
	auto __o = this->thiz<QLocale *>();
	if (__o)
	{
		__o->swap(other);
	}
}

QString QtScriptQLocale::monthName(int arg0)
{
	auto __o = this->thiz<QLocale *>();
	if (__o)
	{
		return __o->monthName(arg0);
	}
	return QString();
}

QString QtScriptQLocale::monthName(int arg0, int format)
{
	auto __o = this->thiz<QLocale *>();
	if (__o)
	{
		return __o->monthName(arg0, QLocale::FormatType(format));
	}
	return QString();
}

QString QtScriptQLocale::standaloneDayName(int arg0)
{
	auto __o = this->thiz<QLocale *>();
	if (__o)
	{
		return __o->standaloneDayName(arg0);
	}
	return QString();
}

QString QtScriptQLocale::standaloneDayName(int arg0, int format)
{
	auto __o = this->thiz<QLocale *>();
	if (__o)
	{
		return __o->standaloneDayName(arg0, QLocale::FormatType(format));
	}
	return QString();
}

QString QtScriptQLocale::nativeLanguageName()
{
	auto __o = this->thiz<QLocale *>();
	if (__o)
	{
		return __o->nativeLanguageName();
	}
	return QString();
}

QChar QtScriptQLocale::groupSeparator()
{
	auto __o = this->thiz<QLocale *>();
	if (__o)
	{
		return __o->groupSeparator();
	}
	return QChar();
}

QString QtScriptQLocale::createSeparatedList(const QStringList& strl)
{
	auto __o = this->thiz<QLocale *>();
	if (__o)
	{
		return __o->createSeparatedList(strl);
	}
	return QString();
}

QDateTime QtScriptQLocale::toDateTime(const QString& string)
{
	auto __o = this->thiz<QLocale *>();
	if (__o)
	{
		return __o->toDateTime(string);
	}
	return QDateTime();
}

QDateTime QtScriptQLocale::toDateTime(const QString& string, int format)
{
	auto __o = this->thiz<QLocale *>();
	if (__o)
	{
		return __o->toDateTime(string, QLocale::FormatType(format));
	}
	return QDateTime();
}

QChar QtScriptQLocale::positiveSign()
{
	auto __o = this->thiz<QLocale *>();
	if (__o)
	{
		return __o->positiveSign();
	}
	return QChar();
}

short QtScriptQLocale::toShort(const QString& s)
{
	auto __o = this->thiz<QLocale *>();
	if (__o)
	{
		return __o->toShort(s);
	}
	return static_cast<short>(0);
}

short QtScriptQLocale::toShort(const QString& s, bool* ok)
{
	auto __o = this->thiz<QLocale *>();
	if (__o)
	{
		return __o->toShort(s, ok);
	}
	return static_cast<short>(0);
}

QString QtScriptQLocale::dateFormat()
{
	auto __o = this->thiz<QLocale *>();
	if (__o)
	{
		return __o->dateFormat();
	}
	return QString();
}

QString QtScriptQLocale::dateFormat(int format)
{
	auto __o = this->thiz<QLocale *>();
	if (__o)
	{
		return __o->dateFormat(QLocale::FormatType(format));
	}
	return QString();
}

bool QtScriptQLocale::equals(const QLocale& other)
{
	auto __o = this->thiz<QLocale *>();
	if (__o)
	{
		return __o->operator==(other);
	}
	return false;
}

QString QtScriptQLocale::toCurrencyString(qlonglong arg0)
{
	auto __o = this->thiz<QLocale *>();
	if (__o)
	{
		return __o->toCurrencyString(arg0);
	}
	return QString();
}

QString QtScriptQLocale::toCurrencyString(qlonglong arg0, const QString& symbol)
{
	auto __o = this->thiz<QLocale *>();
	if (__o)
	{
		return __o->toCurrencyString(arg0, symbol);
	}
	return QString();
}

QString QtScriptQLocale::toCurrencyString(double arg0, const QString& symbol, int precision)
{
	auto __o = this->thiz<QLocale *>();
	if (__o)
	{
		return __o->toCurrencyString(arg0, symbol, precision);
	}
	return QString();
}

QChar QtScriptQLocale::decimalPoint()
{
	auto __o = this->thiz<QLocale *>();
	if (__o)
	{
		return __o->decimalPoint();
	}
	return QChar();
}

QString QtScriptQLocale::timeFormat()
{
	auto __o = this->thiz<QLocale *>();
	if (__o)
	{
		return __o->timeFormat();
	}
	return QString();
}

QString QtScriptQLocale::timeFormat(int format)
{
	auto __o = this->thiz<QLocale *>();
	if (__o)
	{
		return __o->timeFormat(QLocale::FormatType(format));
	}
	return QString();
}

QString QtScriptQLocale::quoteString(const QString& str)
{
	auto __o = this->thiz<QLocale *>();
	if (__o)
	{
		return __o->quoteString(str);
	}
	return QString();
}

QString QtScriptQLocale::quoteString(const QString& str, int style)
{
	auto __o = this->thiz<QLocale *>();
	if (__o)
	{
		return __o->quoteString(str, QLocale::QuotationStyle(style));
	}
	return QString();
}

int QtScriptQLocale::numberOptions()
{
	auto __o = this->thiz<QLocale *>();
	if (__o)
	{
		return int(__o->numberOptions());
	}
	return 0;
}

qulonglong QtScriptQLocale::toULongLong(const QString& s)
{
	auto __o = this->thiz<QLocale *>();
	if (__o)
	{
		return __o->toULongLong(s);
	}
	return static_cast<qulonglong>(0);
}

qulonglong QtScriptQLocale::toULongLong(const QString& s, bool* ok)
{
	auto __o = this->thiz<QLocale *>();
	if (__o)
	{
		return __o->toULongLong(s, ok);
	}
	return static_cast<qulonglong>(0);
}

void QtScriptQLocale::setNumberOptions(int options)
{
	auto __o = this->thiz<QLocale *>();
	if (__o)
	{
		__o->setNumberOptions(QFlags<QLocale::NumberOption>(options));
	}
}

QString QtScriptQLocale::name()
{
	auto __o = this->thiz<QLocale *>();
	if (__o)
	{
		return __o->name();
	}
	return QString();
}

int QtScriptQLocale::language()
{
	auto __o = this->thiz<QLocale *>();
	if (__o)
	{
		return int(__o->language());
	}
	return 0;
}

QString QtScriptQLocale::toLower(const QString& str)
{
	auto __o = this->thiz<QLocale *>();
	if (__o)
	{
		return __o->toLower(str);
	}
	return QString();
}

int QtScriptQLocale::country()
{
	auto __o = this->thiz<QLocale *>();
	if (__o)
	{
		return int(__o->country());
	}
	return 0;
}

int QtScriptQLocale::toInt(const QString& s)
{
	auto __o = this->thiz<QLocale *>();
	if (__o)
	{
		return __o->toInt(s);
	}
	return 0;
}

int QtScriptQLocale::toInt(const QString& s, bool* ok)
{
	auto __o = this->thiz<QLocale *>();
	if (__o)
	{
		return __o->toInt(s, ok);
	}
	return 0;
}

int QtScriptQLocale::textDirection()
{
	auto __o = this->thiz<QLocale *>();
	if (__o)
	{
		return int(__o->textDirection());
	}
	return 0;
}

double QtScriptQLocale::toDouble(const QString& s)
{
	auto __o = this->thiz<QLocale *>();
	if (__o)
	{
		return __o->toDouble(s);
	}
	return static_cast<double>(0);
}

double QtScriptQLocale::toDouble(const QString& s, bool* ok)
{
	auto __o = this->thiz<QLocale *>();
	if (__o)
	{
		return __o->toDouble(s, ok);
	}
	return static_cast<double>(0);
}

QTime QtScriptQLocale::toTime(const QString& string)
{
	auto __o = this->thiz<QLocale *>();
	if (__o)
	{
		return __o->toTime(string);
	}
	return QTime();
}

QTime QtScriptQLocale::toTime(const QString& string, int arg0)
{
	auto __o = this->thiz<QLocale *>();
	if (__o)
	{
		return __o->toTime(string, QLocale::FormatType(arg0));
	}
	return QTime();
}

QString QtScriptQLocale::nativeCountryName()
{
	auto __o = this->thiz<QLocale *>();
	if (__o)
	{
		return __o->nativeCountryName();
	}
	return QString();
}

QString QtScriptQLocale::toUpper(const QString& str)
{
	auto __o = this->thiz<QLocale *>();
	if (__o)
	{
		return __o->toUpper(str);
	}
	return QString();
}

QChar QtScriptQLocale::zeroDigit()
{
	auto __o = this->thiz<QLocale *>();
	if (__o)
	{
		return __o->zeroDigit();
	}
	return QChar();
}

int QtScriptQLocale::measurementSystem()
{
	auto __o = this->thiz<QLocale *>();
	if (__o)
	{
		return int(__o->measurementSystem());
	}
	return 0;
}

QScriptValue QtScriptQLocale::countryToString(QScriptContext *context, QScriptEngine* __e)
{
	if (!QtScriptUtils::checkArgumentCount(context, 1, 1))
	{
		return __e->uncaughtException();
	}

	switch (context->argumentCount())
	{
		case 1:
		{
			auto tmp_0 = qscriptvalue_cast<int>(context->argument(0));
			auto arg0 = QLocale::Country(tmp_0);
			return __e->toScriptValue(QLocale::countryToString(arg0));
		}
	}

	QtScriptUtils::badArgumentsException(context,
			"QLocale::countryToString");
	return __e->uncaughtException();
}

QScriptValue QtScriptQLocale::c(QScriptContext *context, QScriptEngine* __e)
{
	if (!QtScriptUtils::checkArgumentCount(context, 0, 0))
	{
		return __e->uncaughtException();
	}

	switch (context->argumentCount())
	{
		case 0:
		{
			return __e->toScriptValue(QLocale::c());
		}
	}

	QtScriptUtils::badArgumentsException(context,
			"QLocale::c");
	return __e->uncaughtException();
}

QScriptValue QtScriptQLocale::setDefault(QScriptContext *context, QScriptEngine* __e)
{
	if (!QtScriptUtils::checkArgumentCount(context, 1, 1))
	{
		return __e->uncaughtException();
	}

	switch (context->argumentCount())
	{
		case 1:
		{
			auto arg0 = qscriptvalue_cast<QLocale>(context->argument(0));
			QLocale::setDefault(arg0);
			return __e->undefinedValue();
		}
	}

	QtScriptUtils::badArgumentsException(context,
			"QLocale::setDefault");
	return __e->uncaughtException();
}

QScriptValue QtScriptQLocale::scriptToString(QScriptContext *context, QScriptEngine* __e)
{
	if (!QtScriptUtils::checkArgumentCount(context, 1, 1))
	{
		return __e->uncaughtException();
	}

	switch (context->argumentCount())
	{
		case 1:
		{
			auto tmp_0 = qscriptvalue_cast<int>(context->argument(0));
			auto arg0 = QLocale::Script(tmp_0);
			return __e->toScriptValue(QLocale::scriptToString(arg0));
		}
	}

	QtScriptUtils::badArgumentsException(context,
			"QLocale::scriptToString");
	return __e->uncaughtException();
}

QScriptValue QtScriptQLocale::system(QScriptContext *context, QScriptEngine* __e)
{
	if (!QtScriptUtils::checkArgumentCount(context, 0, 0))
	{
		return __e->uncaughtException();
	}

	switch (context->argumentCount())
	{
		case 0:
		{
			return __e->toScriptValue(QLocale::system());
		}
	}

	QtScriptUtils::badArgumentsException(context,
			"QLocale::system");
	return __e->uncaughtException();
}

QScriptValue QtScriptQLocale::matchingLocales(QScriptContext *context, QScriptEngine* __e)
{
	if (!QtScriptUtils::checkArgumentCount(context, 3, 3))
	{
		return __e->uncaughtException();
	}

	switch (context->argumentCount())
	{
		case 3:
		{
			auto tmp_0 = qscriptvalue_cast<int>(context->argument(0));
			auto arg0 = QLocale::Language(tmp_0);
			auto tmp_1 = qscriptvalue_cast<int>(context->argument(1));
			auto arg1 = QLocale::Script(tmp_1);
			auto tmp_2 = qscriptvalue_cast<int>(context->argument(2));
			auto arg2 = QLocale::Country(tmp_2);
			return __e->toScriptValue(QLocale::matchingLocales(arg0, arg1, arg2));
		}
	}

	QtScriptUtils::badArgumentsException(context,
			"QLocale::matchingLocales");
	return __e->uncaughtException();
}

QScriptValue QtScriptQLocale::countriesForLanguage(QScriptContext *context, QScriptEngine* __e)
{
	if (!QtScriptUtils::checkArgumentCount(context, 1, 1))
	{
		return __e->uncaughtException();
	}

	switch (context->argumentCount())
	{
		case 1:
		{
			auto tmp_0 = qscriptvalue_cast<int>(context->argument(0));
			auto arg0 = QLocale::Language(tmp_0);
			return __e->toScriptValue(QLocale::countriesForLanguage(arg0));
		}
	}

	QtScriptUtils::badArgumentsException(context,
			"QLocale::countriesForLanguage");
	return __e->uncaughtException();
}

QScriptValue QtScriptQLocale::languageToString(QScriptContext *context, QScriptEngine* __e)
{
	if (!QtScriptUtils::checkArgumentCount(context, 1, 1))
	{
		return __e->uncaughtException();
	}

	switch (context->argumentCount())
	{
		case 1:
		{
			auto tmp_0 = qscriptvalue_cast<int>(context->argument(0));
			auto arg0 = QLocale::Language(tmp_0);
			return __e->toScriptValue(QLocale::languageToString(arg0));
		}
	}

	QtScriptUtils::badArgumentsException(context,
			"QLocale::languageToString");
	return __e->uncaughtException();
}

int QtScriptQLocale::constructorArgumentCountMin() const
{
	return 0;
}

int QtScriptQLocale::constructorArgumentCountMax() const
{
	return 3;
}

bool QtScriptQLocale::constructObject(QScriptContext *context, NativeObjectType &out)
{
	auto __e = context->engine();
	Q_UNUSED(__e);
	bool ok = false;
	switch (context->argumentCount())
	{
		case 0:
		{
			ok = true;
			break;
		}
		case 1:
		{
			auto arg0 = qscriptvalue_cast<QString>(context->argument(0));
			out = QLocale(arg0);
			ok = true;
			break;
		}
		case 2:
		{
			auto tmp_0 = qscriptvalue_cast<int>(context->argument(0));
			auto arg0 = QLocale::Language(tmp_0);
			auto tmp_1 = qscriptvalue_cast<int>(context->argument(1));
			auto arg1 = QLocale::Country(tmp_1);
			out = QLocale(arg0, arg1);
			ok = true;
			break;
		}
		case 3:
		{
			auto tmp_0 = qscriptvalue_cast<int>(context->argument(0));
			auto arg0 = QLocale::Language(tmp_0);
			auto tmp_1 = qscriptvalue_cast<int>(context->argument(1));
			auto arg1 = QLocale::Script(tmp_1);
			auto tmp_2 = qscriptvalue_cast<int>(context->argument(2));
			auto arg2 = QLocale::Country(tmp_2);
			out = QLocale(arg0, arg1, arg2);
			ok = true;
			break;
		}
	}
	
	if (!ok)
	{
		QtScriptUtils::badArgumentsException(context,
			"QLocale constructor");
	}
	return ok;
}

QtScriptQTime::QtScriptQTime(QScriptEngine *engine, const QByteArray &className)
	: QtScriptBaseClassPrototype<QTime, false>(engine, className)
{
}

QtScriptQTime::QtScriptQTime(QScriptEngine *engine)
	: QtScriptQTime(engine, "Time")
{
}

void QtScriptQTime::Register(const QScriptValue &targetNamespace)
{
	auto engine = targetNamespace.engine();
	Q_ASSERT(engine);
	QScriptValue inherit;
	auto ctor = RegisterT<QTime, QtScriptQTime>(targetNamespace, inherit);
	Q_ASSERT(ctor.isFunction());
	ctor.setProperty("fromString", engine->newFunction(
		static_cast<QScriptValue (*)(QScriptContext *, QScriptEngine *)>(
			&QtScriptQTime::fromString)),
			QScriptValue::ReadOnly | QScriptValue::Undeletable);
	ctor.setProperty("isValid", engine->newFunction(
		static_cast<QScriptValue (*)(QScriptContext *, QScriptEngine *)>(
			&QtScriptQTime::isValid)),
			QScriptValue::ReadOnly | QScriptValue::Undeletable);
	ctor.setProperty("fromMSecsSinceStartOfDay", engine->newFunction(
		static_cast<QScriptValue (*)(QScriptContext *, QScriptEngine *)>(
			&QtScriptQTime::fromMSecsSinceStartOfDay)),
			QScriptValue::ReadOnly | QScriptValue::Undeletable);
	ctor.setProperty("currentTime", engine->newFunction(
		static_cast<QScriptValue (*)(QScriptContext *, QScriptEngine *)>(
			&QtScriptQTime::currentTime)),
			QScriptValue::ReadOnly | QScriptValue::Undeletable);
}

bool QtScriptQTime::notEquals(const QTime& other)
{
	auto __o = this->thiz<QTime *>();
	if (__o)
	{
		return __o->operator!=(other);
	}
	return false;
}

int QtScriptQTime::msec()
{
	auto __o = this->thiz<QTime *>();
	if (__o)
	{
		return __o->msec();
	}
	return 0;
}

int QtScriptQTime::second()
{
	auto __o = this->thiz<QTime *>();
	if (__o)
	{
		return __o->second();
	}
	return 0;
}

int QtScriptQTime::msecsSinceStartOfDay()
{
	auto __o = this->thiz<QTime *>();
	if (__o)
	{
		return __o->msecsSinceStartOfDay();
	}
	return 0;
}

bool QtScriptQTime::setHMS(int h, int m, int s)
{
	auto __o = this->thiz<QTime *>();
	if (__o)
	{
		return __o->setHMS(h, m, s);
	}
	return false;
}

bool QtScriptQTime::setHMS(int h, int m, int s, int ms)
{
	auto __o = this->thiz<QTime *>();
	if (__o)
	{
		return __o->setHMS(h, m, s, ms);
	}
	return false;
}

QTime QtScriptQTime::addMSecs(int ms)
{
	auto __o = this->thiz<QTime *>();
	if (__o)
	{
		return __o->addMSecs(ms);
	}
	return QTime();
}

void QtScriptQTime::start()
{
	auto __o = this->thiz<QTime *>();
	if (__o)
	{
		__o->start();
	}
}

QString QtScriptQTime::toString()
{
	auto __o = this->thiz<QTime *>();
	if (__o)
	{
		return __o->toString();
	}
	return QString();
}

QString QtScriptQTime::toString(int f)
{
	auto __o = this->thiz<QTime *>();
	if (__o)
	{
		return __o->toString(Qt::DateFormat(f));
	}
	return QString();
}

bool QtScriptQTime::greaterOrEqual(const QTime& other)
{
	auto __o = this->thiz<QTime *>();
	if (__o)
	{
		return __o->operator>=(other);
	}
	return false;
}

bool QtScriptQTime::isValid()
{
	auto __o = this->thiz<QTime *>();
	if (__o)
	{
		return __o->isValid();
	}
	return false;
}

int QtScriptQTime::secsTo(const QTime& arg0)
{
	auto __o = this->thiz<QTime *>();
	if (__o)
	{
		return __o->secsTo(arg0);
	}
	return 0;
}

int QtScriptQTime::minute()
{
	auto __o = this->thiz<QTime *>();
	if (__o)
	{
		return __o->minute();
	}
	return 0;
}

bool QtScriptQTime::equals(const QTime& other)
{
	auto __o = this->thiz<QTime *>();
	if (__o)
	{
		return __o->operator==(other);
	}
	return false;
}

int QtScriptQTime::elapsed()
{
	auto __o = this->thiz<QTime *>();
	if (__o)
	{
		return __o->elapsed();
	}
	return 0;
}

QTime QtScriptQTime::addSecs(int secs)
{
	auto __o = this->thiz<QTime *>();
	if (__o)
	{
		return __o->addSecs(secs);
	}
	return QTime();
}

bool QtScriptQTime::greaterThan(const QTime& other)
{
	auto __o = this->thiz<QTime *>();
	if (__o)
	{
		return __o->operator>(other);
	}
	return false;
}

int QtScriptQTime::msecsTo(const QTime& arg0)
{
	auto __o = this->thiz<QTime *>();
	if (__o)
	{
		return __o->msecsTo(arg0);
	}
	return 0;
}

int QtScriptQTime::restart()
{
	auto __o = this->thiz<QTime *>();
	if (__o)
	{
		return __o->restart();
	}
	return 0;
}

bool QtScriptQTime::lessOrEqual(const QTime& other)
{
	auto __o = this->thiz<QTime *>();
	if (__o)
	{
		return __o->operator<=(other);
	}
	return false;
}

int QtScriptQTime::hour()
{
	auto __o = this->thiz<QTime *>();
	if (__o)
	{
		return __o->hour();
	}
	return 0;
}

bool QtScriptQTime::isNull()
{
	auto __o = this->thiz<QTime *>();
	if (__o)
	{
		return __o->isNull();
	}
	return false;
}

bool QtScriptQTime::lessThan(const QTime& other)
{
	auto __o = this->thiz<QTime *>();
	if (__o)
	{
		return __o->operator<(other);
	}
	return false;
}

QScriptValue QtScriptQTime::fromString(QScriptContext *context, QScriptEngine* __e)
{
	if (!QtScriptUtils::checkArgumentCount(context, 1, 2))
	{
		return __e->uncaughtException();
	}

	switch (context->argumentCount())
	{
		case 1:
		{
			auto arg0 = qscriptvalue_cast<QString>(context->argument(0));
			return __e->toScriptValue(QTime::fromString(arg0));
		}
		case 2:
		{
			auto arg0 = qscriptvalue_cast<QString>(context->argument(0));
			auto tmp_1 = qscriptvalue_cast<int>(context->argument(1));
			auto arg1 = Qt::DateFormat(tmp_1);
			return __e->toScriptValue(QTime::fromString(arg0, arg1));
		}
	}

	QtScriptUtils::badArgumentsException(context,
			"QTime::fromString");
	return __e->uncaughtException();
}

QScriptValue QtScriptQTime::isValid(QScriptContext *context, QScriptEngine* __e)
{
	if (!QtScriptUtils::checkArgumentCount(context, 3, 4))
	{
		return __e->uncaughtException();
	}

	switch (context->argumentCount())
	{
		case 3:
		{
			auto arg0 = qscriptvalue_cast<int>(context->argument(0));
			auto arg1 = qscriptvalue_cast<int>(context->argument(1));
			auto arg2 = qscriptvalue_cast<int>(context->argument(2));
			return __e->toScriptValue(QTime::isValid(arg0, arg1, arg2));
		}
		case 4:
		{
			auto arg0 = qscriptvalue_cast<int>(context->argument(0));
			auto arg1 = qscriptvalue_cast<int>(context->argument(1));
			auto arg2 = qscriptvalue_cast<int>(context->argument(2));
			auto arg3 = qscriptvalue_cast<int>(context->argument(3));
			return __e->toScriptValue(QTime::isValid(arg0, arg1, arg2, arg3));
		}
	}

	QtScriptUtils::badArgumentsException(context,
			"QTime::isValid");
	return __e->uncaughtException();
}

QScriptValue QtScriptQTime::fromMSecsSinceStartOfDay(QScriptContext *context, QScriptEngine* __e)
{
	if (!QtScriptUtils::checkArgumentCount(context, 1, 1))
	{
		return __e->uncaughtException();
	}

	switch (context->argumentCount())
	{
		case 1:
		{
			auto arg0 = qscriptvalue_cast<int>(context->argument(0));
			return __e->toScriptValue(QTime::fromMSecsSinceStartOfDay(arg0));
		}
	}

	QtScriptUtils::badArgumentsException(context,
			"QTime::fromMSecsSinceStartOfDay");
	return __e->uncaughtException();
}

QScriptValue QtScriptQTime::currentTime(QScriptContext *context, QScriptEngine* __e)
{
	if (!QtScriptUtils::checkArgumentCount(context, 0, 0))
	{
		return __e->uncaughtException();
	}

	switch (context->argumentCount())
	{
		case 0:
		{
			return __e->toScriptValue(QTime::currentTime());
		}
	}

	QtScriptUtils::badArgumentsException(context,
			"QTime::currentTime");
	return __e->uncaughtException();
}

int QtScriptQTime::constructorArgumentCountMin() const
{
	return 0;
}

int QtScriptQTime::constructorArgumentCountMax() const
{
	return 4;
}

bool QtScriptQTime::constructObject(QScriptContext *context, NativeObjectType &out)
{
	auto __e = context->engine();
	Q_UNUSED(__e);
	bool ok = false;
	switch (context->argumentCount())
	{
		case 0:
		{
			ok = true;
			break;
		}
		case 1:
		{
			break;
		}
		case 2:
		{
			auto arg0 = qscriptvalue_cast<int>(context->argument(0));
			auto arg1 = qscriptvalue_cast<int>(context->argument(1));
			out = QTime(arg0, arg1);
			ok = true;
			break;
		}
		case 3:
		{
			auto arg0 = qscriptvalue_cast<int>(context->argument(0));
			auto arg1 = qscriptvalue_cast<int>(context->argument(1));
			auto arg2 = qscriptvalue_cast<int>(context->argument(2));
			out = QTime(arg0, arg1, arg2);
			ok = true;
			break;
		}
		case 4:
		{
			auto arg0 = qscriptvalue_cast<int>(context->argument(0));
			auto arg1 = qscriptvalue_cast<int>(context->argument(1));
			auto arg2 = qscriptvalue_cast<int>(context->argument(2));
			auto arg3 = qscriptvalue_cast<int>(context->argument(3));
			out = QTime(arg0, arg1, arg2, arg3);
			ok = true;
			break;
		}
	}
	
	if (!ok)
	{
		QtScriptUtils::badArgumentsException(context,
			"QTime constructor");
	}
	return ok;
}

QtScriptQTextStream::QtScriptQTextStream(QScriptEngine *engine, const QByteArray &className)
	: QtScriptBaseClassPrototype<QTextStream *, false>(engine, className)
{
}

QtScriptQTextStream::QtScriptQTextStream(QScriptEngine *engine)
	: QtScriptQTextStream(engine, "TextStream")
{
}

void QtScriptQTextStream::Register(const QScriptValue &targetNamespace)
{
	auto engine = targetNamespace.engine();
	Q_ASSERT(engine);
	QScriptValue inherit;
	auto ctor = RegisterT<QTextStream, QtScriptQTextStream>(targetNamespace, inherit);
	Q_ASSERT(ctor.isFunction());
}

int QtScriptQTextStream::status()
{
	auto __o = this->thiz<QTextStream *>();
	if (__o)
	{
		return int(__o->status());
	}
	return 0;
}

void QtScriptQTextStream::setRealNumberPrecision(int precision)
{
	auto __o = this->thiz<QTextStream *>();
	if (__o)
	{
		__o->setRealNumberPrecision(precision);
	}
}

QLocale QtScriptQTextStream::locale()
{
	auto __o = this->thiz<QTextStream *>();
	if (__o)
	{
		return __o->locale();
	}
	return QLocale();
}

void QtScriptQTextStream::skipWhiteSpace()
{
	auto __o = this->thiz<QTextStream *>();
	if (__o)
	{
		__o->skipWhiteSpace();
	}
}

qint64 QtScriptQTextStream::pos()
{
	auto __o = this->thiz<QTextStream *>();
	if (__o)
	{
		return __o->pos();
	}
	return static_cast<qint64>(0);
}

void QtScriptQTextStream::put(const QString& arg0)
{
	auto __o = this->thiz<QTextStream *>();
	if (__o)
	{
		__o->operator<<(arg0);
	}
}

void QtScriptQTextStream::setIntegerBase(int base)
{
	auto __o = this->thiz<QTextStream *>();
	if (__o)
	{
		__o->setIntegerBase(base);
	}
}

void QtScriptQTextStream::setNumberFlags(int flags)
{
	auto __o = this->thiz<QTextStream *>();
	if (__o)
	{
		__o->setNumberFlags(QFlags<QTextStream::NumberFlag>(flags));
	}
}

void QtScriptQTextStream::flush()
{
	auto __o = this->thiz<QTextStream *>();
	if (__o)
	{
		__o->flush();
	}
}

bool QtScriptQTextStream::seek(qint64 pos)
{
	auto __o = this->thiz<QTextStream *>();
	if (__o)
	{
		return __o->seek(pos);
	}
	return false;
}

void QtScriptQTextStream::setCodec(QTextCodec* codec)
{
	auto __o = this->thiz<QTextStream *>();
	if (__o)
	{
		__o->setCodec(codec);
	}
}

void QtScriptQTextStream::setFieldWidth(int width)
{
	auto __o = this->thiz<QTextStream *>();
	if (__o)
	{
		__o->setFieldWidth(width);
	}
}

int QtScriptQTextStream::fieldWidth()
{
	auto __o = this->thiz<QTextStream *>();
	if (__o)
	{
		return __o->fieldWidth();
	}
	return 0;
}

void QtScriptQTextStream::setAutoDetectUnicode(bool enabled)
{
	auto __o = this->thiz<QTextStream *>();
	if (__o)
	{
		__o->setAutoDetectUnicode(enabled);
	}
}

bool QtScriptQTextStream::generateByteOrderMark()
{
	auto __o = this->thiz<QTextStream *>();
	if (__o)
	{
		return __o->generateByteOrderMark();
	}
	return false;
}

void QtScriptQTextStream::setStatus(int status)
{
	auto __o = this->thiz<QTextStream *>();
	if (__o)
	{
		__o->setStatus(QTextStream::Status(status));
	}
}

QTextCodec* QtScriptQTextStream::codec()
{
	auto __o = this->thiz<QTextStream *>();
	if (__o)
	{
		return __o->codec();
	}
	return nullptr;
}

void QtScriptQTextStream::setRealNumberNotation(int notation)
{
	auto __o = this->thiz<QTextStream *>();
	if (__o)
	{
		__o->setRealNumberNotation(QTextStream::RealNumberNotation(notation));
	}
}

int QtScriptQTextStream::realNumberPrecision()
{
	auto __o = this->thiz<QTextStream *>();
	if (__o)
	{
		return __o->realNumberPrecision();
	}
	return 0;
}

void QtScriptQTextStream::setDevice(QIODevice* device)
{
	auto __o = this->thiz<QTextStream *>();
	if (__o)
	{
		__o->setDevice(device);
	}
}

QChar QtScriptQTextStream::padChar()
{
	auto __o = this->thiz<QTextStream *>();
	if (__o)
	{
		return __o->padChar();
	}
	return QChar();
}

bool QtScriptQTextStream::autoDetectUnicode()
{
	auto __o = this->thiz<QTextStream *>();
	if (__o)
	{
		return __o->autoDetectUnicode();
	}
	return false;
}

int QtScriptQTextStream::fieldAlignment()
{
	auto __o = this->thiz<QTextStream *>();
	if (__o)
	{
		return int(__o->fieldAlignment());
	}
	return 0;
}

void QtScriptQTextStream::setGenerateByteOrderMark(bool generate)
{
	auto __o = this->thiz<QTextStream *>();
	if (__o)
	{
		__o->setGenerateByteOrderMark(generate);
	}
}

QString QtScriptQTextStream::read(qint64 maxlen)
{
	auto __o = this->thiz<QTextStream *>();
	if (__o)
	{
		return __o->read(maxlen);
	}
	return QString();
}

int QtScriptQTextStream::realNumberNotation()
{
	auto __o = this->thiz<QTextStream *>();
	if (__o)
	{
		return int(__o->realNumberNotation());
	}
	return 0;
}

void QtScriptQTextStream::setPadChar(QChar ch)
{
	auto __o = this->thiz<QTextStream *>();
	if (__o)
	{
		__o->setPadChar(ch);
	}
}

QIODevice* QtScriptQTextStream::device()
{
	auto __o = this->thiz<QTextStream *>();
	if (__o)
	{
		return __o->device();
	}
	return nullptr;
}

void QtScriptQTextStream::setFieldAlignment(int alignment)
{
	auto __o = this->thiz<QTextStream *>();
	if (__o)
	{
		__o->setFieldAlignment(QTextStream::FieldAlignment(alignment));
	}
}

void QtScriptQTextStream::reset()
{
	auto __o = this->thiz<QTextStream *>();
	if (__o)
	{
		__o->reset();
	}
}

QString QtScriptQTextStream::readAll()
{
	auto __o = this->thiz<QTextStream *>();
	if (__o)
	{
		return __o->readAll();
	}
	return QString();
}

void QtScriptQTextStream::setLocale(const QLocale& locale)
{
	auto __o = this->thiz<QTextStream *>();
	if (__o)
	{
		__o->setLocale(locale);
	}
}

void QtScriptQTextStream::resetStatus()
{
	auto __o = this->thiz<QTextStream *>();
	if (__o)
	{
		__o->resetStatus();
	}
}

bool QtScriptQTextStream::atEnd()
{
	auto __o = this->thiz<QTextStream *>();
	if (__o)
	{
		return __o->atEnd();
	}
	return false;
}

int QtScriptQTextStream::numberFlags()
{
	auto __o = this->thiz<QTextStream *>();
	if (__o)
	{
		return int(__o->numberFlags());
	}
	return 0;
}

int QtScriptQTextStream::integerBase()
{
	auto __o = this->thiz<QTextStream *>();
	if (__o)
	{
		return __o->integerBase();
	}
	return 0;
}

QString QtScriptQTextStream::readLine()
{
	auto __o = this->thiz<QTextStream *>();
	if (__o)
	{
		return __o->readLine();
	}
	return QString();
}

QString QtScriptQTextStream::readLine(qint64 maxlen)
{
	auto __o = this->thiz<QTextStream *>();
	if (__o)
	{
		return __o->readLine(maxlen);
	}
	return QString();
}

int QtScriptQTextStream::constructorArgumentCountMin() const
{
	return 0;
}

int QtScriptQTextStream::constructorArgumentCountMax() const
{
	return 1;
}

bool QtScriptQTextStream::constructObject(QScriptContext *context, NativeObjectType &out)
{
	auto __e = context->engine();
	Q_UNUSED(__e);
	bool ok = false;
	switch (context->argumentCount())
	{
		case 0:
		{
			out = new QTextStream();
			ok = true;
			break;
		}
		case 1:
		{
			auto arg0 = qscriptvalue_cast<QIODevice*>(context->argument(0));
			out = new QTextStream(arg0);
			ok = true;
			break;
		}
	}
	
	if (!ok)
	{
		QtScriptUtils::badArgumentsException(context,
			"QTextStream constructor");
	}
	return ok;
}

QtScriptQFileDevice::QtScriptQFileDevice(QScriptEngine *engine, const QByteArray &className)
	: QtScriptQIODevice(engine, className)
{
}

QtScriptQFileDevice::QtScriptQFileDevice(QScriptEngine *engine)
	: QtScriptQFileDevice(engine, "FileDevice")
{
}

void QtScriptQFileDevice::Register(const QScriptValue &targetNamespace)
{
	auto engine = targetNamespace.engine();
	Q_ASSERT(engine);
	auto inherit = engine->defaultPrototype(qMetaTypeId<QIODevice *>());
	auto ctor = RegisterT<QFileDevice, QtScriptQFileDevice>(targetNamespace, inherit);
	Q_ASSERT(ctor.isFunction());
}

int QtScriptQFileDevice::constructorArgumentCountMin() const
{
	return 0;
}

int QtScriptQFileDevice::constructorArgumentCountMax() const
{
	return 0;
}

bool QtScriptQFileDevice::constructObject(QScriptContext *context, NativeObjectType &)
{
	QtScriptUtils::noPublicConstructorException(context,
		"QFileDevice");
	return false;
}

int QtScriptQFileDevice::handle()
{
	auto __o = this->thiz<QFileDevice *>();
	if (__o)
	{
		return __o->handle();
	}
	return 0;
}

int QtScriptQFileDevice::error()
{
	auto __o = this->thiz<QFileDevice *>();
	if (__o)
	{
		return int(__o->error());
	}
	return 0;
}

void QtScriptQFileDevice::unsetError()
{
	auto __o = this->thiz<QFileDevice *>();
	if (__o)
	{
		__o->unsetError();
	}
}

QString QtScriptQFileDevice::fileName()
{
	auto __o = this->thiz<QFileDevice *>();
	if (__o)
	{
		return __o->fileName();
	}
	return QString();
}

bool QtScriptQFileDevice::flush()
{
	auto __o = this->thiz<QFileDevice *>();
	if (__o)
	{
		return __o->flush();
	}
	return false;
}

bool QtScriptQFileDevice::setPermissions(int permissionSpec)
{
	auto __o = this->thiz<QFileDevice *>();
	if (__o)
	{
		return __o->setPermissions(QFlags<QFileDevice::Permission>(permissionSpec));
	}
	return false;
}

bool QtScriptQFileDevice::resize(qint64 sz)
{
	auto __o = this->thiz<QFileDevice *>();
	if (__o)
	{
		return __o->resize(sz);
	}
	return false;
}

int QtScriptQFileDevice::permissions()
{
	auto __o = this->thiz<QFileDevice *>();
	if (__o)
	{
		return int(__o->permissions());
	}
	return 0;
}

QtScriptQFile::QtScriptQFile(QScriptEngine *engine, const QByteArray &className)
	: QtScriptQFileDevice(engine, className)
{
}

QtScriptQFile::QtScriptQFile(QScriptEngine *engine)
	: QtScriptQFile(engine, "File")
{
}

void QtScriptQFile::Register(const QScriptValue &targetNamespace)
{
	auto engine = targetNamespace.engine();
	Q_ASSERT(engine);
	auto inherit = engine->defaultPrototype(qMetaTypeId<QFileDevice *>());
	auto ctor = RegisterT<QFile, QtScriptQFile>(targetNamespace, inherit);
	Q_ASSERT(ctor.isFunction());
	ctor.setProperty("rename", engine->newFunction(
		static_cast<QScriptValue (*)(QScriptContext *, QScriptEngine *)>(
			&QtScriptQFile::rename)),
			QScriptValue::ReadOnly | QScriptValue::Undeletable);
	ctor.setProperty("encodeName", engine->newFunction(
		static_cast<QScriptValue (*)(QScriptContext *, QScriptEngine *)>(
			&QtScriptQFile::encodeName)),
			QScriptValue::ReadOnly | QScriptValue::Undeletable);
	ctor.setProperty("exists", engine->newFunction(
		static_cast<QScriptValue (*)(QScriptContext *, QScriptEngine *)>(
			&QtScriptQFile::exists)),
			QScriptValue::ReadOnly | QScriptValue::Undeletable);
	ctor.setProperty("symLinkTarget", engine->newFunction(
		static_cast<QScriptValue (*)(QScriptContext *, QScriptEngine *)>(
			&QtScriptQFile::symLinkTarget)),
			QScriptValue::ReadOnly | QScriptValue::Undeletable);
	ctor.setProperty("decodeName", engine->newFunction(
		static_cast<QScriptValue (*)(QScriptContext *, QScriptEngine *)>(
			&QtScriptQFile::decodeName)),
			QScriptValue::ReadOnly | QScriptValue::Undeletable);
	ctor.setProperty("remove", engine->newFunction(
		static_cast<QScriptValue (*)(QScriptContext *, QScriptEngine *)>(
			&QtScriptQFile::remove)),
			QScriptValue::ReadOnly | QScriptValue::Undeletable);
	ctor.setProperty("readLink", engine->newFunction(
		static_cast<QScriptValue (*)(QScriptContext *, QScriptEngine *)>(
			&QtScriptQFile::readLink)),
			QScriptValue::ReadOnly | QScriptValue::Undeletable);
	ctor.setProperty("link", engine->newFunction(
		static_cast<QScriptValue (*)(QScriptContext *, QScriptEngine *)>(
			&QtScriptQFile::link)),
			QScriptValue::ReadOnly | QScriptValue::Undeletable);
	ctor.setProperty("setPermissions", engine->newFunction(
		static_cast<QScriptValue (*)(QScriptContext *, QScriptEngine *)>(
			&QtScriptQFile::setPermissions)),
			QScriptValue::ReadOnly | QScriptValue::Undeletable);
	ctor.setProperty("copy", engine->newFunction(
		static_cast<QScriptValue (*)(QScriptContext *, QScriptEngine *)>(
			&QtScriptQFile::copy)),
			QScriptValue::ReadOnly | QScriptValue::Undeletable);
	ctor.setProperty("resize", engine->newFunction(
		static_cast<QScriptValue (*)(QScriptContext *, QScriptEngine *)>(
			&QtScriptQFile::resize)),
			QScriptValue::ReadOnly | QScriptValue::Undeletable);
	ctor.setProperty("permissions", engine->newFunction(
		static_cast<QScriptValue (*)(QScriptContext *, QScriptEngine *)>(
			&QtScriptQFile::permissions)),
			QScriptValue::ReadOnly | QScriptValue::Undeletable);
}

bool QtScriptQFile::rename(const QString& newName)
{
	auto __o = this->thiz<QFile *>();
	if (__o)
	{
		return __o->rename(newName);
	}
	return false;
}

bool QtScriptQFile::exists()
{
	auto __o = this->thiz<QFile *>();
	if (__o)
	{
		return __o->exists();
	}
	return false;
}

QString QtScriptQFile::symLinkTarget()
{
	auto __o = this->thiz<QFile *>();
	if (__o)
	{
		return __o->symLinkTarget();
	}
	return QString();
}

void QtScriptQFile::setFileName(const QString& name)
{
	auto __o = this->thiz<QFile *>();
	if (__o)
	{
		__o->setFileName(name);
	}
}

bool QtScriptQFile::remove()
{
	auto __o = this->thiz<QFile *>();
	if (__o)
	{
		return __o->remove();
	}
	return false;
}

QString QtScriptQFile::readLink()
{
	auto __o = this->thiz<QFile *>();
	if (__o)
	{
		return __o->readLink();
	}
	return QString();
}

bool QtScriptQFile::link(const QString& newName)
{
	auto __o = this->thiz<QFile *>();
	if (__o)
	{
		return __o->link(newName);
	}
	return false;
}

bool QtScriptQFile::copy(const QString& newName)
{
	auto __o = this->thiz<QFile *>();
	if (__o)
	{
		return __o->copy(newName);
	}
	return false;
}

QScriptValue QtScriptQFile::rename(QScriptContext *context, QScriptEngine* __e)
{
	if (!QtScriptUtils::checkArgumentCount(context, 2, 2))
	{
		return __e->uncaughtException();
	}

	switch (context->argumentCount())
	{
		case 2:
		{
			auto arg0 = qscriptvalue_cast<QString>(context->argument(0));
			auto arg1 = qscriptvalue_cast<QString>(context->argument(1));
			return __e->toScriptValue(QFile::rename(arg0, arg1));
		}
	}

	QtScriptUtils::badArgumentsException(context,
			"QFile::rename");
	return __e->uncaughtException();
}

QScriptValue QtScriptQFile::encodeName(QScriptContext *context, QScriptEngine* __e)
{
	if (!QtScriptUtils::checkArgumentCount(context, 1, 1))
	{
		return __e->uncaughtException();
	}

	switch (context->argumentCount())
	{
		case 1:
		{
			auto arg0 = qscriptvalue_cast<QString>(context->argument(0));
			return __e->toScriptValue(QFile::encodeName(arg0));
		}
	}

	QtScriptUtils::badArgumentsException(context,
			"QFile::encodeName");
	return __e->uncaughtException();
}

QScriptValue QtScriptQFile::exists(QScriptContext *context, QScriptEngine* __e)
{
	if (!QtScriptUtils::checkArgumentCount(context, 1, 1))
	{
		return __e->uncaughtException();
	}

	switch (context->argumentCount())
	{
		case 1:
		{
			auto arg0 = qscriptvalue_cast<QString>(context->argument(0));
			return __e->toScriptValue(QFile::exists(arg0));
		}
	}

	QtScriptUtils::badArgumentsException(context,
			"QFile::exists");
	return __e->uncaughtException();
}

QScriptValue QtScriptQFile::symLinkTarget(QScriptContext *context, QScriptEngine* __e)
{
	if (!QtScriptUtils::checkArgumentCount(context, 1, 1))
	{
		return __e->uncaughtException();
	}

	switch (context->argumentCount())
	{
		case 1:
		{
			auto arg0 = qscriptvalue_cast<QString>(context->argument(0));
			return __e->toScriptValue(QFile::symLinkTarget(arg0));
		}
	}

	QtScriptUtils::badArgumentsException(context,
			"QFile::symLinkTarget");
	return __e->uncaughtException();
}

QScriptValue QtScriptQFile::decodeName(QScriptContext *context, QScriptEngine* __e)
{
	if (!QtScriptUtils::checkArgumentCount(context, 1, 1))
	{
		return __e->uncaughtException();
	}

	switch (context->argumentCount())
	{
		case 1:
		{
			auto arg0 = qscriptvalue_cast<QByteArray>(context->argument(0));
			return __e->toScriptValue(QFile::decodeName(arg0));
		}
	}

	QtScriptUtils::badArgumentsException(context,
			"QFile::decodeName");
	return __e->uncaughtException();
}

QScriptValue QtScriptQFile::remove(QScriptContext *context, QScriptEngine* __e)
{
	if (!QtScriptUtils::checkArgumentCount(context, 1, 1))
	{
		return __e->uncaughtException();
	}

	switch (context->argumentCount())
	{
		case 1:
		{
			auto arg0 = qscriptvalue_cast<QString>(context->argument(0));
			return __e->toScriptValue(QFile::remove(arg0));
		}
	}

	QtScriptUtils::badArgumentsException(context,
			"QFile::remove");
	return __e->uncaughtException();
}

QScriptValue QtScriptQFile::readLink(QScriptContext *context, QScriptEngine* __e)
{
	if (!QtScriptUtils::checkArgumentCount(context, 1, 1))
	{
		return __e->uncaughtException();
	}

	switch (context->argumentCount())
	{
		case 1:
		{
			auto arg0 = qscriptvalue_cast<QString>(context->argument(0));
			return __e->toScriptValue(QFile::readLink(arg0));
		}
	}

	QtScriptUtils::badArgumentsException(context,
			"QFile::readLink");
	return __e->uncaughtException();
}

QScriptValue QtScriptQFile::link(QScriptContext *context, QScriptEngine* __e)
{
	if (!QtScriptUtils::checkArgumentCount(context, 2, 2))
	{
		return __e->uncaughtException();
	}

	switch (context->argumentCount())
	{
		case 2:
		{
			auto arg0 = qscriptvalue_cast<QString>(context->argument(0));
			auto arg1 = qscriptvalue_cast<QString>(context->argument(1));
			return __e->toScriptValue(QFile::link(arg0, arg1));
		}
	}

	QtScriptUtils::badArgumentsException(context,
			"QFile::link");
	return __e->uncaughtException();
}

QScriptValue QtScriptQFile::setPermissions(QScriptContext *context, QScriptEngine* __e)
{
	if (!QtScriptUtils::checkArgumentCount(context, 2, 2))
	{
		return __e->uncaughtException();
	}

	switch (context->argumentCount())
	{
		case 2:
		{
			auto arg0 = qscriptvalue_cast<QString>(context->argument(0));
			auto tmp_1 = qscriptvalue_cast<int>(context->argument(1));
			auto arg1 = QFlags<QFileDevice::Permission>(tmp_1);
			return __e->toScriptValue(QFile::setPermissions(arg0, arg1));
		}
	}

	QtScriptUtils::badArgumentsException(context,
			"QFile::setPermissions");
	return __e->uncaughtException();
}

QScriptValue QtScriptQFile::copy(QScriptContext *context, QScriptEngine* __e)
{
	if (!QtScriptUtils::checkArgumentCount(context, 2, 2))
	{
		return __e->uncaughtException();
	}

	switch (context->argumentCount())
	{
		case 2:
		{
			auto arg0 = qscriptvalue_cast<QString>(context->argument(0));
			auto arg1 = qscriptvalue_cast<QString>(context->argument(1));
			return __e->toScriptValue(QFile::copy(arg0, arg1));
		}
	}

	QtScriptUtils::badArgumentsException(context,
			"QFile::copy");
	return __e->uncaughtException();
}

QScriptValue QtScriptQFile::resize(QScriptContext *context, QScriptEngine* __e)
{
	if (!QtScriptUtils::checkArgumentCount(context, 2, 2))
	{
		return __e->uncaughtException();
	}

	switch (context->argumentCount())
	{
		case 2:
		{
			auto arg0 = qscriptvalue_cast<QString>(context->argument(0));
			auto arg1 = qscriptvalue_cast<qint64>(context->argument(1));
			return __e->toScriptValue(QFile::resize(arg0, arg1));
		}
	}

	QtScriptUtils::badArgumentsException(context,
			"QFile::resize");
	return __e->uncaughtException();
}

QScriptValue QtScriptQFile::permissions(QScriptContext *context, QScriptEngine* __e)
{
	if (!QtScriptUtils::checkArgumentCount(context, 1, 1))
	{
		return __e->uncaughtException();
	}

	switch (context->argumentCount())
	{
		case 1:
		{
			auto arg0 = qscriptvalue_cast<QString>(context->argument(0));
			return __e->toScriptValue(int(QFile::permissions(arg0)));
		}
	}

	QtScriptUtils::badArgumentsException(context,
			"QFile::permissions");
	return __e->uncaughtException();
}

int QtScriptQFile::constructorArgumentCountMin() const
{
	return 0;
}

int QtScriptQFile::constructorArgumentCountMax() const
{
	return 2;
}

bool QtScriptQFile::constructObject(QScriptContext *context, NativeObjectType &out)
{
	auto __e = context->engine();
	Q_UNUSED(__e);
	bool ok = false;
	switch (context->argumentCount())
	{
		case 0:
		{
			out = new QFile();
			ok = true;
			break;
		}
		case 1:
		{
			auto arg0 = qscriptvalue_cast<QString>(context->argument(0));
			out = new QFile(arg0);
			ok = true;
			break;
		}
		case 2:
		{
			auto arg0 = qscriptvalue_cast<QString>(context->argument(0));
			auto arg1 = qscriptvalue_cast<QObject*>(context->argument(1));
			out = new QFile(arg0, arg1);
			ok = true;
			break;
		}
	}
	
	if (!ok)
	{
		QtScriptUtils::badArgumentsException(context,
			"QFile constructor");
	}
	return ok;
}

QtScriptQFileInfo::QtScriptQFileInfo(QScriptEngine *engine, const QByteArray &className)
	: QtScriptBaseClassPrototype<QFileInfo, false>(engine, className)
{
}

QtScriptQFileInfo::QtScriptQFileInfo(QScriptEngine *engine)
	: QtScriptQFileInfo(engine, "FileInfo")
{
}

void QtScriptQFileInfo::Register(const QScriptValue &targetNamespace)
{
	auto engine = targetNamespace.engine();
	Q_ASSERT(engine);
	QScriptValue inherit;
	auto ctor = RegisterT<QFileInfo, QtScriptQFileInfo>(targetNamespace, inherit);
	Q_ASSERT(ctor.isFunction());
	ctor.setProperty("exists", engine->newFunction(
		static_cast<QScriptValue (*)(QScriptContext *, QScriptEngine *)>(
			&QtScriptQFileInfo::exists)),
			QScriptValue::ReadOnly | QScriptValue::Undeletable);
}

bool QtScriptQFileInfo::notEquals(const QFileInfo& fileinfo)
{
	auto __o = this->thiz<QFileInfo *>();
	if (__o)
	{
		return __o->operator!=(fileinfo);
	}
	return false;
}

void QtScriptQFileInfo::set(const QFileInfo& fileinfo)
{
	auto __o = this->thiz<QFileInfo *>();
	if (__o)
	{
		__o->operator=(fileinfo);
	}
}

QString QtScriptQFileInfo::suffix()
{
	auto __o = this->thiz<QFileInfo *>();
	if (__o)
	{
		return __o->suffix();
	}
	return QString();
}

bool QtScriptQFileInfo::exists()
{
	auto __o = this->thiz<QFileInfo *>();
	if (__o)
	{
		return __o->exists();
	}
	return false;
}

QString QtScriptQFileInfo::symLinkTarget()
{
	auto __o = this->thiz<QFileInfo *>();
	if (__o)
	{
		return __o->symLinkTarget();
	}
	return QString();
}

bool QtScriptQFileInfo::isRelative()
{
	auto __o = this->thiz<QFileInfo *>();
	if (__o)
	{
		return __o->isRelative();
	}
	return false;
}

QString QtScriptQFileInfo::completeBaseName()
{
	auto __o = this->thiz<QFileInfo *>();
	if (__o)
	{
		return __o->completeBaseName();
	}
	return QString();
}

QString QtScriptQFileInfo::canonicalFilePath()
{
	auto __o = this->thiz<QFileInfo *>();
	if (__o)
	{
		return __o->canonicalFilePath();
	}
	return QString();
}

bool QtScriptQFileInfo::isAbsolute()
{
	auto __o = this->thiz<QFileInfo *>();
	if (__o)
	{
		return __o->isAbsolute();
	}
	return false;
}

QString QtScriptQFileInfo::owner()
{
	auto __o = this->thiz<QFileInfo *>();
	if (__o)
	{
		return __o->owner();
	}
	return QString();
}

bool QtScriptQFileInfo::isExecutable()
{
	auto __o = this->thiz<QFileInfo *>();
	if (__o)
	{
		return __o->isExecutable();
	}
	return false;
}

qint64 QtScriptQFileInfo::size()
{
	auto __o = this->thiz<QFileInfo *>();
	if (__o)
	{
		return __o->size();
	}
	return static_cast<qint64>(0);
}

QString QtScriptQFileInfo::bundleName()
{
	auto __o = this->thiz<QFileInfo *>();
	if (__o)
	{
		return __o->bundleName();
	}
	return QString();
}

QString QtScriptQFileInfo::group()
{
	auto __o = this->thiz<QFileInfo *>();
	if (__o)
	{
		return __o->group();
	}
	return QString();
}

bool QtScriptQFileInfo::isWritable()
{
	auto __o = this->thiz<QFileInfo *>();
	if (__o)
	{
		return __o->isWritable();
	}
	return false;
}

QString QtScriptQFileInfo::filePath()
{
	auto __o = this->thiz<QFileInfo *>();
	if (__o)
	{
		return __o->filePath();
	}
	return QString();
}

QString QtScriptQFileInfo::absolutePath()
{
	auto __o = this->thiz<QFileInfo *>();
	if (__o)
	{
		return __o->absolutePath();
	}
	return QString();
}

void QtScriptQFileInfo::swap(QFileInfo& other)
{
	auto __o = this->thiz<QFileInfo *>();
	if (__o)
	{
		__o->swap(other);
	}
}

QString QtScriptQFileInfo::canonicalPath()
{
	auto __o = this->thiz<QFileInfo *>();
	if (__o)
	{
		return __o->canonicalPath();
	}
	return QString();
}

bool QtScriptQFileInfo::isBundle()
{
	auto __o = this->thiz<QFileInfo *>();
	if (__o)
	{
		return __o->isBundle();
	}
	return false;
}

bool QtScriptQFileInfo::isHidden()
{
	auto __o = this->thiz<QFileInfo *>();
	if (__o)
	{
		return __o->isHidden();
	}
	return false;
}

bool QtScriptQFileInfo::isDir()
{
	auto __o = this->thiz<QFileInfo *>();
	if (__o)
	{
		return __o->isDir();
	}
	return false;
}

QDateTime QtScriptQFileInfo::lastRead()
{
	auto __o = this->thiz<QFileInfo *>();
	if (__o)
	{
		return __o->lastRead();
	}
	return QDateTime();
}

bool QtScriptQFileInfo::isRoot()
{
	auto __o = this->thiz<QFileInfo *>();
	if (__o)
	{
		return __o->isRoot();
	}
	return false;
}

QDir QtScriptQFileInfo::absoluteDir()
{
	auto __o = this->thiz<QFileInfo *>();
	if (__o)
	{
		return __o->absoluteDir();
	}
	return QDir();
}

QString QtScriptQFileInfo::absoluteFilePath()
{
	auto __o = this->thiz<QFileInfo *>();
	if (__o)
	{
		return __o->absoluteFilePath();
	}
	return QString();
}

bool QtScriptQFileInfo::equals(const QFileInfo& fileinfo)
{
	auto __o = this->thiz<QFileInfo *>();
	if (__o)
	{
		return __o->operator==(fileinfo);
	}
	return false;
}

QString QtScriptQFileInfo::fileName()
{
	auto __o = this->thiz<QFileInfo *>();
	if (__o)
	{
		return __o->fileName();
	}
	return QString();
}

void QtScriptQFileInfo::setCaching(bool on)
{
	auto __o = this->thiz<QFileInfo *>();
	if (__o)
	{
		__o->setCaching(on);
	}
}

QString QtScriptQFileInfo::completeSuffix()
{
	auto __o = this->thiz<QFileInfo *>();
	if (__o)
	{
		return __o->completeSuffix();
	}
	return QString();
}

QString QtScriptQFileInfo::path()
{
	auto __o = this->thiz<QFileInfo *>();
	if (__o)
	{
		return __o->path();
	}
	return QString();
}

uint QtScriptQFileInfo::groupId()
{
	auto __o = this->thiz<QFileInfo *>();
	if (__o)
	{
		return __o->groupId();
	}
	return static_cast<uint>(0);
}

int QtScriptQFileInfo::permissions()
{
	auto __o = this->thiz<QFileInfo *>();
	if (__o)
	{
		return int(__o->permissions());
	}
	return 0;
}

bool QtScriptQFileInfo::isNativePath()
{
	auto __o = this->thiz<QFileInfo *>();
	if (__o)
	{
		return __o->isNativePath();
	}
	return false;
}

QDateTime QtScriptQFileInfo::created()
{
	auto __o = this->thiz<QFileInfo *>();
	if (__o)
	{
		return __o->created();
	}
	return QDateTime();
}

bool QtScriptQFileInfo::isSymLink()
{
	auto __o = this->thiz<QFileInfo *>();
	if (__o)
	{
		return __o->isSymLink();
	}
	return false;
}

QDateTime QtScriptQFileInfo::lastModified()
{
	auto __o = this->thiz<QFileInfo *>();
	if (__o)
	{
		return __o->lastModified();
	}
	return QDateTime();
}

QString QtScriptQFileInfo::baseName()
{
	auto __o = this->thiz<QFileInfo *>();
	if (__o)
	{
		return __o->baseName();
	}
	return QString();
}

void QtScriptQFileInfo::refresh()
{
	auto __o = this->thiz<QFileInfo *>();
	if (__o)
	{
		__o->refresh();
	}
}

QString QtScriptQFileInfo::readLink()
{
	auto __o = this->thiz<QFileInfo *>();
	if (__o)
	{
		return __o->readLink();
	}
	return QString();
}

void QtScriptQFileInfo::setFile(const QString& file)
{
	auto __o = this->thiz<QFileInfo *>();
	if (__o)
	{
		__o->setFile(file);
	}
}

void QtScriptQFileInfo::setFile(const QDir& dir, const QString& file)
{
	auto __o = this->thiz<QFileInfo *>();
	if (__o)
	{
		__o->setFile(dir, file);
	}
}

bool QtScriptQFileInfo::isReadable()
{
	auto __o = this->thiz<QFileInfo *>();
	if (__o)
	{
		return __o->isReadable();
	}
	return false;
}

bool QtScriptQFileInfo::caching()
{
	auto __o = this->thiz<QFileInfo *>();
	if (__o)
	{
		return __o->caching();
	}
	return false;
}

uint QtScriptQFileInfo::ownerId()
{
	auto __o = this->thiz<QFileInfo *>();
	if (__o)
	{
		return __o->ownerId();
	}
	return static_cast<uint>(0);
}

bool QtScriptQFileInfo::permission(int permissions)
{
	auto __o = this->thiz<QFileInfo *>();
	if (__o)
	{
		return __o->permission(QFlags<QFileDevice::Permission>(permissions));
	}
	return false;
}

bool QtScriptQFileInfo::isFile()
{
	auto __o = this->thiz<QFileInfo *>();
	if (__o)
	{
		return __o->isFile();
	}
	return false;
}

bool QtScriptQFileInfo::makeAbsolute()
{
	auto __o = this->thiz<QFileInfo *>();
	if (__o)
	{
		return __o->makeAbsolute();
	}
	return false;
}

QDir QtScriptQFileInfo::dir()
{
	auto __o = this->thiz<QFileInfo *>();
	if (__o)
	{
		return __o->dir();
	}
	return QDir();
}

QScriptValue QtScriptQFileInfo::exists(QScriptContext *context, QScriptEngine* __e)
{
	if (!QtScriptUtils::checkArgumentCount(context, 1, 1))
	{
		return __e->uncaughtException();
	}

	switch (context->argumentCount())
	{
		case 1:
		{
			auto arg0 = qscriptvalue_cast<QString>(context->argument(0));
			return __e->toScriptValue(QFileInfo::exists(arg0));
		}
	}

	QtScriptUtils::badArgumentsException(context,
			"QFileInfo::exists");
	return __e->uncaughtException();
}

int QtScriptQFileInfo::constructorArgumentCountMin() const
{
	return 0;
}

int QtScriptQFileInfo::constructorArgumentCountMax() const
{
	return 2;
}

bool QtScriptQFileInfo::constructObject(QScriptContext *context, NativeObjectType &out)
{
	auto __e = context->engine();
	Q_UNUSED(__e);
	bool ok = false;
	switch (context->argumentCount())
	{
		case 0:
		{
			ok = true;
			break;
		}
		case 1:
		{
			auto arg0 = qscriptvalue_cast<QString>(context->argument(0));
			out = QFileInfo(arg0);
			ok = true;
			break;
		}
		case 2:
		{
			auto arg0 = qscriptvalue_cast<QDir>(context->argument(0));
			auto arg1 = qscriptvalue_cast<QString>(context->argument(1));
			out = QFileInfo(arg0, arg1);
			ok = true;
			break;
		}
	}
	
	if (!ok)
	{
		QtScriptUtils::badArgumentsException(context,
			"QFileInfo constructor");
	}
	return ok;
}

QtScriptQDir::QtScriptQDir(QScriptEngine *engine, const QByteArray &className)
	: QtScriptBaseClassPrototype<QDir, false>(engine, className)
{
}

QtScriptQDir::QtScriptQDir(QScriptEngine *engine)
	: QtScriptQDir(engine, "Dir")
{
}

void QtScriptQDir::Register(const QScriptValue &targetNamespace)
{
	auto engine = targetNamespace.engine();
	Q_ASSERT(engine);
	QScriptValue inherit;
	auto ctor = RegisterT<QDir, QtScriptQDir>(targetNamespace, inherit);
	Q_ASSERT(ctor.isFunction());
	ctor.setProperty("listSeparator", engine->newFunction(
		static_cast<QScriptValue (*)(QScriptContext *, QScriptEngine *)>(
			&QtScriptQDir::listSeparator)),
			QScriptValue::ReadOnly | QScriptValue::Undeletable);
	ctor.setProperty("currentPath", engine->newFunction(
		static_cast<QScriptValue (*)(QScriptContext *, QScriptEngine *)>(
			&QtScriptQDir::currentPath)),
			QScriptValue::ReadOnly | QScriptValue::Undeletable);
	ctor.setProperty("isAbsolutePath", engine->newFunction(
		static_cast<QScriptValue (*)(QScriptContext *, QScriptEngine *)>(
			&QtScriptQDir::isAbsolutePath)),
			QScriptValue::ReadOnly | QScriptValue::Undeletable);
	ctor.setProperty("tempPath", engine->newFunction(
		static_cast<QScriptValue (*)(QScriptContext *, QScriptEngine *)>(
			&QtScriptQDir::tempPath)),
			QScriptValue::ReadOnly | QScriptValue::Undeletable);
	ctor.setProperty("homePath", engine->newFunction(
		static_cast<QScriptValue (*)(QScriptContext *, QScriptEngine *)>(
			&QtScriptQDir::homePath)),
			QScriptValue::ReadOnly | QScriptValue::Undeletable);
	ctor.setProperty("home", engine->newFunction(
		static_cast<QScriptValue (*)(QScriptContext *, QScriptEngine *)>(
			&QtScriptQDir::home)),
			QScriptValue::ReadOnly | QScriptValue::Undeletable);
	ctor.setProperty("cleanPath", engine->newFunction(
		static_cast<QScriptValue (*)(QScriptContext *, QScriptEngine *)>(
			&QtScriptQDir::cleanPath)),
			QScriptValue::ReadOnly | QScriptValue::Undeletable);
	ctor.setProperty("setCurrent", engine->newFunction(
		static_cast<QScriptValue (*)(QScriptContext *, QScriptEngine *)>(
			&QtScriptQDir::setCurrent)),
			QScriptValue::ReadOnly | QScriptValue::Undeletable);
	ctor.setProperty("toNativeSeparators", engine->newFunction(
		static_cast<QScriptValue (*)(QScriptContext *, QScriptEngine *)>(
			&QtScriptQDir::toNativeSeparators)),
			QScriptValue::ReadOnly | QScriptValue::Undeletable);
	ctor.setProperty("searchPaths", engine->newFunction(
		static_cast<QScriptValue (*)(QScriptContext *, QScriptEngine *)>(
			&QtScriptQDir::searchPaths)),
			QScriptValue::ReadOnly | QScriptValue::Undeletable);
	ctor.setProperty("addResourceSearchPath", engine->newFunction(
		static_cast<QScriptValue (*)(QScriptContext *, QScriptEngine *)>(
			&QtScriptQDir::addResourceSearchPath)),
			QScriptValue::ReadOnly | QScriptValue::Undeletable);
	ctor.setProperty("current", engine->newFunction(
		static_cast<QScriptValue (*)(QScriptContext *, QScriptEngine *)>(
			&QtScriptQDir::current)),
			QScriptValue::ReadOnly | QScriptValue::Undeletable);
	ctor.setProperty("fromNativeSeparators", engine->newFunction(
		static_cast<QScriptValue (*)(QScriptContext *, QScriptEngine *)>(
			&QtScriptQDir::fromNativeSeparators)),
			QScriptValue::ReadOnly | QScriptValue::Undeletable);
	ctor.setProperty("isRelativePath", engine->newFunction(
		static_cast<QScriptValue (*)(QScriptContext *, QScriptEngine *)>(
			&QtScriptQDir::isRelativePath)),
			QScriptValue::ReadOnly | QScriptValue::Undeletable);
	ctor.setProperty("match", engine->newFunction(
		static_cast<QScriptValue (*)(QScriptContext *, QScriptEngine *)>(
			&QtScriptQDir::match)),
			QScriptValue::ReadOnly | QScriptValue::Undeletable);
	ctor.setProperty("setSearchPaths", engine->newFunction(
		static_cast<QScriptValue (*)(QScriptContext *, QScriptEngine *)>(
			&QtScriptQDir::setSearchPaths)),
			QScriptValue::ReadOnly | QScriptValue::Undeletable);
	ctor.setProperty("drives", engine->newFunction(
		static_cast<QScriptValue (*)(QScriptContext *, QScriptEngine *)>(
			&QtScriptQDir::drives)),
			QScriptValue::ReadOnly | QScriptValue::Undeletable);
	ctor.setProperty("addSearchPath", engine->newFunction(
		static_cast<QScriptValue (*)(QScriptContext *, QScriptEngine *)>(
			&QtScriptQDir::addSearchPath)),
			QScriptValue::ReadOnly | QScriptValue::Undeletable);
	ctor.setProperty("temp", engine->newFunction(
		static_cast<QScriptValue (*)(QScriptContext *, QScriptEngine *)>(
			&QtScriptQDir::temp)),
			QScriptValue::ReadOnly | QScriptValue::Undeletable);
	ctor.setProperty("rootPath", engine->newFunction(
		static_cast<QScriptValue (*)(QScriptContext *, QScriptEngine *)>(
			&QtScriptQDir::rootPath)),
			QScriptValue::ReadOnly | QScriptValue::Undeletable);
	ctor.setProperty("nameFiltersFromString", engine->newFunction(
		static_cast<QScriptValue (*)(QScriptContext *, QScriptEngine *)>(
			&QtScriptQDir::nameFiltersFromString)),
			QScriptValue::ReadOnly | QScriptValue::Undeletable);
	ctor.setProperty("separator", engine->newFunction(
		static_cast<QScriptValue (*)(QScriptContext *, QScriptEngine *)>(
			&QtScriptQDir::separator)),
			QScriptValue::ReadOnly | QScriptValue::Undeletable);
	ctor.setProperty("root", engine->newFunction(
		static_cast<QScriptValue (*)(QScriptContext *, QScriptEngine *)>(
			&QtScriptQDir::root)),
			QScriptValue::ReadOnly | QScriptValue::Undeletable);
}

void QtScriptQDir::setNameFilters(const QStringList& nameFilters)
{
	auto __o = this->thiz<QDir *>();
	if (__o)
	{
		__o->setNameFilters(nameFilters);
	}
}

bool QtScriptQDir::notEquals(const QDir& dir)
{
	auto __o = this->thiz<QDir *>();
	if (__o)
	{
		return __o->operator!=(dir);
	}
	return false;
}

void QtScriptQDir::refresh()
{
	auto __o = this->thiz<QDir *>();
	if (__o)
	{
		__o->refresh();
	}
}

void QtScriptQDir::set(const QDir& arg0)
{
	auto __o = this->thiz<QDir *>();
	if (__o)
	{
		__o->operator=(arg0);
	}
}

bool QtScriptQDir::exists()
{
	auto __o = this->thiz<QDir *>();
	if (__o)
	{
		return __o->exists();
	}
	return false;
}

bool QtScriptQDir::exists(const QString& name)
{
	auto __o = this->thiz<QDir *>();
	if (__o)
	{
		return __o->exists(name);
	}
	return false;
}

QString QtScriptQDir::relativeFilePath(const QString& fileName)
{
	auto __o = this->thiz<QDir *>();
	if (__o)
	{
		return __o->relativeFilePath(fileName);
	}
	return QString();
}

bool QtScriptQDir::isRelative()
{
	auto __o = this->thiz<QDir *>();
	if (__o)
	{
		return __o->isRelative();
	}
	return false;
}

bool QtScriptQDir::cd(const QString& dirName)
{
	auto __o = this->thiz<QDir *>();
	if (__o)
	{
		return __o->cd(dirName);
	}
	return false;
}

QString QtScriptQDir::at(int arg0)
{
	auto __o = this->thiz<QDir *>();
	if (__o)
	{
		return __o->operator[](arg0);
	}
	return QString();
}

bool QtScriptQDir::mkdir(const QString& dirName)
{
	auto __o = this->thiz<QDir *>();
	if (__o)
	{
		return __o->mkdir(dirName);
	}
	return false;
}

QStringList QtScriptQDir::entryList()
{
	auto __o = this->thiz<QDir *>();
	if (__o)
	{
		return __o->entryList();
	}
	return QStringList();
}

QStringList QtScriptQDir::entryList(int filters)
{
	auto __o = this->thiz<QDir *>();
	if (__o)
	{
		return __o->entryList(QFlags<QDir::Filter>(filters));
	}
	return QStringList();
}

QStringList QtScriptQDir::entryList(int filters, int sort)
{
	auto __o = this->thiz<QDir *>();
	if (__o)
	{
		return __o->entryList(QFlags<QDir::Filter>(filters), QFlags<QDir::SortFlag>(sort));
	}
	return QStringList();
}

QStringList QtScriptQDir::entryList(const QStringList& nameFilters, int filters, int sort)
{
	auto __o = this->thiz<QDir *>();
	if (__o)
	{
		return __o->entryList(nameFilters, QFlags<QDir::Filter>(filters), QFlags<QDir::SortFlag>(sort));
	}
	return QStringList();
}

QString QtScriptQDir::absolutePath()
{
	auto __o = this->thiz<QDir *>();
	if (__o)
	{
		return __o->absolutePath();
	}
	return QString();
}

bool QtScriptQDir::isEmpty()
{
	auto __o = this->thiz<QDir *>();
	if (__o)
	{
		return __o->isEmpty();
	}
	return false;
}

bool QtScriptQDir::isEmpty(int filters)
{
	auto __o = this->thiz<QDir *>();
	if (__o)
	{
		return __o->isEmpty(QFlags<QDir::Filter>(filters));
	}
	return false;
}

void QtScriptQDir::swap(QDir& other)
{
	auto __o = this->thiz<QDir *>();
	if (__o)
	{
		__o->swap(other);
	}
}

QString QtScriptQDir::canonicalPath()
{
	auto __o = this->thiz<QDir *>();
	if (__o)
	{
		return __o->canonicalPath();
	}
	return QString();
}

bool QtScriptQDir::removeRecursively()
{
	auto __o = this->thiz<QDir *>();
	if (__o)
	{
		return __o->removeRecursively();
	}
	return false;
}

void QtScriptQDir::setPath(const QString& path)
{
	auto __o = this->thiz<QDir *>();
	if (__o)
	{
		__o->setPath(path);
	}
}

QString QtScriptQDir::dirName()
{
	auto __o = this->thiz<QDir *>();
	if (__o)
	{
		return __o->dirName();
	}
	return QString();
}

bool QtScriptQDir::rmdir(const QString& dirName)
{
	auto __o = this->thiz<QDir *>();
	if (__o)
	{
		return __o->rmdir(dirName);
	}
	return false;
}

bool QtScriptQDir::isRoot()
{
	auto __o = this->thiz<QDir *>();
	if (__o)
	{
		return __o->isRoot();
	}
	return false;
}

QString QtScriptQDir::filePath(const QString& fileName)
{
	auto __o = this->thiz<QDir *>();
	if (__o)
	{
		return __o->filePath(fileName);
	}
	return QString();
}

QString QtScriptQDir::absoluteFilePath(const QString& fileName)
{
	auto __o = this->thiz<QDir *>();
	if (__o)
	{
		return __o->absoluteFilePath(fileName);
	}
	return QString();
}

bool QtScriptQDir::equals(const QDir& dir)
{
	auto __o = this->thiz<QDir *>();
	if (__o)
	{
		return __o->operator==(dir);
	}
	return false;
}

void QtScriptQDir::setSorting(int sort)
{
	auto __o = this->thiz<QDir *>();
	if (__o)
	{
		__o->setSorting(QFlags<QDir::SortFlag>(sort));
	}
}

bool QtScriptQDir::rmpath(const QString& dirPath)
{
	auto __o = this->thiz<QDir *>();
	if (__o)
	{
		return __o->rmpath(dirPath);
	}
	return false;
}

QString QtScriptQDir::path()
{
	auto __o = this->thiz<QDir *>();
	if (__o)
	{
		return __o->path();
	}
	return QString();
}

void QtScriptQDir::setFilter(int filter)
{
	auto __o = this->thiz<QDir *>();
	if (__o)
	{
		__o->setFilter(QFlags<QDir::Filter>(filter));
	}
}

uint QtScriptQDir::count()
{
	auto __o = this->thiz<QDir *>();
	if (__o)
	{
		return __o->count();
	}
	return static_cast<uint>(0);
}

bool QtScriptQDir::cdUp()
{
	auto __o = this->thiz<QDir *>();
	if (__o)
	{
		return __o->cdUp();
	}
	return false;
}

int QtScriptQDir::sorting()
{
	auto __o = this->thiz<QDir *>();
	if (__o)
	{
		return int(__o->sorting());
	}
	return 0;
}

QStringList QtScriptQDir::nameFilters()
{
	auto __o = this->thiz<QDir *>();
	if (__o)
	{
		return __o->nameFilters();
	}
	return QStringList();
}

bool QtScriptQDir::mkpath(const QString& dirPath)
{
	auto __o = this->thiz<QDir *>();
	if (__o)
	{
		return __o->mkpath(dirPath);
	}
	return false;
}

bool QtScriptQDir::remove(const QString& fileName)
{
	auto __o = this->thiz<QDir *>();
	if (__o)
	{
		return __o->remove(fileName);
	}
	return false;
}

bool QtScriptQDir::makeAbsolute()
{
	auto __o = this->thiz<QDir *>();
	if (__o)
	{
		return __o->makeAbsolute();
	}
	return false;
}

int QtScriptQDir::filter()
{
	auto __o = this->thiz<QDir *>();
	if (__o)
	{
		return int(__o->filter());
	}
	return 0;
}

bool QtScriptQDir::rename(const QString& oldName, const QString& newName)
{
	auto __o = this->thiz<QDir *>();
	if (__o)
	{
		return __o->rename(oldName, newName);
	}
	return false;
}

bool QtScriptQDir::isReadable()
{
	auto __o = this->thiz<QDir *>();
	if (__o)
	{
		return __o->isReadable();
	}
	return false;
}

QList<QFileInfo> QtScriptQDir::entryInfoList()
{
	auto __o = this->thiz<QDir *>();
	if (__o)
	{
		return __o->entryInfoList();
	}
	return QList<QFileInfo>();
}

QList<QFileInfo> QtScriptQDir::entryInfoList(int filters)
{
	auto __o = this->thiz<QDir *>();
	if (__o)
	{
		return __o->entryInfoList(QFlags<QDir::Filter>(filters));
	}
	return QList<QFileInfo>();
}

QList<QFileInfo> QtScriptQDir::entryInfoList(int filters, int sort)
{
	auto __o = this->thiz<QDir *>();
	if (__o)
	{
		return __o->entryInfoList(QFlags<QDir::Filter>(filters), QFlags<QDir::SortFlag>(sort));
	}
	return QList<QFileInfo>();
}

QList<QFileInfo> QtScriptQDir::entryInfoList(const QStringList& nameFilters, int filters, int sort)
{
	auto __o = this->thiz<QDir *>();
	if (__o)
	{
		return __o->entryInfoList(nameFilters, QFlags<QDir::Filter>(filters), QFlags<QDir::SortFlag>(sort));
	}
	return QList<QFileInfo>();
}

bool QtScriptQDir::isAbsolute()
{
	auto __o = this->thiz<QDir *>();
	if (__o)
	{
		return __o->isAbsolute();
	}
	return false;
}

QScriptValue QtScriptQDir::listSeparator(QScriptContext *context, QScriptEngine* __e)
{
	if (!QtScriptUtils::checkArgumentCount(context, 0, 0))
	{
		return __e->uncaughtException();
	}

	switch (context->argumentCount())
	{
		case 0:
		{
			return __e->toScriptValue(QDir::listSeparator());
		}
	}

	QtScriptUtils::badArgumentsException(context,
			"QDir::listSeparator");
	return __e->uncaughtException();
}

QScriptValue QtScriptQDir::currentPath(QScriptContext *context, QScriptEngine* __e)
{
	if (!QtScriptUtils::checkArgumentCount(context, 0, 0))
	{
		return __e->uncaughtException();
	}

	switch (context->argumentCount())
	{
		case 0:
		{
			return __e->toScriptValue(QDir::currentPath());
		}
	}

	QtScriptUtils::badArgumentsException(context,
			"QDir::currentPath");
	return __e->uncaughtException();
}

QScriptValue QtScriptQDir::isAbsolutePath(QScriptContext *context, QScriptEngine* __e)
{
	if (!QtScriptUtils::checkArgumentCount(context, 1, 1))
	{
		return __e->uncaughtException();
	}

	switch (context->argumentCount())
	{
		case 1:
		{
			auto arg0 = qscriptvalue_cast<QString>(context->argument(0));
			return __e->toScriptValue(QDir::isAbsolutePath(arg0));
		}
	}

	QtScriptUtils::badArgumentsException(context,
			"QDir::isAbsolutePath");
	return __e->uncaughtException();
}

QScriptValue QtScriptQDir::tempPath(QScriptContext *context, QScriptEngine* __e)
{
	if (!QtScriptUtils::checkArgumentCount(context, 0, 0))
	{
		return __e->uncaughtException();
	}

	switch (context->argumentCount())
	{
		case 0:
		{
			return __e->toScriptValue(QDir::tempPath());
		}
	}

	QtScriptUtils::badArgumentsException(context,
			"QDir::tempPath");
	return __e->uncaughtException();
}

QScriptValue QtScriptQDir::homePath(QScriptContext *context, QScriptEngine* __e)
{
	if (!QtScriptUtils::checkArgumentCount(context, 0, 0))
	{
		return __e->uncaughtException();
	}

	switch (context->argumentCount())
	{
		case 0:
		{
			return __e->toScriptValue(QDir::homePath());
		}
	}

	QtScriptUtils::badArgumentsException(context,
			"QDir::homePath");
	return __e->uncaughtException();
}

QScriptValue QtScriptQDir::home(QScriptContext *context, QScriptEngine* __e)
{
	if (!QtScriptUtils::checkArgumentCount(context, 0, 0))
	{
		return __e->uncaughtException();
	}

	switch (context->argumentCount())
	{
		case 0:
		{
			return __e->toScriptValue(QDir::home());
		}
	}

	QtScriptUtils::badArgumentsException(context,
			"QDir::home");
	return __e->uncaughtException();
}

QScriptValue QtScriptQDir::cleanPath(QScriptContext *context, QScriptEngine* __e)
{
	if (!QtScriptUtils::checkArgumentCount(context, 1, 1))
	{
		return __e->uncaughtException();
	}

	switch (context->argumentCount())
	{
		case 1:
		{
			auto arg0 = qscriptvalue_cast<QString>(context->argument(0));
			return __e->toScriptValue(QDir::cleanPath(arg0));
		}
	}

	QtScriptUtils::badArgumentsException(context,
			"QDir::cleanPath");
	return __e->uncaughtException();
}

QScriptValue QtScriptQDir::setCurrent(QScriptContext *context, QScriptEngine* __e)
{
	if (!QtScriptUtils::checkArgumentCount(context, 1, 1))
	{
		return __e->uncaughtException();
	}

	switch (context->argumentCount())
	{
		case 1:
		{
			auto arg0 = qscriptvalue_cast<QString>(context->argument(0));
			return __e->toScriptValue(QDir::setCurrent(arg0));
		}
	}

	QtScriptUtils::badArgumentsException(context,
			"QDir::setCurrent");
	return __e->uncaughtException();
}

QScriptValue QtScriptQDir::toNativeSeparators(QScriptContext *context, QScriptEngine* __e)
{
	if (!QtScriptUtils::checkArgumentCount(context, 1, 1))
	{
		return __e->uncaughtException();
	}

	switch (context->argumentCount())
	{
		case 1:
		{
			auto arg0 = qscriptvalue_cast<QString>(context->argument(0));
			return __e->toScriptValue(QDir::toNativeSeparators(arg0));
		}
	}

	QtScriptUtils::badArgumentsException(context,
			"QDir::toNativeSeparators");
	return __e->uncaughtException();
}

QScriptValue QtScriptQDir::searchPaths(QScriptContext *context, QScriptEngine* __e)
{
	if (!QtScriptUtils::checkArgumentCount(context, 1, 1))
	{
		return __e->uncaughtException();
	}

	switch (context->argumentCount())
	{
		case 1:
		{
			auto arg0 = qscriptvalue_cast<QString>(context->argument(0));
			return __e->toScriptValue(QDir::searchPaths(arg0));
		}
	}

	QtScriptUtils::badArgumentsException(context,
			"QDir::searchPaths");
	return __e->uncaughtException();
}

QScriptValue QtScriptQDir::addResourceSearchPath(QScriptContext *context, QScriptEngine* __e)
{
	if (!QtScriptUtils::checkArgumentCount(context, 1, 1))
	{
		return __e->uncaughtException();
	}

	switch (context->argumentCount())
	{
		case 1:
		{
			auto arg0 = qscriptvalue_cast<QString>(context->argument(0));
			QDir::addResourceSearchPath(arg0);
			return __e->undefinedValue();
		}
	}

	QtScriptUtils::badArgumentsException(context,
			"QDir::addResourceSearchPath");
	return __e->uncaughtException();
}

QScriptValue QtScriptQDir::current(QScriptContext *context, QScriptEngine* __e)
{
	if (!QtScriptUtils::checkArgumentCount(context, 0, 0))
	{
		return __e->uncaughtException();
	}

	switch (context->argumentCount())
	{
		case 0:
		{
			return __e->toScriptValue(QDir::current());
		}
	}

	QtScriptUtils::badArgumentsException(context,
			"QDir::current");
	return __e->uncaughtException();
}

QScriptValue QtScriptQDir::fromNativeSeparators(QScriptContext *context, QScriptEngine* __e)
{
	if (!QtScriptUtils::checkArgumentCount(context, 1, 1))
	{
		return __e->uncaughtException();
	}

	switch (context->argumentCount())
	{
		case 1:
		{
			auto arg0 = qscriptvalue_cast<QString>(context->argument(0));
			return __e->toScriptValue(QDir::fromNativeSeparators(arg0));
		}
	}

	QtScriptUtils::badArgumentsException(context,
			"QDir::fromNativeSeparators");
	return __e->uncaughtException();
}

QScriptValue QtScriptQDir::isRelativePath(QScriptContext *context, QScriptEngine* __e)
{
	if (!QtScriptUtils::checkArgumentCount(context, 1, 1))
	{
		return __e->uncaughtException();
	}

	switch (context->argumentCount())
	{
		case 1:
		{
			auto arg0 = qscriptvalue_cast<QString>(context->argument(0));
			return __e->toScriptValue(QDir::isRelativePath(arg0));
		}
	}

	QtScriptUtils::badArgumentsException(context,
			"QDir::isRelativePath");
	return __e->uncaughtException();
}

QScriptValue QtScriptQDir::match(QScriptContext *context, QScriptEngine* __e)
{
	if (!QtScriptUtils::checkArgumentCount(context, 2, 2))
	{
		return __e->uncaughtException();
	}

	switch (context->argumentCount())
	{
		case 2:
		{
			auto arg0 = qscriptvalue_cast<QStringList>(context->argument(0));
			auto arg1 = qscriptvalue_cast<QString>(context->argument(1));
			return __e->toScriptValue(QDir::match(arg0, arg1));
		}
	}

	QtScriptUtils::badArgumentsException(context,
			"QDir::match");
	return __e->uncaughtException();
}

QScriptValue QtScriptQDir::setSearchPaths(QScriptContext *context, QScriptEngine* __e)
{
	if (!QtScriptUtils::checkArgumentCount(context, 2, 2))
	{
		return __e->uncaughtException();
	}

	switch (context->argumentCount())
	{
		case 2:
		{
			auto arg0 = qscriptvalue_cast<QString>(context->argument(0));
			auto arg1 = qscriptvalue_cast<QStringList>(context->argument(1));
			QDir::setSearchPaths(arg0, arg1);
			return __e->undefinedValue();
		}
	}

	QtScriptUtils::badArgumentsException(context,
			"QDir::setSearchPaths");
	return __e->uncaughtException();
}

QScriptValue QtScriptQDir::drives(QScriptContext *context, QScriptEngine* __e)
{
	if (!QtScriptUtils::checkArgumentCount(context, 0, 0))
	{
		return __e->uncaughtException();
	}

	switch (context->argumentCount())
	{
		case 0:
		{
			return __e->toScriptValue(QDir::drives());
		}
	}

	QtScriptUtils::badArgumentsException(context,
			"QDir::drives");
	return __e->uncaughtException();
}

QScriptValue QtScriptQDir::addSearchPath(QScriptContext *context, QScriptEngine* __e)
{
	if (!QtScriptUtils::checkArgumentCount(context, 2, 2))
	{
		return __e->uncaughtException();
	}

	switch (context->argumentCount())
	{
		case 2:
		{
			auto arg0 = qscriptvalue_cast<QString>(context->argument(0));
			auto arg1 = qscriptvalue_cast<QString>(context->argument(1));
			QDir::addSearchPath(arg0, arg1);
			return __e->undefinedValue();
		}
	}

	QtScriptUtils::badArgumentsException(context,
			"QDir::addSearchPath");
	return __e->uncaughtException();
}

QScriptValue QtScriptQDir::temp(QScriptContext *context, QScriptEngine* __e)
{
	if (!QtScriptUtils::checkArgumentCount(context, 0, 0))
	{
		return __e->uncaughtException();
	}

	switch (context->argumentCount())
	{
		case 0:
		{
			return __e->toScriptValue(QDir::temp());
		}
	}

	QtScriptUtils::badArgumentsException(context,
			"QDir::temp");
	return __e->uncaughtException();
}

QScriptValue QtScriptQDir::rootPath(QScriptContext *context, QScriptEngine* __e)
{
	if (!QtScriptUtils::checkArgumentCount(context, 0, 0))
	{
		return __e->uncaughtException();
	}

	switch (context->argumentCount())
	{
		case 0:
		{
			return __e->toScriptValue(QDir::rootPath());
		}
	}

	QtScriptUtils::badArgumentsException(context,
			"QDir::rootPath");
	return __e->uncaughtException();
}

QScriptValue QtScriptQDir::nameFiltersFromString(QScriptContext *context, QScriptEngine* __e)
{
	if (!QtScriptUtils::checkArgumentCount(context, 1, 1))
	{
		return __e->uncaughtException();
	}

	switch (context->argumentCount())
	{
		case 1:
		{
			auto arg0 = qscriptvalue_cast<QString>(context->argument(0));
			return __e->toScriptValue(QDir::nameFiltersFromString(arg0));
		}
	}

	QtScriptUtils::badArgumentsException(context,
			"QDir::nameFiltersFromString");
	return __e->uncaughtException();
}

QScriptValue QtScriptQDir::separator(QScriptContext *context, QScriptEngine* __e)
{
	if (!QtScriptUtils::checkArgumentCount(context, 0, 0))
	{
		return __e->uncaughtException();
	}

	switch (context->argumentCount())
	{
		case 0:
		{
			return __e->toScriptValue(QDir::separator());
		}
	}

	QtScriptUtils::badArgumentsException(context,
			"QDir::separator");
	return __e->uncaughtException();
}

QScriptValue QtScriptQDir::root(QScriptContext *context, QScriptEngine* __e)
{
	if (!QtScriptUtils::checkArgumentCount(context, 0, 0))
	{
		return __e->uncaughtException();
	}

	switch (context->argumentCount())
	{
		case 0:
		{
			return __e->toScriptValue(QDir::root());
		}
	}

	QtScriptUtils::badArgumentsException(context,
			"QDir::root");
	return __e->uncaughtException();
}

int QtScriptQDir::constructorArgumentCountMin() const
{
	return 0;
}

int QtScriptQDir::constructorArgumentCountMax() const
{
	return 4;
}

bool QtScriptQDir::constructObject(QScriptContext *context, NativeObjectType &out)
{
	auto __e = context->engine();
	Q_UNUSED(__e);
	bool ok = false;
	switch (context->argumentCount())
	{
		case 0:
		{
			ok = true;
			break;
		}
		case 1:
		{
			auto arg0 = qscriptvalue_cast<QDir>(context->argument(0));
			out = QDir(arg0);
			ok = true;
			break;
		}
		case 2:
		{
			auto arg0 = qscriptvalue_cast<QString>(context->argument(0));
			auto arg1 = qscriptvalue_cast<QString>(context->argument(1));
			out = QDir(arg0, arg1);
			ok = true;
			break;
		}
		case 3:
		{
			auto arg0 = qscriptvalue_cast<QString>(context->argument(0));
			auto arg1 = qscriptvalue_cast<QString>(context->argument(1));
			auto tmp_2 = qscriptvalue_cast<int>(context->argument(2));
			auto arg2 = QFlags<QDir::SortFlag>(tmp_2);
			out = QDir(arg0, arg1, arg2);
			ok = true;
			break;
		}
		case 4:
		{
			auto arg0 = qscriptvalue_cast<QString>(context->argument(0));
			auto arg1 = qscriptvalue_cast<QString>(context->argument(1));
			auto tmp_2 = qscriptvalue_cast<int>(context->argument(2));
			auto arg2 = QFlags<QDir::SortFlag>(tmp_2);
			auto tmp_3 = qscriptvalue_cast<int>(context->argument(3));
			auto arg3 = QFlags<QDir::Filter>(tmp_3);
			out = QDir(arg0, arg1, arg2, arg3);
			ok = true;
			break;
		}
	}
	
	if (!ok)
	{
		QtScriptUtils::badArgumentsException(context,
			"QDir constructor");
	}
	return ok;
}

QtScriptQDirIterator::QtScriptQDirIterator(QScriptEngine *engine, const QByteArray &className)
	: QtScriptBaseClassPrototype<QDirIterator *, false>(engine, className)
{
}

QtScriptQDirIterator::QtScriptQDirIterator(QScriptEngine *engine)
	: QtScriptQDirIterator(engine, "DirIterator")
{
}

void QtScriptQDirIterator::Register(const QScriptValue &targetNamespace)
{
	auto engine = targetNamespace.engine();
	Q_ASSERT(engine);
	QScriptValue inherit;
	auto ctor = RegisterT<QDirIterator, QtScriptQDirIterator>(targetNamespace, inherit);
	Q_ASSERT(ctor.isFunction());
}

bool QtScriptQDirIterator::hasNext()
{
	auto __o = this->thiz<QDirIterator *>();
	if (__o)
	{
		return __o->hasNext();
	}
	return false;
}

QString QtScriptQDirIterator::filePath()
{
	auto __o = this->thiz<QDirIterator *>();
	if (__o)
	{
		return __o->filePath();
	}
	return QString();
}

QString QtScriptQDirIterator::fileName()
{
	auto __o = this->thiz<QDirIterator *>();
	if (__o)
	{
		return __o->fileName();
	}
	return QString();
}

QString QtScriptQDirIterator::path()
{
	auto __o = this->thiz<QDirIterator *>();
	if (__o)
	{
		return __o->path();
	}
	return QString();
}

QFileInfo QtScriptQDirIterator::fileInfo()
{
	auto __o = this->thiz<QDirIterator *>();
	if (__o)
	{
		return __o->fileInfo();
	}
	return QFileInfo();
}

QString QtScriptQDirIterator::next()
{
	auto __o = this->thiz<QDirIterator *>();
	if (__o)
	{
		return __o->next();
	}
	return QString();
}

int QtScriptQDirIterator::constructorArgumentCountMin() const
{
	return 1;
}

int QtScriptQDirIterator::constructorArgumentCountMax() const
{
	return 4;
}

bool QtScriptQDirIterator::constructObject(QScriptContext *context, NativeObjectType &out)
{
	auto __e = context->engine();
	Q_UNUSED(__e);
	bool ok = false;
	switch (context->argumentCount())
	{
		case 1:
		{
			auto arg0 = qscriptvalue_cast<QDir>(context->argument(0));
			out = new QDirIterator(arg0);
			ok = true;
			break;
		}
		case 2:
		{
			auto arg0 = qscriptvalue_cast<QDir>(context->argument(0));
			auto tmp_1 = qscriptvalue_cast<int>(context->argument(1));
			auto arg1 = QFlags<QDirIterator::IteratorFlag>(tmp_1);
			out = new QDirIterator(arg0, arg1);
			ok = true;
			break;
		}
		case 3:
		{
			auto arg0 = qscriptvalue_cast<QString>(context->argument(0));
			auto tmp_1 = qscriptvalue_cast<int>(context->argument(1));
			auto arg1 = QFlags<QDir::Filter>(tmp_1);
			auto tmp_2 = qscriptvalue_cast<int>(context->argument(2));
			auto arg2 = QFlags<QDirIterator::IteratorFlag>(tmp_2);
			out = new QDirIterator(arg0, arg1, arg2);
			ok = true;
			break;
		}
		case 4:
		{
			auto arg0 = qscriptvalue_cast<QString>(context->argument(0));
			auto arg1 = qscriptvalue_cast<QStringList>(context->argument(1));
			auto tmp_2 = qscriptvalue_cast<int>(context->argument(2));
			auto arg2 = QFlags<QDir::Filter>(tmp_2);
			auto tmp_3 = qscriptvalue_cast<int>(context->argument(3));
			auto arg3 = QFlags<QDirIterator::IteratorFlag>(tmp_3);
			out = new QDirIterator(arg0, arg1, arg2, arg3);
			ok = true;
			break;
		}
	}
	
	if (!ok)
	{
		QtScriptUtils::badArgumentsException(context,
			"QDirIterator constructor");
	}
	return ok;
}

QtScriptQEasingCurve::QtScriptQEasingCurve(QScriptEngine *engine, const QByteArray &className)
	: QtScriptBaseClassPrototype<QEasingCurve, false>(engine, className)
{
}

QtScriptQEasingCurve::QtScriptQEasingCurve(QScriptEngine *engine)
	: QtScriptQEasingCurve(engine, "EasingCurve")
{
}

void QtScriptQEasingCurve::Register(const QScriptValue &targetNamespace)
{
	auto engine = targetNamespace.engine();
	Q_ASSERT(engine);
	QScriptValue inherit;
	auto ctor = RegisterT<QEasingCurve, QtScriptQEasingCurve>(targetNamespace, inherit);
	Q_ASSERT(ctor.isFunction());
}

bool QtScriptQEasingCurve::notEquals(const QEasingCurve& other)
{
	auto __o = this->thiz<QEasingCurve *>();
	if (__o)
	{
		return __o->operator!=(other);
	}
	return false;
}

void QtScriptQEasingCurve::setPeriod(qreal period)
{
	auto __o = this->thiz<QEasingCurve *>();
	if (__o)
	{
		__o->setPeriod(period);
	}
}

void QtScriptQEasingCurve::set(const QEasingCurve& other)
{
	auto __o = this->thiz<QEasingCurve *>();
	if (__o)
	{
		__o->operator=(other);
	}
}

void QtScriptQEasingCurve::addTCBSegment(const QPointF& nextPoint, qreal t, qreal c, qreal b)
{
	auto __o = this->thiz<QEasingCurve *>();
	if (__o)
	{
		__o->addTCBSegment(nextPoint, t, c, b);
	}
}

void QtScriptQEasingCurve::addCubicBezierSegment(const QPointF& c1, const QPointF& c2, const QPointF& endPoint)
{
	auto __o = this->thiz<QEasingCurve *>();
	if (__o)
	{
		__o->addCubicBezierSegment(c1, c2, endPoint);
	}
}

qreal QtScriptQEasingCurve::overshoot()
{
	auto __o = this->thiz<QEasingCurve *>();
	if (__o)
	{
		return __o->overshoot();
	}
	return static_cast<qreal>(0);
}

bool QtScriptQEasingCurve::equals(const QEasingCurve& other)
{
	auto __o = this->thiz<QEasingCurve *>();
	if (__o)
	{
		return __o->operator==(other);
	}
	return false;
}

qreal QtScriptQEasingCurve::period()
{
	auto __o = this->thiz<QEasingCurve *>();
	if (__o)
	{
		return __o->period();
	}
	return static_cast<qreal>(0);
}

void QtScriptQEasingCurve::setType(int type)
{
	auto __o = this->thiz<QEasingCurve *>();
	if (__o)
	{
		__o->setType(QEasingCurve::Type(type));
	}
}

void QtScriptQEasingCurve::setAmplitude(qreal amplitude)
{
	auto __o = this->thiz<QEasingCurve *>();
	if (__o)
	{
		__o->setAmplitude(amplitude);
	}
}

qreal QtScriptQEasingCurve::valueForProgress(qreal progress)
{
	auto __o = this->thiz<QEasingCurve *>();
	if (__o)
	{
		return __o->valueForProgress(progress);
	}
	return static_cast<qreal>(0);
}

void QtScriptQEasingCurve::swap(QEasingCurve& other)
{
	auto __o = this->thiz<QEasingCurve *>();
	if (__o)
	{
		__o->swap(other);
	}
}

qreal QtScriptQEasingCurve::amplitude()
{
	auto __o = this->thiz<QEasingCurve *>();
	if (__o)
	{
		return __o->amplitude();
	}
	return static_cast<qreal>(0);
}

void QtScriptQEasingCurve::setOvershoot(qreal overshoot)
{
	auto __o = this->thiz<QEasingCurve *>();
	if (__o)
	{
		__o->setOvershoot(overshoot);
	}
}

int QtScriptQEasingCurve::type()
{
	auto __o = this->thiz<QEasingCurve *>();
	if (__o)
	{
		return int(__o->type());
	}
	return 0;
}

QVector<QPointF> QtScriptQEasingCurve::toCubicSpline()
{
	auto __o = this->thiz<QEasingCurve *>();
	if (__o)
	{
		return __o->toCubicSpline();
	}
	return QVector<QPointF>();
}

int QtScriptQEasingCurve::constructorArgumentCountMin() const
{
	return 0;
}

int QtScriptQEasingCurve::constructorArgumentCountMax() const
{
	return 1;
}

bool QtScriptQEasingCurve::constructObject(QScriptContext *context, NativeObjectType &out)
{
	auto __e = context->engine();
	Q_UNUSED(__e);
	bool ok = false;
	switch (context->argumentCount())
	{
		case 0:
		{
			ok = true;
			break;
		}
		case 1:
		{
			auto tmp_0 = qscriptvalue_cast<int>(context->argument(0));
			auto arg0 = QEasingCurve::Type(tmp_0);
			out = QEasingCurve(arg0);
			ok = true;
			break;
		}
	}
	
	if (!ok)
	{
		QtScriptUtils::badArgumentsException(context,
			"QEasingCurve constructor");
	}
	return ok;
}

QtScriptQLine::QtScriptQLine(QScriptEngine *engine, const QByteArray &className)
	: QtScriptBaseClassPrototype<QLine, false>(engine, className)
{
}

QtScriptQLine::QtScriptQLine(QScriptEngine *engine)
	: QtScriptQLine(engine, "Line")
{
}

void QtScriptQLine::Register(const QScriptValue &targetNamespace)
{
	auto engine = targetNamespace.engine();
	Q_ASSERT(engine);
	QScriptValue inherit;
	auto ctor = RegisterT<QLine, QtScriptQLine>(targetNamespace, inherit);
	Q_ASSERT(ctor.isFunction());
}

QPoint QtScriptQLine::p2()
{
	auto __o = this->thiz<QLine *>();
	if (__o)
	{
		return __o->p2();
	}
	return QPoint();
}

bool QtScriptQLine::notEquals(const QLine& d)
{
	auto __o = this->thiz<QLine *>();
	if (__o)
	{
		return __o->operator!=(d);
	}
	return false;
}

QPoint QtScriptQLine::p1()
{
	auto __o = this->thiz<QLine *>();
	if (__o)
	{
		return __o->p1();
	}
	return QPoint();
}

void QtScriptQLine::setP1(const QPoint& p1)
{
	auto __o = this->thiz<QLine *>();
	if (__o)
	{
		__o->setP1(p1);
	}
}

QPoint QtScriptQLine::center()
{
	auto __o = this->thiz<QLine *>();
	if (__o)
	{
		return __o->center();
	}
	return QPoint();
}

void QtScriptQLine::setP2(const QPoint& p2)
{
	auto __o = this->thiz<QLine *>();
	if (__o)
	{
		__o->setP2(p2);
	}
}

void QtScriptQLine::translate(const QPoint& p)
{
	auto __o = this->thiz<QLine *>();
	if (__o)
	{
		__o->translate(p);
	}
}

void QtScriptQLine::translate(int dx, int dy)
{
	auto __o = this->thiz<QLine *>();
	if (__o)
	{
		__o->translate(dx, dy);
	}
}

int QtScriptQLine::y2()
{
	auto __o = this->thiz<QLine *>();
	if (__o)
	{
		return __o->y2();
	}
	return 0;
}

QLine QtScriptQLine::translated(const QPoint& p)
{
	auto __o = this->thiz<QLine *>();
	if (__o)
	{
		return __o->translated(p);
	}
	return QLine();
}

QLine QtScriptQLine::translated(int dx, int dy)
{
	auto __o = this->thiz<QLine *>();
	if (__o)
	{
		return __o->translated(dx, dy);
	}
	return QLine();
}

bool QtScriptQLine::equals(const QLine& d)
{
	auto __o = this->thiz<QLine *>();
	if (__o)
	{
		return __o->operator==(d);
	}
	return false;
}

int QtScriptQLine::x2()
{
	auto __o = this->thiz<QLine *>();
	if (__o)
	{
		return __o->x2();
	}
	return 0;
}

bool QtScriptQLine::isNull()
{
	auto __o = this->thiz<QLine *>();
	if (__o)
	{
		return __o->isNull();
	}
	return false;
}

int QtScriptQLine::dx()
{
	auto __o = this->thiz<QLine *>();
	if (__o)
	{
		return __o->dx();
	}
	return 0;
}

int QtScriptQLine::dy()
{
	auto __o = this->thiz<QLine *>();
	if (__o)
	{
		return __o->dy();
	}
	return 0;
}

int QtScriptQLine::y1()
{
	auto __o = this->thiz<QLine *>();
	if (__o)
	{
		return __o->y1();
	}
	return 0;
}

void QtScriptQLine::setLine(int x1, int y1, int x2, int y2)
{
	auto __o = this->thiz<QLine *>();
	if (__o)
	{
		__o->setLine(x1, y1, x2, y2);
	}
}

int QtScriptQLine::x1()
{
	auto __o = this->thiz<QLine *>();
	if (__o)
	{
		return __o->x1();
	}
	return 0;
}

void QtScriptQLine::setPoints(const QPoint& p1, const QPoint& p2)
{
	auto __o = this->thiz<QLine *>();
	if (__o)
	{
		__o->setPoints(p1, p2);
	}
}

int QtScriptQLine::constructorArgumentCountMin() const
{
	return 0;
}

int QtScriptQLine::constructorArgumentCountMax() const
{
	return 4;
}

bool QtScriptQLine::constructObject(QScriptContext *context, NativeObjectType &out)
{
	auto __e = context->engine();
	Q_UNUSED(__e);
	bool ok = false;
	switch (context->argumentCount())
	{
		case 0:
		{
			ok = true;
			break;
		}
		case 1:
		{
			break;
		}
		case 2:
		{
			auto arg0 = qscriptvalue_cast<QPoint>(context->argument(0));
			auto arg1 = qscriptvalue_cast<QPoint>(context->argument(1));
			out = QLine(arg0, arg1);
			ok = true;
			break;
		}
		case 3:
		{
			break;
		}
		case 4:
		{
			auto arg0 = qscriptvalue_cast<int>(context->argument(0));
			auto arg1 = qscriptvalue_cast<int>(context->argument(1));
			auto arg2 = qscriptvalue_cast<int>(context->argument(2));
			auto arg3 = qscriptvalue_cast<int>(context->argument(3));
			out = QLine(arg0, arg1, arg2, arg3);
			ok = true;
			break;
		}
	}
	
	if (!ok)
	{
		QtScriptUtils::badArgumentsException(context,
			"QLine constructor");
	}
	return ok;
}

QtScriptQLineF::QtScriptQLineF(QScriptEngine *engine, const QByteArray &className)
	: QtScriptBaseClassPrototype<QLineF, false>(engine, className)
{
}

QtScriptQLineF::QtScriptQLineF(QScriptEngine *engine)
	: QtScriptQLineF(engine, "LineF")
{
}

void QtScriptQLineF::Register(const QScriptValue &targetNamespace)
{
	auto engine = targetNamespace.engine();
	Q_ASSERT(engine);
	QScriptValue inherit;
	auto ctor = RegisterT<QLineF, QtScriptQLineF>(targetNamespace, inherit);
	Q_ASSERT(ctor.isFunction());
	ctor.setProperty("fromPolar", engine->newFunction(
		static_cast<QScriptValue (*)(QScriptContext *, QScriptEngine *)>(
			&QtScriptQLineF::fromPolar)),
			QScriptValue::ReadOnly | QScriptValue::Undeletable);
}

bool QtScriptQLineF::notEquals(const QLineF& d)
{
	auto __o = this->thiz<QLineF *>();
	if (__o)
	{
		return __o->operator!=(d);
	}
	return false;
}

void QtScriptQLineF::setAngle(qreal angle)
{
	auto __o = this->thiz<QLineF *>();
	if (__o)
	{
		__o->setAngle(angle);
	}
}

bool QtScriptQLineF::equals(const QLineF& d)
{
	auto __o = this->thiz<QLineF *>();
	if (__o)
	{
		return __o->operator==(d);
	}
	return false;
}

qreal QtScriptQLineF::y1()
{
	auto __o = this->thiz<QLineF *>();
	if (__o)
	{
		return __o->y1();
	}
	return static_cast<qreal>(0);
}

qreal QtScriptQLineF::y2()
{
	auto __o = this->thiz<QLineF *>();
	if (__o)
	{
		return __o->y2();
	}
	return static_cast<qreal>(0);
}

QLineF QtScriptQLineF::normalVector()
{
	auto __o = this->thiz<QLineF *>();
	if (__o)
	{
		return __o->normalVector();
	}
	return QLineF();
}

qreal QtScriptQLineF::angle()
{
	auto __o = this->thiz<QLineF *>();
	if (__o)
	{
		return __o->angle();
	}
	return static_cast<qreal>(0);
}

qreal QtScriptQLineF::angle(const QLineF& l)
{
	auto __o = this->thiz<QLineF *>();
	if (__o)
	{
		return __o->angle(l);
	}
	return static_cast<qreal>(0);
}

int QtScriptQLineF::intersect(const QLineF& l, QPointF* intersectionPoint)
{
	auto __o = this->thiz<QLineF *>();
	if (__o)
	{
		return int(__o->intersect(l, intersectionPoint));
	}
	return 0;
}

void QtScriptQLineF::setLine(qreal x1, qreal y1, qreal x2, qreal y2)
{
	auto __o = this->thiz<QLineF *>();
	if (__o)
	{
		__o->setLine(x1, y1, x2, y2);
	}
}

void QtScriptQLineF::translate(const QPointF& p)
{
	auto __o = this->thiz<QLineF *>();
	if (__o)
	{
		__o->translate(p);
	}
}

void QtScriptQLineF::translate(qreal dx, qreal dy)
{
	auto __o = this->thiz<QLineF *>();
	if (__o)
	{
		__o->translate(dx, dy);
	}
}

void QtScriptQLineF::setP1(const QPointF& p1)
{
	auto __o = this->thiz<QLineF *>();
	if (__o)
	{
		__o->setP1(p1);
	}
}

void QtScriptQLineF::setP2(const QPointF& p2)
{
	auto __o = this->thiz<QLineF *>();
	if (__o)
	{
		__o->setP2(p2);
	}
}

qreal QtScriptQLineF::angleTo(const QLineF& l)
{
	auto __o = this->thiz<QLineF *>();
	if (__o)
	{
		return __o->angleTo(l);
	}
	return static_cast<qreal>(0);
}

QLineF QtScriptQLineF::unitVector()
{
	auto __o = this->thiz<QLineF *>();
	if (__o)
	{
		return __o->unitVector();
	}
	return QLineF();
}

qreal QtScriptQLineF::dx()
{
	auto __o = this->thiz<QLineF *>();
	if (__o)
	{
		return __o->dx();
	}
	return static_cast<qreal>(0);
}

qreal QtScriptQLineF::dy()
{
	auto __o = this->thiz<QLineF *>();
	if (__o)
	{
		return __o->dy();
	}
	return static_cast<qreal>(0);
}

qreal QtScriptQLineF::x2()
{
	auto __o = this->thiz<QLineF *>();
	if (__o)
	{
		return __o->x2();
	}
	return static_cast<qreal>(0);
}

qreal QtScriptQLineF::x1()
{
	auto __o = this->thiz<QLineF *>();
	if (__o)
	{
		return __o->x1();
	}
	return static_cast<qreal>(0);
}

void QtScriptQLineF::setPoints(const QPointF& p1, const QPointF& p2)
{
	auto __o = this->thiz<QLineF *>();
	if (__o)
	{
		__o->setPoints(p1, p2);
	}
}

void QtScriptQLineF::setLength(qreal len)
{
	auto __o = this->thiz<QLineF *>();
	if (__o)
	{
		__o->setLength(len);
	}
}

QPointF QtScriptQLineF::p2()
{
	auto __o = this->thiz<QLineF *>();
	if (__o)
	{
		return __o->p2();
	}
	return QPointF();
}

QPointF QtScriptQLineF::p1()
{
	auto __o = this->thiz<QLineF *>();
	if (__o)
	{
		return __o->p1();
	}
	return QPointF();
}

QPointF QtScriptQLineF::center()
{
	auto __o = this->thiz<QLineF *>();
	if (__o)
	{
		return __o->center();
	}
	return QPointF();
}

QPointF QtScriptQLineF::pointAt(qreal t)
{
	auto __o = this->thiz<QLineF *>();
	if (__o)
	{
		return __o->pointAt(t);
	}
	return QPointF();
}

QLine QtScriptQLineF::toLine()
{
	auto __o = this->thiz<QLineF *>();
	if (__o)
	{
		return __o->toLine();
	}
	return QLine();
}

bool QtScriptQLineF::isNull()
{
	auto __o = this->thiz<QLineF *>();
	if (__o)
	{
		return __o->isNull();
	}
	return false;
}

qreal QtScriptQLineF::length()
{
	auto __o = this->thiz<QLineF *>();
	if (__o)
	{
		return __o->length();
	}
	return static_cast<qreal>(0);
}

QLineF QtScriptQLineF::translated(const QPointF& p)
{
	auto __o = this->thiz<QLineF *>();
	if (__o)
	{
		return __o->translated(p);
	}
	return QLineF();
}

QLineF QtScriptQLineF::translated(qreal dx, qreal dy)
{
	auto __o = this->thiz<QLineF *>();
	if (__o)
	{
		return __o->translated(dx, dy);
	}
	return QLineF();
}

QScriptValue QtScriptQLineF::fromPolar(QScriptContext *context, QScriptEngine* __e)
{
	if (!QtScriptUtils::checkArgumentCount(context, 2, 2))
	{
		return __e->uncaughtException();
	}

	switch (context->argumentCount())
	{
		case 2:
		{
			auto arg0 = qscriptvalue_cast<qreal>(context->argument(0));
			auto arg1 = qscriptvalue_cast<qreal>(context->argument(1));
			return __e->toScriptValue(QLineF::fromPolar(arg0, arg1));
		}
	}

	QtScriptUtils::badArgumentsException(context,
			"QLineF::fromPolar");
	return __e->uncaughtException();
}

int QtScriptQLineF::constructorArgumentCountMin() const
{
	return 0;
}

int QtScriptQLineF::constructorArgumentCountMax() const
{
	return 4;
}

bool QtScriptQLineF::constructObject(QScriptContext *context, NativeObjectType &out)
{
	auto __e = context->engine();
	Q_UNUSED(__e);
	bool ok = false;
	switch (context->argumentCount())
	{
		case 0:
		{
			ok = true;
			break;
		}
		case 1:
		{
			auto arg0 = qscriptvalue_cast<QLine>(context->argument(0));
			out = QLineF(arg0);
			ok = true;
			break;
		}
		case 2:
		{
			auto arg0 = qscriptvalue_cast<QPointF>(context->argument(0));
			auto arg1 = qscriptvalue_cast<QPointF>(context->argument(1));
			out = QLineF(arg0, arg1);
			ok = true;
			break;
		}
		case 3:
		{
			break;
		}
		case 4:
		{
			auto arg0 = qscriptvalue_cast<qreal>(context->argument(0));
			auto arg1 = qscriptvalue_cast<qreal>(context->argument(1));
			auto arg2 = qscriptvalue_cast<qreal>(context->argument(2));
			auto arg3 = qscriptvalue_cast<qreal>(context->argument(3));
			out = QLineF(arg0, arg1, arg2, arg3);
			ok = true;
			break;
		}
	}
	
	if (!ok)
	{
		QtScriptUtils::badArgumentsException(context,
			"QLineF constructor");
	}
	return ok;
}

QtScriptQMargins::QtScriptQMargins(QScriptEngine *engine, const QByteArray &className)
	: QtScriptBaseClassPrototype<QMargins, false>(engine, className)
{
}

QtScriptQMargins::QtScriptQMargins(QScriptEngine *engine)
	: QtScriptQMargins(engine, "Margins")
{
}

void QtScriptQMargins::Register(const QScriptValue &targetNamespace)
{
	auto engine = targetNamespace.engine();
	Q_ASSERT(engine);
	QScriptValue inherit;
	auto ctor = RegisterT<QMargins, QtScriptQMargins>(targetNamespace, inherit);
	Q_ASSERT(ctor.isFunction());
}

void QtScriptQMargins::dec(const QMargins& margins)
{
	auto __o = this->thiz<QMargins *>();
	if (__o)
	{
		__o->operator-=(margins);
	}
}

int QtScriptQMargins::right()
{
	auto __o = this->thiz<QMargins *>();
	if (__o)
	{
		return __o->right();
	}
	return 0;
}

void QtScriptQMargins::multiplyBy(int arg0)
{
	auto __o = this->thiz<QMargins *>();
	if (__o)
	{
		__o->operator*=(arg0);
	}
}

int QtScriptQMargins::bottom()
{
	auto __o = this->thiz<QMargins *>();
	if (__o)
	{
		return __o->bottom();
	}
	return 0;
}

void QtScriptQMargins::setBottom(int bottom)
{
	auto __o = this->thiz<QMargins *>();
	if (__o)
	{
		__o->setBottom(bottom);
	}
}

int QtScriptQMargins::top()
{
	auto __o = this->thiz<QMargins *>();
	if (__o)
	{
		return __o->top();
	}
	return 0;
}

void QtScriptQMargins::setRight(int right)
{
	auto __o = this->thiz<QMargins *>();
	if (__o)
	{
		__o->setRight(right);
	}
}

void QtScriptQMargins::setTop(int top)
{
	auto __o = this->thiz<QMargins *>();
	if (__o)
	{
		__o->setTop(top);
	}
}

void QtScriptQMargins::divideBy(int arg0)
{
	auto __o = this->thiz<QMargins *>();
	if (__o)
	{
		__o->operator/=(arg0);
	}
}

bool QtScriptQMargins::isNull()
{
	auto __o = this->thiz<QMargins *>();
	if (__o)
	{
		return __o->isNull();
	}
	return false;
}

void QtScriptQMargins::inc(const QMargins& margins)
{
	auto __o = this->thiz<QMargins *>();
	if (__o)
	{
		__o->operator+=(margins);
	}
}

void QtScriptQMargins::setLeft(int left)
{
	auto __o = this->thiz<QMargins *>();
	if (__o)
	{
		__o->setLeft(left);
	}
}

int QtScriptQMargins::left()
{
	auto __o = this->thiz<QMargins *>();
	if (__o)
	{
		return __o->left();
	}
	return 0;
}

int QtScriptQMargins::constructorArgumentCountMin() const
{
	return 0;
}

int QtScriptQMargins::constructorArgumentCountMax() const
{
	return 4;
}

bool QtScriptQMargins::constructObject(QScriptContext *context, NativeObjectType &out)
{
	auto __e = context->engine();
	Q_UNUSED(__e);
	bool ok = false;
	switch (context->argumentCount())
	{
		case 0:
		{
			ok = true;
			break;
		}
		case 1:
		{
			break;
		}
		case 2:
		{
			break;
		}
		case 3:
		{
			break;
		}
		case 4:
		{
			auto arg0 = qscriptvalue_cast<int>(context->argument(0));
			auto arg1 = qscriptvalue_cast<int>(context->argument(1));
			auto arg2 = qscriptvalue_cast<int>(context->argument(2));
			auto arg3 = qscriptvalue_cast<int>(context->argument(3));
			out = QMargins(arg0, arg1, arg2, arg3);
			ok = true;
			break;
		}
	}
	
	if (!ok)
	{
		QtScriptUtils::badArgumentsException(context,
			"QMargins constructor");
	}
	return ok;
}

QtScriptQMarginsF::QtScriptQMarginsF(QScriptEngine *engine, const QByteArray &className)
	: QtScriptBaseClassPrototype<QMarginsF, false>(engine, className)
{
}

QtScriptQMarginsF::QtScriptQMarginsF(QScriptEngine *engine)
	: QtScriptQMarginsF(engine, "MarginsF")
{
}

void QtScriptQMarginsF::Register(const QScriptValue &targetNamespace)
{
	auto engine = targetNamespace.engine();
	Q_ASSERT(engine);
	QScriptValue inherit;
	auto ctor = RegisterT<QMarginsF, QtScriptQMarginsF>(targetNamespace, inherit);
	Q_ASSERT(ctor.isFunction());
}

void QtScriptQMarginsF::dec(const QMarginsF& margins)
{
	auto __o = this->thiz<QMarginsF *>();
	if (__o)
	{
		__o->operator-=(margins);
	}
}

qreal QtScriptQMarginsF::right()
{
	auto __o = this->thiz<QMarginsF *>();
	if (__o)
	{
		return __o->right();
	}
	return static_cast<qreal>(0);
}

void QtScriptQMarginsF::multiplyBy(qreal factor)
{
	auto __o = this->thiz<QMarginsF *>();
	if (__o)
	{
		__o->operator*=(factor);
	}
}

qreal QtScriptQMarginsF::bottom()
{
	auto __o = this->thiz<QMarginsF *>();
	if (__o)
	{
		return __o->bottom();
	}
	return static_cast<qreal>(0);
}

void QtScriptQMarginsF::setBottom(qreal bottom)
{
	auto __o = this->thiz<QMarginsF *>();
	if (__o)
	{
		__o->setBottom(bottom);
	}
}

qreal QtScriptQMarginsF::top()
{
	auto __o = this->thiz<QMarginsF *>();
	if (__o)
	{
		return __o->top();
	}
	return static_cast<qreal>(0);
}

QMargins QtScriptQMarginsF::toMargins()
{
	auto __o = this->thiz<QMarginsF *>();
	if (__o)
	{
		return __o->toMargins();
	}
	return QMargins();
}

void QtScriptQMarginsF::setRight(qreal right)
{
	auto __o = this->thiz<QMarginsF *>();
	if (__o)
	{
		__o->setRight(right);
	}
}

void QtScriptQMarginsF::setTop(qreal top)
{
	auto __o = this->thiz<QMarginsF *>();
	if (__o)
	{
		__o->setTop(top);
	}
}

void QtScriptQMarginsF::divideBy(qreal divisor)
{
	auto __o = this->thiz<QMarginsF *>();
	if (__o)
	{
		__o->operator/=(divisor);
	}
}

bool QtScriptQMarginsF::isNull()
{
	auto __o = this->thiz<QMarginsF *>();
	if (__o)
	{
		return __o->isNull();
	}
	return false;
}

void QtScriptQMarginsF::inc(const QMarginsF& margins)
{
	auto __o = this->thiz<QMarginsF *>();
	if (__o)
	{
		__o->operator+=(margins);
	}
}

void QtScriptQMarginsF::setLeft(qreal left)
{
	auto __o = this->thiz<QMarginsF *>();
	if (__o)
	{
		__o->setLeft(left);
	}
}

qreal QtScriptQMarginsF::left()
{
	auto __o = this->thiz<QMarginsF *>();
	if (__o)
	{
		return __o->left();
	}
	return static_cast<qreal>(0);
}

int QtScriptQMarginsF::constructorArgumentCountMin() const
{
	return 0;
}

int QtScriptQMarginsF::constructorArgumentCountMax() const
{
	return 4;
}

bool QtScriptQMarginsF::constructObject(QScriptContext *context, NativeObjectType &out)
{
	auto __e = context->engine();
	Q_UNUSED(__e);
	bool ok = false;
	switch (context->argumentCount())
	{
		case 0:
		{
			ok = true;
			break;
		}
		case 1:
		{
			auto arg0 = qscriptvalue_cast<QMargins>(context->argument(0));
			out = QMarginsF(arg0);
			ok = true;
			break;
		}
		case 2:
		{
			break;
		}
		case 3:
		{
			break;
		}
		case 4:
		{
			auto arg0 = qscriptvalue_cast<qreal>(context->argument(0));
			auto arg1 = qscriptvalue_cast<qreal>(context->argument(1));
			auto arg2 = qscriptvalue_cast<qreal>(context->argument(2));
			auto arg3 = qscriptvalue_cast<qreal>(context->argument(3));
			out = QMarginsF(arg0, arg1, arg2, arg3);
			ok = true;
			break;
		}
	}
	
	if (!ok)
	{
		QtScriptUtils::badArgumentsException(context,
			"QMarginsF constructor");
	}
	return ok;
}

QtScriptQParallelAnimationGroup::QtScriptQParallelAnimationGroup(QScriptEngine *engine, const QByteArray &className)
	: QtScriptQAnimationGroup(engine, className)
{
}

QtScriptQParallelAnimationGroup::QtScriptQParallelAnimationGroup(QScriptEngine *engine)
	: QtScriptQParallelAnimationGroup(engine, "ParallelAnimationGroup")
{
}

void QtScriptQParallelAnimationGroup::Register(const QScriptValue &targetNamespace)
{
	auto engine = targetNamespace.engine();
	Q_ASSERT(engine);
	auto inherit = engine->defaultPrototype(qMetaTypeId<QAnimationGroup *>());
	auto ctor = RegisterT<QParallelAnimationGroup, QtScriptQParallelAnimationGroup>(targetNamespace, inherit);
	Q_ASSERT(ctor.isFunction());
}

int QtScriptQParallelAnimationGroup::duration()
{
	auto __o = this->thiz<QParallelAnimationGroup *>();
	if (__o)
	{
		return __o->duration();
	}
	return 0;
}

int QtScriptQParallelAnimationGroup::constructorArgumentCountMin() const
{
	return 0;
}

int QtScriptQParallelAnimationGroup::constructorArgumentCountMax() const
{
	return 1;
}

bool QtScriptQParallelAnimationGroup::constructObject(QScriptContext *context, NativeObjectType &out)
{
	auto __e = context->engine();
	Q_UNUSED(__e);
	bool ok = false;
	switch (context->argumentCount())
	{
		case 0:
		{
			out = new QParallelAnimationGroup();
			ok = true;
			break;
		}
		case 1:
		{
			auto arg0 = qscriptvalue_cast<QObject*>(context->argument(0));
			out = new QParallelAnimationGroup(arg0);
			ok = true;
			break;
		}
	}
	
	if (!ok)
	{
		QtScriptUtils::badArgumentsException(context,
			"QParallelAnimationGroup constructor");
	}
	return ok;
}

QtScriptQPauseAnimation::QtScriptQPauseAnimation(QScriptEngine *engine, const QByteArray &className)
	: QtScriptQAbstractAnimation(engine, className)
{
}

QtScriptQPauseAnimation::QtScriptQPauseAnimation(QScriptEngine *engine)
	: QtScriptQPauseAnimation(engine, "PauseAnimation")
{
}

void QtScriptQPauseAnimation::Register(const QScriptValue &targetNamespace)
{
	auto engine = targetNamespace.engine();
	Q_ASSERT(engine);
	auto inherit = engine->defaultPrototype(qMetaTypeId<QAbstractAnimation *>());
	auto ctor = RegisterT<QPauseAnimation, QtScriptQPauseAnimation>(targetNamespace, inherit);
	Q_ASSERT(ctor.isFunction());
}

int QtScriptQPauseAnimation::duration()
{
	auto __o = this->thiz<QPauseAnimation *>();
	if (__o)
	{
		return __o->duration();
	}
	return 0;
}

void QtScriptQPauseAnimation::setDuration(int msecs)
{
	auto __o = this->thiz<QPauseAnimation *>();
	if (__o)
	{
		__o->setDuration(msecs);
	}
}

int QtScriptQPauseAnimation::constructorArgumentCountMin() const
{
	return 0;
}

int QtScriptQPauseAnimation::constructorArgumentCountMax() const
{
	return 2;
}

bool QtScriptQPauseAnimation::constructObject(QScriptContext *context, NativeObjectType &out)
{
	auto __e = context->engine();
	Q_UNUSED(__e);
	bool ok = false;
	switch (context->argumentCount())
	{
		case 0:
		{
			out = new QPauseAnimation();
			ok = true;
			break;
		}
		case 1:
		{
			auto arg0 = qscriptvalue_cast<QObject*>(context->argument(0));
			out = new QPauseAnimation(arg0);
			ok = true;
			break;
		}
		case 2:
		{
			auto arg0 = qscriptvalue_cast<int>(context->argument(0));
			auto arg1 = qscriptvalue_cast<QObject*>(context->argument(1));
			out = new QPauseAnimation(arg0, arg1);
			ok = true;
			break;
		}
	}
	
	if (!ok)
	{
		QtScriptUtils::badArgumentsException(context,
			"QPauseAnimation constructor");
	}
	return ok;
}

QtScriptQVariantAnimation::QtScriptQVariantAnimation(QScriptEngine *engine, const QByteArray &className)
	: QtScriptQAbstractAnimation(engine, className)
{
}

QtScriptQVariantAnimation::QtScriptQVariantAnimation(QScriptEngine *engine)
	: QtScriptQVariantAnimation(engine, "VariantAnimation")
{
}

void QtScriptQVariantAnimation::Register(const QScriptValue &targetNamespace)
{
	auto engine = targetNamespace.engine();
	Q_ASSERT(engine);
	auto inherit = engine->defaultPrototype(qMetaTypeId<QAbstractAnimation *>());
	auto ctor = RegisterT<QVariantAnimation, QtScriptQVariantAnimation>(targetNamespace, inherit);
	Q_ASSERT(ctor.isFunction());
}

QVariant QtScriptQVariantAnimation::keyValueAt(qreal step)
{
	auto __o = this->thiz<QVariantAnimation *>();
	if (__o)
	{
		return __o->keyValueAt(step);
	}
	return QVariant();
}

QVariant QtScriptQVariantAnimation::currentValue()
{
	auto __o = this->thiz<QVariantAnimation *>();
	if (__o)
	{
		return __o->currentValue();
	}
	return QVariant();
}

void QtScriptQVariantAnimation::setKeyValueAt(qreal step, const QVariant& value)
{
	auto __o = this->thiz<QVariantAnimation *>();
	if (__o)
	{
		__o->setKeyValueAt(step, value);
	}
}

void QtScriptQVariantAnimation::setEasingCurve(const QEasingCurve& easing)
{
	auto __o = this->thiz<QVariantAnimation *>();
	if (__o)
	{
		__o->setEasingCurve(easing);
	}
}

QEasingCurve QtScriptQVariantAnimation::easingCurve()
{
	auto __o = this->thiz<QVariantAnimation *>();
	if (__o)
	{
		return __o->easingCurve();
	}
	return QEasingCurve();
}

void QtScriptQVariantAnimation::setEndValue(const QVariant& value)
{
	auto __o = this->thiz<QVariantAnimation *>();
	if (__o)
	{
		__o->setEndValue(value);
	}
}

QVariant QtScriptQVariantAnimation::endValue()
{
	auto __o = this->thiz<QVariantAnimation *>();
	if (__o)
	{
		return __o->endValue();
	}
	return QVariant();
}

int QtScriptQVariantAnimation::duration()
{
	auto __o = this->thiz<QVariantAnimation *>();
	if (__o)
	{
		return __o->duration();
	}
	return 0;
}

void QtScriptQVariantAnimation::setStartValue(const QVariant& value)
{
	auto __o = this->thiz<QVariantAnimation *>();
	if (__o)
	{
		__o->setStartValue(value);
	}
}

void QtScriptQVariantAnimation::setDuration(int msecs)
{
	auto __o = this->thiz<QVariantAnimation *>();
	if (__o)
	{
		__o->setDuration(msecs);
	}
}

QVariant QtScriptQVariantAnimation::startValue()
{
	auto __o = this->thiz<QVariantAnimation *>();
	if (__o)
	{
		return __o->startValue();
	}
	return QVariant();
}

int QtScriptQVariantAnimation::constructorArgumentCountMin() const
{
	return 0;
}

int QtScriptQVariantAnimation::constructorArgumentCountMax() const
{
	return 1;
}

bool QtScriptQVariantAnimation::constructObject(QScriptContext *context, NativeObjectType &out)
{
	auto __e = context->engine();
	Q_UNUSED(__e);
	bool ok = false;
	switch (context->argumentCount())
	{
		case 0:
		{
			out = new QVariantAnimation();
			ok = true;
			break;
		}
		case 1:
		{
			auto arg0 = qscriptvalue_cast<QObject*>(context->argument(0));
			out = new QVariantAnimation(arg0);
			ok = true;
			break;
		}
	}
	
	if (!ok)
	{
		QtScriptUtils::badArgumentsException(context,
			"QVariantAnimation constructor");
	}
	return ok;
}

QtScriptQPropertyAnimation::QtScriptQPropertyAnimation(QScriptEngine *engine, const QByteArray &className)
	: QtScriptQVariantAnimation(engine, className)
{
}

QtScriptQPropertyAnimation::QtScriptQPropertyAnimation(QScriptEngine *engine)
	: QtScriptQPropertyAnimation(engine, "PropertyAnimation")
{
}

void QtScriptQPropertyAnimation::Register(const QScriptValue &targetNamespace)
{
	auto engine = targetNamespace.engine();
	Q_ASSERT(engine);
	auto inherit = engine->defaultPrototype(qMetaTypeId<QVariantAnimation *>());
	auto ctor = RegisterT<QPropertyAnimation, QtScriptQPropertyAnimation>(targetNamespace, inherit);
	Q_ASSERT(ctor.isFunction());
}

void QtScriptQPropertyAnimation::setPropertyName(const QByteArray& propertyName)
{
	auto __o = this->thiz<QPropertyAnimation *>();
	if (__o)
	{
		__o->setPropertyName(propertyName);
	}
}

QByteArray QtScriptQPropertyAnimation::propertyName()
{
	auto __o = this->thiz<QPropertyAnimation *>();
	if (__o)
	{
		return __o->propertyName();
	}
	return QByteArray();
}

void QtScriptQPropertyAnimation::setTargetObject(QObject* target)
{
	auto __o = this->thiz<QPropertyAnimation *>();
	if (__o)
	{
		__o->setTargetObject(target);
	}
}

QObject* QtScriptQPropertyAnimation::targetObject()
{
	auto __o = this->thiz<QPropertyAnimation *>();
	if (__o)
	{
		return __o->targetObject();
	}
	return nullptr;
}

int QtScriptQPropertyAnimation::constructorArgumentCountMin() const
{
	return 0;
}

int QtScriptQPropertyAnimation::constructorArgumentCountMax() const
{
	return 3;
}

bool QtScriptQPropertyAnimation::constructObject(QScriptContext *context, NativeObjectType &out)
{
	auto __e = context->engine();
	Q_UNUSED(__e);
	bool ok = false;
	switch (context->argumentCount())
	{
		case 0:
		{
			out = new QPropertyAnimation();
			ok = true;
			break;
		}
		case 1:
		{
			auto arg0 = qscriptvalue_cast<QObject*>(context->argument(0));
			out = new QPropertyAnimation(arg0);
			ok = true;
			break;
		}
		case 2:
		{
			auto arg0 = qscriptvalue_cast<QObject*>(context->argument(0));
			auto arg1 = qscriptvalue_cast<QByteArray>(context->argument(1));
			out = new QPropertyAnimation(arg0, arg1);
			ok = true;
			break;
		}
		case 3:
		{
			auto arg0 = qscriptvalue_cast<QObject*>(context->argument(0));
			auto arg1 = qscriptvalue_cast<QByteArray>(context->argument(1));
			auto arg2 = qscriptvalue_cast<QObject*>(context->argument(2));
			out = new QPropertyAnimation(arg0, arg1, arg2);
			ok = true;
			break;
		}
	}
	
	if (!ok)
	{
		QtScriptUtils::badArgumentsException(context,
			"QPropertyAnimation constructor");
	}
	return ok;
}

QtScriptQSize::QtScriptQSize(QScriptEngine *engine, const QByteArray &className)
	: QtScriptBaseClassPrototype<QSize, false>(engine, className)
{
}

QtScriptQSize::QtScriptQSize(QScriptEngine *engine)
	: QtScriptQSize(engine, "Size")
{
}

void QtScriptQSize::Register(const QScriptValue &targetNamespace)
{
	auto engine = targetNamespace.engine();
	Q_ASSERT(engine);
	QScriptValue inherit;
	auto ctor = RegisterT<QSize, QtScriptQSize>(targetNamespace, inherit);
	Q_ASSERT(ctor.isFunction());
}

void QtScriptQSize::setHeight(int h)
{
	auto __o = this->thiz<QSize *>();
	if (__o)
	{
		__o->setHeight(h);
	}
}

QSize QtScriptQSize::transposed()
{
	auto __o = this->thiz<QSize *>();
	if (__o)
	{
		return __o->transposed();
	}
	return QSize();
}

void QtScriptQSize::scale(const QSize& s, int mode)
{
	auto __o = this->thiz<QSize *>();
	if (__o)
	{
		__o->scale(s, Qt::AspectRatioMode(mode));
	}
}

void QtScriptQSize::scale(int w, int h, int mode)
{
	auto __o = this->thiz<QSize *>();
	if (__o)
	{
		__o->scale(w, h, Qt::AspectRatioMode(mode));
	}
}

void QtScriptQSize::multiplyBy(qreal c)
{
	auto __o = this->thiz<QSize *>();
	if (__o)
	{
		__o->operator*=(c);
	}
}

int QtScriptQSize::width()
{
	auto __o = this->thiz<QSize *>();
	if (__o)
	{
		return __o->width();
	}
	return 0;
}

bool QtScriptQSize::isValid()
{
	auto __o = this->thiz<QSize *>();
	if (__o)
	{
		return __o->isValid();
	}
	return false;
}

QSize QtScriptQSize::boundedTo(const QSize& arg0)
{
	auto __o = this->thiz<QSize *>();
	if (__o)
	{
		return __o->boundedTo(arg0);
	}
	return QSize();
}

void QtScriptQSize::transpose()
{
	auto __o = this->thiz<QSize *>();
	if (__o)
	{
		__o->transpose();
	}
}

void QtScriptQSize::divideBy(qreal c)
{
	auto __o = this->thiz<QSize *>();
	if (__o)
	{
		__o->operator/=(c);
	}
}

int QtScriptQSize::height()
{
	auto __o = this->thiz<QSize *>();
	if (__o)
	{
		return __o->height();
	}
	return 0;
}

QSize QtScriptQSize::scaled(const QSize& s, int mode)
{
	auto __o = this->thiz<QSize *>();
	if (__o)
	{
		return __o->scaled(s, Qt::AspectRatioMode(mode));
	}
	return QSize();
}

QSize QtScriptQSize::scaled(int w, int h, int mode)
{
	auto __o = this->thiz<QSize *>();
	if (__o)
	{
		return __o->scaled(w, h, Qt::AspectRatioMode(mode));
	}
	return QSize();
}

bool QtScriptQSize::isNull()
{
	auto __o = this->thiz<QSize *>();
	if (__o)
	{
		return __o->isNull();
	}
	return false;
}

QSize QtScriptQSize::expandedTo(const QSize& arg0)
{
	auto __o = this->thiz<QSize *>();
	if (__o)
	{
		return __o->expandedTo(arg0);
	}
	return QSize();
}

bool QtScriptQSize::isEmpty()
{
	auto __o = this->thiz<QSize *>();
	if (__o)
	{
		return __o->isEmpty();
	}
	return false;
}

int QtScriptQSize::rwidth()
{
	auto __o = this->thiz<QSize *>();
	if (__o)
	{
		return __o->rwidth();
	}
	return 0;
}

int QtScriptQSize::rheight()
{
	auto __o = this->thiz<QSize *>();
	if (__o)
	{
		return __o->rheight();
	}
	return 0;
}

void QtScriptQSize::dec(const QSize& arg0)
{
	auto __o = this->thiz<QSize *>();
	if (__o)
	{
		__o->operator-=(arg0);
	}
}

void QtScriptQSize::setWidth(int w)
{
	auto __o = this->thiz<QSize *>();
	if (__o)
	{
		__o->setWidth(w);
	}
}

void QtScriptQSize::inc(const QSize& arg0)
{
	auto __o = this->thiz<QSize *>();
	if (__o)
	{
		__o->operator+=(arg0);
	}
}

int QtScriptQSize::constructorArgumentCountMin() const
{
	return 0;
}

int QtScriptQSize::constructorArgumentCountMax() const
{
	return 2;
}

bool QtScriptQSize::constructObject(QScriptContext *context, NativeObjectType &out)
{
	auto __e = context->engine();
	Q_UNUSED(__e);
	bool ok = false;
	switch (context->argumentCount())
	{
		case 0:
		{
			ok = true;
			break;
		}
		case 1:
		{
			break;
		}
		case 2:
		{
			auto arg0 = qscriptvalue_cast<int>(context->argument(0));
			auto arg1 = qscriptvalue_cast<int>(context->argument(1));
			out = QSize(arg0, arg1);
			ok = true;
			break;
		}
	}
	
	if (!ok)
	{
		QtScriptUtils::badArgumentsException(context,
			"QSize constructor");
	}
	return ok;
}

QtScriptQSizeF::QtScriptQSizeF(QScriptEngine *engine, const QByteArray &className)
	: QtScriptBaseClassPrototype<QSizeF, false>(engine, className)
{
}

QtScriptQSizeF::QtScriptQSizeF(QScriptEngine *engine)
	: QtScriptQSizeF(engine, "SizeF")
{
}

void QtScriptQSizeF::Register(const QScriptValue &targetNamespace)
{
	auto engine = targetNamespace.engine();
	Q_ASSERT(engine);
	QScriptValue inherit;
	auto ctor = RegisterT<QSizeF, QtScriptQSizeF>(targetNamespace, inherit);
	Q_ASSERT(ctor.isFunction());
}

void QtScriptQSizeF::setHeight(qreal h)
{
	auto __o = this->thiz<QSizeF *>();
	if (__o)
	{
		__o->setHeight(h);
	}
}

QSizeF QtScriptQSizeF::transposed()
{
	auto __o = this->thiz<QSizeF *>();
	if (__o)
	{
		return __o->transposed();
	}
	return QSizeF();
}

void QtScriptQSizeF::scale(const QSizeF& s, int mode)
{
	auto __o = this->thiz<QSizeF *>();
	if (__o)
	{
		__o->scale(s, Qt::AspectRatioMode(mode));
	}
}

void QtScriptQSizeF::scale(qreal w, qreal h, int mode)
{
	auto __o = this->thiz<QSizeF *>();
	if (__o)
	{
		__o->scale(w, h, Qt::AspectRatioMode(mode));
	}
}

void QtScriptQSizeF::multiplyBy(qreal c)
{
	auto __o = this->thiz<QSizeF *>();
	if (__o)
	{
		__o->operator*=(c);
	}
}

qreal QtScriptQSizeF::width()
{
	auto __o = this->thiz<QSizeF *>();
	if (__o)
	{
		return __o->width();
	}
	return static_cast<qreal>(0);
}

bool QtScriptQSizeF::isValid()
{
	auto __o = this->thiz<QSizeF *>();
	if (__o)
	{
		return __o->isValid();
	}
	return false;
}

QSizeF QtScriptQSizeF::boundedTo(const QSizeF& arg0)
{
	auto __o = this->thiz<QSizeF *>();
	if (__o)
	{
		return __o->boundedTo(arg0);
	}
	return QSizeF();
}

void QtScriptQSizeF::transpose()
{
	auto __o = this->thiz<QSizeF *>();
	if (__o)
	{
		__o->transpose();
	}
}

void QtScriptQSizeF::divideBy(qreal c)
{
	auto __o = this->thiz<QSizeF *>();
	if (__o)
	{
		__o->operator/=(c);
	}
}

qreal QtScriptQSizeF::height()
{
	auto __o = this->thiz<QSizeF *>();
	if (__o)
	{
		return __o->height();
	}
	return static_cast<qreal>(0);
}

QSizeF QtScriptQSizeF::scaled(const QSizeF& s, int mode)
{
	auto __o = this->thiz<QSizeF *>();
	if (__o)
	{
		return __o->scaled(s, Qt::AspectRatioMode(mode));
	}
	return QSizeF();
}

QSizeF QtScriptQSizeF::scaled(qreal w, qreal h, int mode)
{
	auto __o = this->thiz<QSizeF *>();
	if (__o)
	{
		return __o->scaled(w, h, Qt::AspectRatioMode(mode));
	}
	return QSizeF();
}

bool QtScriptQSizeF::isNull()
{
	auto __o = this->thiz<QSizeF *>();
	if (__o)
	{
		return __o->isNull();
	}
	return false;
}

QSizeF QtScriptQSizeF::expandedTo(const QSizeF& arg0)
{
	auto __o = this->thiz<QSizeF *>();
	if (__o)
	{
		return __o->expandedTo(arg0);
	}
	return QSizeF();
}

bool QtScriptQSizeF::isEmpty()
{
	auto __o = this->thiz<QSizeF *>();
	if (__o)
	{
		return __o->isEmpty();
	}
	return false;
}

qreal QtScriptQSizeF::rwidth()
{
	auto __o = this->thiz<QSizeF *>();
	if (__o)
	{
		return __o->rwidth();
	}
	return static_cast<qreal>(0);
}

qreal QtScriptQSizeF::rheight()
{
	auto __o = this->thiz<QSizeF *>();
	if (__o)
	{
		return __o->rheight();
	}
	return static_cast<qreal>(0);
}

void QtScriptQSizeF::dec(const QSizeF& arg0)
{
	auto __o = this->thiz<QSizeF *>();
	if (__o)
	{
		__o->operator-=(arg0);
	}
}

void QtScriptQSizeF::setWidth(qreal w)
{
	auto __o = this->thiz<QSizeF *>();
	if (__o)
	{
		__o->setWidth(w);
	}
}

QSize QtScriptQSizeF::toSize()
{
	auto __o = this->thiz<QSizeF *>();
	if (__o)
	{
		return __o->toSize();
	}
	return QSize();
}

void QtScriptQSizeF::inc(const QSizeF& arg0)
{
	auto __o = this->thiz<QSizeF *>();
	if (__o)
	{
		__o->operator+=(arg0);
	}
}

int QtScriptQSizeF::constructorArgumentCountMin() const
{
	return 0;
}

int QtScriptQSizeF::constructorArgumentCountMax() const
{
	return 2;
}

bool QtScriptQSizeF::constructObject(QScriptContext *context, NativeObjectType &out)
{
	auto __e = context->engine();
	Q_UNUSED(__e);
	bool ok = false;
	switch (context->argumentCount())
	{
		case 0:
		{
			ok = true;
			break;
		}
		case 1:
		{
			auto arg0 = qscriptvalue_cast<QSize>(context->argument(0));
			out = QSizeF(arg0);
			ok = true;
			break;
		}
		case 2:
		{
			auto arg0 = qscriptvalue_cast<qreal>(context->argument(0));
			auto arg1 = qscriptvalue_cast<qreal>(context->argument(1));
			out = QSizeF(arg0, arg1);
			ok = true;
			break;
		}
	}
	
	if (!ok)
	{
		QtScriptUtils::badArgumentsException(context,
			"QSizeF constructor");
	}
	return ok;
}

QtScriptQRect::QtScriptQRect(QScriptEngine *engine, const QByteArray &className)
	: QtScriptBaseClassPrototype<QRect, false>(engine, className)
{
}

QtScriptQRect::QtScriptQRect(QScriptEngine *engine)
	: QtScriptQRect(engine, "Rect")
{
}

void QtScriptQRect::Register(const QScriptValue &targetNamespace)
{
	auto engine = targetNamespace.engine();
	Q_ASSERT(engine);
	QScriptValue inherit;
	auto ctor = RegisterT<QRect, QtScriptQRect>(targetNamespace, inherit);
	Q_ASSERT(ctor.isFunction());
}

QPoint QtScriptQRect::topLeft()
{
	auto __o = this->thiz<QRect *>();
	if (__o)
	{
		return __o->topLeft();
	}
	return QPoint();
}

void QtScriptQRect::moveTo(const QPoint& p)
{
	auto __o = this->thiz<QRect *>();
	if (__o)
	{
		__o->moveTo(p);
	}
}

void QtScriptQRect::moveTo(int x, int t)
{
	auto __o = this->thiz<QRect *>();
	if (__o)
	{
		__o->moveTo(x, t);
	}
}

int QtScriptQRect::right()
{
	auto __o = this->thiz<QRect *>();
	if (__o)
	{
		return __o->right();
	}
	return 0;
}

bool QtScriptQRect::intersects(const QRect& r)
{
	auto __o = this->thiz<QRect *>();
	if (__o)
	{
		return __o->intersects(r);
	}
	return false;
}

QRect QtScriptQRect::marginsRemoved(const QMargins& margins)
{
	auto __o = this->thiz<QRect *>();
	if (__o)
	{
		return __o->marginsRemoved(margins);
	}
	return QRect();
}

void QtScriptQRect::setBottom(int pos)
{
	auto __o = this->thiz<QRect *>();
	if (__o)
	{
		__o->setBottom(pos);
	}
}

QRect QtScriptQRect::adjusted(int x1, int y1, int x2, int y2)
{
	auto __o = this->thiz<QRect *>();
	if (__o)
	{
		return __o->adjusted(x1, y1, x2, y2);
	}
	return QRect();
}

void QtScriptQRect::setTop(int pos)
{
	auto __o = this->thiz<QRect *>();
	if (__o)
	{
		__o->setTop(pos);
	}
}

void QtScriptQRect::setBottomLeft(const QPoint& p)
{
	auto __o = this->thiz<QRect *>();
	if (__o)
	{
		__o->setBottomLeft(p);
	}
}

void QtScriptQRect::moveRight(int pos)
{
	auto __o = this->thiz<QRect *>();
	if (__o)
	{
		__o->moveRight(pos);
	}
}

void QtScriptQRect::moveBottomLeft(const QPoint& p)
{
	auto __o = this->thiz<QRect *>();
	if (__o)
	{
		__o->moveBottomLeft(p);
	}
}

void QtScriptQRect::setWidth(int w)
{
	auto __o = this->thiz<QRect *>();
	if (__o)
	{
		__o->setWidth(w);
	}
}

QRect QtScriptQRect::marginsAdded(const QMargins& margins)
{
	auto __o = this->thiz<QRect *>();
	if (__o)
	{
		return __o->marginsAdded(margins);
	}
	return QRect();
}

QSize QtScriptQRect::size()
{
	auto __o = this->thiz<QRect *>();
	if (__o)
	{
		return __o->size();
	}
	return QSize();
}

void QtScriptQRect::moveBottom(int pos)
{
	auto __o = this->thiz<QRect *>();
	if (__o)
	{
		__o->moveBottom(pos);
	}
}

void QtScriptQRect::setCoords(int x1, int y1, int x2, int y2)
{
	auto __o = this->thiz<QRect *>();
	if (__o)
	{
		__o->setCoords(x1, y1, x2, y2);
	}
}

void QtScriptQRect::inc(const QMargins& margins)
{
	auto __o = this->thiz<QRect *>();
	if (__o)
	{
		__o->operator+=(margins);
	}
}

QPoint QtScriptQRect::bottomRight()
{
	auto __o = this->thiz<QRect *>();
	if (__o)
	{
		return __o->bottomRight();
	}
	return QPoint();
}

int QtScriptQRect::bottom()
{
	auto __o = this->thiz<QRect *>();
	if (__o)
	{
		return __o->bottom();
	}
	return 0;
}

void QtScriptQRect::setLeft(int pos)
{
	auto __o = this->thiz<QRect *>();
	if (__o)
	{
		__o->setLeft(pos);
	}
}

int QtScriptQRect::top()
{
	auto __o = this->thiz<QRect *>();
	if (__o)
	{
		return __o->top();
	}
	return 0;
}

bool QtScriptQRect::contains(const QRect& r)
{
	auto __o = this->thiz<QRect *>();
	if (__o)
	{
		return __o->contains(r);
	}
	return false;
}

bool QtScriptQRect::contains(const QRect& r, bool proper)
{
	auto __o = this->thiz<QRect *>();
	if (__o)
	{
		return __o->contains(r, proper);
	}
	return false;
}

bool QtScriptQRect::contains(int x, int y, bool proper)
{
	auto __o = this->thiz<QRect *>();
	if (__o)
	{
		return __o->contains(x, y, proper);
	}
	return false;
}

void QtScriptQRect::setTopLeft(const QPoint& p)
{
	auto __o = this->thiz<QRect *>();
	if (__o)
	{
		__o->setTopLeft(p);
	}
}

QPoint QtScriptQRect::topRight()
{
	auto __o = this->thiz<QRect *>();
	if (__o)
	{
		return __o->topRight();
	}
	return QPoint();
}

void QtScriptQRect::moveCenter(const QPoint& p)
{
	auto __o = this->thiz<QRect *>();
	if (__o)
	{
		__o->moveCenter(p);
	}
}

int QtScriptQRect::width()
{
	auto __o = this->thiz<QRect *>();
	if (__o)
	{
		return __o->width();
	}
	return 0;
}

bool QtScriptQRect::isEmpty()
{
	auto __o = this->thiz<QRect *>();
	if (__o)
	{
		return __o->isEmpty();
	}
	return false;
}

void QtScriptQRect::translate(const QPoint& p)
{
	auto __o = this->thiz<QRect *>();
	if (__o)
	{
		__o->translate(p);
	}
}

void QtScriptQRect::translate(int dx, int dy)
{
	auto __o = this->thiz<QRect *>();
	if (__o)
	{
		__o->translate(dx, dy);
	}
}

void QtScriptQRect::setRect(int x, int y, int w, int h)
{
	auto __o = this->thiz<QRect *>();
	if (__o)
	{
		__o->setRect(x, y, w, h);
	}
}

void QtScriptQRect::setHeight(int h)
{
	auto __o = this->thiz<QRect *>();
	if (__o)
	{
		__o->setHeight(h);
	}
}

void QtScriptQRect::setBottomRight(const QPoint& p)
{
	auto __o = this->thiz<QRect *>();
	if (__o)
	{
		__o->setBottomRight(p);
	}
}

bool QtScriptQRect::isValid()
{
	auto __o = this->thiz<QRect *>();
	if (__o)
	{
		return __o->isValid();
	}
	return false;
}

void QtScriptQRect::setTopRight(const QPoint& p)
{
	auto __o = this->thiz<QRect *>();
	if (__o)
	{
		__o->setTopRight(p);
	}
}

QRect QtScriptQRect::translated(const QPoint& p)
{
	auto __o = this->thiz<QRect *>();
	if (__o)
	{
		return __o->translated(p);
	}
	return QRect();
}

QRect QtScriptQRect::translated(int dx, int dy)
{
	auto __o = this->thiz<QRect *>();
	if (__o)
	{
		return __o->translated(dx, dy);
	}
	return QRect();
}

QRect QtScriptQRect::united(const QRect& other)
{
	auto __o = this->thiz<QRect *>();
	if (__o)
	{
		return __o->united(other);
	}
	return QRect();
}

QRect QtScriptQRect::normalized()
{
	auto __o = this->thiz<QRect *>();
	if (__o)
	{
		return __o->normalized();
	}
	return QRect();
}

void QtScriptQRect::moveBottomRight(const QPoint& p)
{
	auto __o = this->thiz<QRect *>();
	if (__o)
	{
		__o->moveBottomRight(p);
	}
}

void QtScriptQRect::setX(int x)
{
	auto __o = this->thiz<QRect *>();
	if (__o)
	{
		__o->setX(x);
	}
}

void QtScriptQRect::setY(int y)
{
	auto __o = this->thiz<QRect *>();
	if (__o)
	{
		__o->setY(y);
	}
}

void QtScriptQRect::moveLeft(int pos)
{
	auto __o = this->thiz<QRect *>();
	if (__o)
	{
		__o->moveLeft(pos);
	}
}

QRect QtScriptQRect::transposed()
{
	auto __o = this->thiz<QRect *>();
	if (__o)
	{
		return __o->transposed();
	}
	return QRect();
}

void QtScriptQRect::dec(const QMargins& margins)
{
	auto __o = this->thiz<QRect *>();
	if (__o)
	{
		__o->operator-=(margins);
	}
}

QPoint QtScriptQRect::bottomLeft()
{
	auto __o = this->thiz<QRect *>();
	if (__o)
	{
		return __o->bottomLeft();
	}
	return QPoint();
}

QPoint QtScriptQRect::center()
{
	auto __o = this->thiz<QRect *>();
	if (__o)
	{
		return __o->center();
	}
	return QPoint();
}

void QtScriptQRect::moveTopRight(const QPoint& p)
{
	auto __o = this->thiz<QRect *>();
	if (__o)
	{
		__o->moveTopRight(p);
	}
}

void QtScriptQRect::setSize(const QSize& s)
{
	auto __o = this->thiz<QRect *>();
	if (__o)
	{
		__o->setSize(s);
	}
}

QRect QtScriptQRect::intersected(const QRect& other)
{
	auto __o = this->thiz<QRect *>();
	if (__o)
	{
		return __o->intersected(other);
	}
	return QRect();
}

void QtScriptQRect::setRight(int pos)
{
	auto __o = this->thiz<QRect *>();
	if (__o)
	{
		__o->setRight(pos);
	}
}

int QtScriptQRect::height()
{
	auto __o = this->thiz<QRect *>();
	if (__o)
	{
		return __o->height();
	}
	return 0;
}

bool QtScriptQRect::isNull()
{
	auto __o = this->thiz<QRect *>();
	if (__o)
	{
		return __o->isNull();
	}
	return false;
}

void QtScriptQRect::adjust(int x1, int y1, int x2, int y2)
{
	auto __o = this->thiz<QRect *>();
	if (__o)
	{
		__o->adjust(x1, y1, x2, y2);
	}
}

int QtScriptQRect::y()
{
	auto __o = this->thiz<QRect *>();
	if (__o)
	{
		return __o->y();
	}
	return 0;
}

int QtScriptQRect::x()
{
	auto __o = this->thiz<QRect *>();
	if (__o)
	{
		return __o->x();
	}
	return 0;
}

void QtScriptQRect::moveTop(int pos)
{
	auto __o = this->thiz<QRect *>();
	if (__o)
	{
		__o->moveTop(pos);
	}
}

void QtScriptQRect::moveTopLeft(const QPoint& p)
{
	auto __o = this->thiz<QRect *>();
	if (__o)
	{
		__o->moveTopLeft(p);
	}
}

int QtScriptQRect::left()
{
	auto __o = this->thiz<QRect *>();
	if (__o)
	{
		return __o->left();
	}
	return 0;
}

int QtScriptQRect::constructorArgumentCountMin() const
{
	return 0;
}

int QtScriptQRect::constructorArgumentCountMax() const
{
	return 4;
}

bool QtScriptQRect::constructObject(QScriptContext *context, NativeObjectType &out)
{
	auto __e = context->engine();
	Q_UNUSED(__e);
	bool ok = false;
	switch (context->argumentCount())
	{
		case 0:
		{
			ok = true;
			break;
		}
		case 1:
		{
			break;
		}
		case 2:
		{
			auto arg0 = qscriptvalue_cast<QPoint>(context->argument(0));
			auto arg1 = qscriptvalue_cast<QPoint>(context->argument(1));
			out = QRect(arg0, arg1);
			ok = true;
			break;
		}
		case 3:
		{
			break;
		}
		case 4:
		{
			auto arg0 = qscriptvalue_cast<int>(context->argument(0));
			auto arg1 = qscriptvalue_cast<int>(context->argument(1));
			auto arg2 = qscriptvalue_cast<int>(context->argument(2));
			auto arg3 = qscriptvalue_cast<int>(context->argument(3));
			out = QRect(arg0, arg1, arg2, arg3);
			ok = true;
			break;
		}
	}
	
	if (!ok)
	{
		QtScriptUtils::badArgumentsException(context,
			"QRect constructor");
	}
	return ok;
}

QtScriptQRectF::QtScriptQRectF(QScriptEngine *engine, const QByteArray &className)
	: QtScriptBaseClassPrototype<QRectF, false>(engine, className)
{
}

QtScriptQRectF::QtScriptQRectF(QScriptEngine *engine)
	: QtScriptQRectF(engine, "RectF")
{
}

void QtScriptQRectF::Register(const QScriptValue &targetNamespace)
{
	auto engine = targetNamespace.engine();
	Q_ASSERT(engine);
	QScriptValue inherit;
	auto ctor = RegisterT<QRectF, QtScriptQRectF>(targetNamespace, inherit);
	Q_ASSERT(ctor.isFunction());
}

QPointF QtScriptQRectF::topLeft()
{
	auto __o = this->thiz<QRectF *>();
	if (__o)
	{
		return __o->topLeft();
	}
	return QPointF();
}

void QtScriptQRectF::moveTo(const QPointF& p)
{
	auto __o = this->thiz<QRectF *>();
	if (__o)
	{
		__o->moveTo(p);
	}
}

void QtScriptQRectF::moveTo(qreal x, qreal y)
{
	auto __o = this->thiz<QRectF *>();
	if (__o)
	{
		__o->moveTo(x, y);
	}
}

qreal QtScriptQRectF::right()
{
	auto __o = this->thiz<QRectF *>();
	if (__o)
	{
		return __o->right();
	}
	return static_cast<qreal>(0);
}

bool QtScriptQRectF::intersects(const QRectF& r)
{
	auto __o = this->thiz<QRectF *>();
	if (__o)
	{
		return __o->intersects(r);
	}
	return false;
}

QRectF QtScriptQRectF::marginsRemoved(const QMarginsF& margins)
{
	auto __o = this->thiz<QRectF *>();
	if (__o)
	{
		return __o->marginsRemoved(margins);
	}
	return QRectF();
}

void QtScriptQRectF::setBottom(qreal pos)
{
	auto __o = this->thiz<QRectF *>();
	if (__o)
	{
		__o->setBottom(pos);
	}
}

QRectF QtScriptQRectF::adjusted(qreal x1, qreal y1, qreal x2, qreal y2)
{
	auto __o = this->thiz<QRectF *>();
	if (__o)
	{
		return __o->adjusted(x1, y1, x2, y2);
	}
	return QRectF();
}

void QtScriptQRectF::setTop(qreal pos)
{
	auto __o = this->thiz<QRectF *>();
	if (__o)
	{
		__o->setTop(pos);
	}
}

void QtScriptQRectF::setBottomLeft(const QPointF& p)
{
	auto __o = this->thiz<QRectF *>();
	if (__o)
	{
		__o->setBottomLeft(p);
	}
}

void QtScriptQRectF::moveRight(qreal pos)
{
	auto __o = this->thiz<QRectF *>();
	if (__o)
	{
		__o->moveRight(pos);
	}
}

void QtScriptQRectF::moveBottomLeft(const QPointF& p)
{
	auto __o = this->thiz<QRectF *>();
	if (__o)
	{
		__o->moveBottomLeft(p);
	}
}

void QtScriptQRectF::setWidth(qreal w)
{
	auto __o = this->thiz<QRectF *>();
	if (__o)
	{
		__o->setWidth(w);
	}
}

QRectF QtScriptQRectF::marginsAdded(const QMarginsF& margins)
{
	auto __o = this->thiz<QRectF *>();
	if (__o)
	{
		return __o->marginsAdded(margins);
	}
	return QRectF();
}

QSizeF QtScriptQRectF::size()
{
	auto __o = this->thiz<QRectF *>();
	if (__o)
	{
		return __o->size();
	}
	return QSizeF();
}

void QtScriptQRectF::moveBottom(qreal pos)
{
	auto __o = this->thiz<QRectF *>();
	if (__o)
	{
		__o->moveBottom(pos);
	}
}

void QtScriptQRectF::setCoords(qreal x1, qreal y1, qreal x2, qreal y2)
{
	auto __o = this->thiz<QRectF *>();
	if (__o)
	{
		__o->setCoords(x1, y1, x2, y2);
	}
}

void QtScriptQRectF::inc(const QMarginsF& margins)
{
	auto __o = this->thiz<QRectF *>();
	if (__o)
	{
		__o->operator+=(margins);
	}
}

QPointF QtScriptQRectF::bottomRight()
{
	auto __o = this->thiz<QRectF *>();
	if (__o)
	{
		return __o->bottomRight();
	}
	return QPointF();
}

qreal QtScriptQRectF::bottom()
{
	auto __o = this->thiz<QRectF *>();
	if (__o)
	{
		return __o->bottom();
	}
	return static_cast<qreal>(0);
}

QRect QtScriptQRectF::toRect()
{
	auto __o = this->thiz<QRectF *>();
	if (__o)
	{
		return __o->toRect();
	}
	return QRect();
}

void QtScriptQRectF::setLeft(qreal pos)
{
	auto __o = this->thiz<QRectF *>();
	if (__o)
	{
		__o->setLeft(pos);
	}
}

qreal QtScriptQRectF::top()
{
	auto __o = this->thiz<QRectF *>();
	if (__o)
	{
		return __o->top();
	}
	return static_cast<qreal>(0);
}

bool QtScriptQRectF::contains(const QRectF& r)
{
	auto __o = this->thiz<QRectF *>();
	if (__o)
	{
		return __o->contains(r);
	}
	return false;
}

bool QtScriptQRectF::contains(qreal x, qreal y)
{
	auto __o = this->thiz<QRectF *>();
	if (__o)
	{
		return __o->contains(x, y);
	}
	return false;
}

void QtScriptQRectF::setTopLeft(const QPointF& p)
{
	auto __o = this->thiz<QRectF *>();
	if (__o)
	{
		__o->setTopLeft(p);
	}
}

QPointF QtScriptQRectF::topRight()
{
	auto __o = this->thiz<QRectF *>();
	if (__o)
	{
		return __o->topRight();
	}
	return QPointF();
}

void QtScriptQRectF::moveCenter(const QPointF& p)
{
	auto __o = this->thiz<QRectF *>();
	if (__o)
	{
		__o->moveCenter(p);
	}
}

qreal QtScriptQRectF::width()
{
	auto __o = this->thiz<QRectF *>();
	if (__o)
	{
		return __o->width();
	}
	return static_cast<qreal>(0);
}

bool QtScriptQRectF::isEmpty()
{
	auto __o = this->thiz<QRectF *>();
	if (__o)
	{
		return __o->isEmpty();
	}
	return false;
}

void QtScriptQRectF::translate(const QPointF& p)
{
	auto __o = this->thiz<QRectF *>();
	if (__o)
	{
		__o->translate(p);
	}
}

void QtScriptQRectF::translate(qreal dx, qreal dy)
{
	auto __o = this->thiz<QRectF *>();
	if (__o)
	{
		__o->translate(dx, dy);
	}
}

void QtScriptQRectF::setRect(qreal x, qreal y, qreal w, qreal h)
{
	auto __o = this->thiz<QRectF *>();
	if (__o)
	{
		__o->setRect(x, y, w, h);
	}
}

void QtScriptQRectF::setHeight(qreal h)
{
	auto __o = this->thiz<QRectF *>();
	if (__o)
	{
		__o->setHeight(h);
	}
}

void QtScriptQRectF::setBottomRight(const QPointF& p)
{
	auto __o = this->thiz<QRectF *>();
	if (__o)
	{
		__o->setBottomRight(p);
	}
}

bool QtScriptQRectF::isValid()
{
	auto __o = this->thiz<QRectF *>();
	if (__o)
	{
		return __o->isValid();
	}
	return false;
}

void QtScriptQRectF::setTopRight(const QPointF& p)
{
	auto __o = this->thiz<QRectF *>();
	if (__o)
	{
		__o->setTopRight(p);
	}
}

QRectF QtScriptQRectF::translated(const QPointF& p)
{
	auto __o = this->thiz<QRectF *>();
	if (__o)
	{
		return __o->translated(p);
	}
	return QRectF();
}

QRectF QtScriptQRectF::translated(qreal dx, qreal dy)
{
	auto __o = this->thiz<QRectF *>();
	if (__o)
	{
		return __o->translated(dx, dy);
	}
	return QRectF();
}

QRectF QtScriptQRectF::united(const QRectF& other)
{
	auto __o = this->thiz<QRectF *>();
	if (__o)
	{
		return __o->united(other);
	}
	return QRectF();
}

QRectF QtScriptQRectF::normalized()
{
	auto __o = this->thiz<QRectF *>();
	if (__o)
	{
		return __o->normalized();
	}
	return QRectF();
}

void QtScriptQRectF::moveBottomRight(const QPointF& p)
{
	auto __o = this->thiz<QRectF *>();
	if (__o)
	{
		__o->moveBottomRight(p);
	}
}

void QtScriptQRectF::setX(qreal pos)
{
	auto __o = this->thiz<QRectF *>();
	if (__o)
	{
		__o->setX(pos);
	}
}

void QtScriptQRectF::setY(qreal pos)
{
	auto __o = this->thiz<QRectF *>();
	if (__o)
	{
		__o->setY(pos);
	}
}

void QtScriptQRectF::moveLeft(qreal pos)
{
	auto __o = this->thiz<QRectF *>();
	if (__o)
	{
		__o->moveLeft(pos);
	}
}

QRectF QtScriptQRectF::transposed()
{
	auto __o = this->thiz<QRectF *>();
	if (__o)
	{
		return __o->transposed();
	}
	return QRectF();
}

void QtScriptQRectF::dec(const QMarginsF& margins)
{
	auto __o = this->thiz<QRectF *>();
	if (__o)
	{
		__o->operator-=(margins);
	}
}

QPointF QtScriptQRectF::bottomLeft()
{
	auto __o = this->thiz<QRectF *>();
	if (__o)
	{
		return __o->bottomLeft();
	}
	return QPointF();
}

QPointF QtScriptQRectF::center()
{
	auto __o = this->thiz<QRectF *>();
	if (__o)
	{
		return __o->center();
	}
	return QPointF();
}

void QtScriptQRectF::moveTopRight(const QPointF& p)
{
	auto __o = this->thiz<QRectF *>();
	if (__o)
	{
		__o->moveTopRight(p);
	}
}

void QtScriptQRectF::setSize(const QSizeF& s)
{
	auto __o = this->thiz<QRectF *>();
	if (__o)
	{
		__o->setSize(s);
	}
}

QRect QtScriptQRectF::toAlignedRect()
{
	auto __o = this->thiz<QRectF *>();
	if (__o)
	{
		return __o->toAlignedRect();
	}
	return QRect();
}

QRectF QtScriptQRectF::intersected(const QRectF& other)
{
	auto __o = this->thiz<QRectF *>();
	if (__o)
	{
		return __o->intersected(other);
	}
	return QRectF();
}

void QtScriptQRectF::setRight(qreal pos)
{
	auto __o = this->thiz<QRectF *>();
	if (__o)
	{
		__o->setRight(pos);
	}
}

qreal QtScriptQRectF::height()
{
	auto __o = this->thiz<QRectF *>();
	if (__o)
	{
		return __o->height();
	}
	return static_cast<qreal>(0);
}

bool QtScriptQRectF::isNull()
{
	auto __o = this->thiz<QRectF *>();
	if (__o)
	{
		return __o->isNull();
	}
	return false;
}

void QtScriptQRectF::adjust(qreal x1, qreal y1, qreal x2, qreal y2)
{
	auto __o = this->thiz<QRectF *>();
	if (__o)
	{
		__o->adjust(x1, y1, x2, y2);
	}
}

qreal QtScriptQRectF::y()
{
	auto __o = this->thiz<QRectF *>();
	if (__o)
	{
		return __o->y();
	}
	return static_cast<qreal>(0);
}

qreal QtScriptQRectF::x()
{
	auto __o = this->thiz<QRectF *>();
	if (__o)
	{
		return __o->x();
	}
	return static_cast<qreal>(0);
}

void QtScriptQRectF::moveTop(qreal pos)
{
	auto __o = this->thiz<QRectF *>();
	if (__o)
	{
		__o->moveTop(pos);
	}
}

void QtScriptQRectF::moveTopLeft(const QPointF& p)
{
	auto __o = this->thiz<QRectF *>();
	if (__o)
	{
		__o->moveTopLeft(p);
	}
}

qreal QtScriptQRectF::left()
{
	auto __o = this->thiz<QRectF *>();
	if (__o)
	{
		return __o->left();
	}
	return static_cast<qreal>(0);
}

int QtScriptQRectF::constructorArgumentCountMin() const
{
	return 0;
}

int QtScriptQRectF::constructorArgumentCountMax() const
{
	return 4;
}

bool QtScriptQRectF::constructObject(QScriptContext *context, NativeObjectType &out)
{
	auto __e = context->engine();
	Q_UNUSED(__e);
	bool ok = false;
	switch (context->argumentCount())
	{
		case 0:
		{
			ok = true;
			break;
		}
		case 1:
		{
			auto arg0 = qscriptvalue_cast<QRect>(context->argument(0));
			out = QRectF(arg0);
			ok = true;
			break;
		}
		case 2:
		{
			auto arg0 = qscriptvalue_cast<QPointF>(context->argument(0));
			auto arg1 = qscriptvalue_cast<QSizeF>(context->argument(1));
			out = QRectF(arg0, arg1);
			ok = true;
			break;
		}
		case 3:
		{
			break;
		}
		case 4:
		{
			auto arg0 = qscriptvalue_cast<qreal>(context->argument(0));
			auto arg1 = qscriptvalue_cast<qreal>(context->argument(1));
			auto arg2 = qscriptvalue_cast<qreal>(context->argument(2));
			auto arg3 = qscriptvalue_cast<qreal>(context->argument(3));
			out = QRectF(arg0, arg1, arg2, arg3);
			ok = true;
			break;
		}
	}
	
	if (!ok)
	{
		QtScriptUtils::badArgumentsException(context,
			"QRectF constructor");
	}
	return ok;
}

QtScriptQSaveFile::QtScriptQSaveFile(QScriptEngine *engine, const QByteArray &className)
	: QtScriptQFileDevice(engine, className)
{
}

QtScriptQSaveFile::QtScriptQSaveFile(QScriptEngine *engine)
	: QtScriptQSaveFile(engine, "SaveFile")
{
}

void QtScriptQSaveFile::Register(const QScriptValue &targetNamespace)
{
	auto engine = targetNamespace.engine();
	Q_ASSERT(engine);
	auto inherit = engine->defaultPrototype(qMetaTypeId<QFileDevice *>());
	auto ctor = RegisterT<QSaveFile, QtScriptQSaveFile>(targetNamespace, inherit);
	Q_ASSERT(ctor.isFunction());
}

void QtScriptQSaveFile::setDirectWriteFallback(bool enabled)
{
	auto __o = this->thiz<QSaveFile *>();
	if (__o)
	{
		__o->setDirectWriteFallback(enabled);
	}
}

bool QtScriptQSaveFile::commit()
{
	auto __o = this->thiz<QSaveFile *>();
	if (__o)
	{
		return __o->commit();
	}
	return false;
}

bool QtScriptQSaveFile::directWriteFallback()
{
	auto __o = this->thiz<QSaveFile *>();
	if (__o)
	{
		return __o->directWriteFallback();
	}
	return false;
}

void QtScriptQSaveFile::setFileName(const QString& name)
{
	auto __o = this->thiz<QSaveFile *>();
	if (__o)
	{
		__o->setFileName(name);
	}
}

void QtScriptQSaveFile::cancelWriting()
{
	auto __o = this->thiz<QSaveFile *>();
	if (__o)
	{
		__o->cancelWriting();
	}
}

int QtScriptQSaveFile::constructorArgumentCountMin() const
{
	return 0;
}

int QtScriptQSaveFile::constructorArgumentCountMax() const
{
	return 2;
}

bool QtScriptQSaveFile::constructObject(QScriptContext *context, NativeObjectType &out)
{
	auto __e = context->engine();
	Q_UNUSED(__e);
	bool ok = false;
	switch (context->argumentCount())
	{
		case 0:
		{
			out = new QSaveFile();
			ok = true;
			break;
		}
		case 1:
		{
			auto arg0 = qscriptvalue_cast<QString>(context->argument(0));
			out = new QSaveFile(arg0);
			ok = true;
			break;
		}
		case 2:
		{
			auto arg0 = qscriptvalue_cast<QString>(context->argument(0));
			auto arg1 = qscriptvalue_cast<QObject*>(context->argument(1));
			out = new QSaveFile(arg0, arg1);
			ok = true;
			break;
		}
	}
	
	if (!ok)
	{
		QtScriptUtils::badArgumentsException(context,
			"QSaveFile constructor");
	}
	return ok;
}

QtScriptQSequentialAnimationGroup::QtScriptQSequentialAnimationGroup(QScriptEngine *engine, const QByteArray &className)
	: QtScriptQAnimationGroup(engine, className)
{
}

QtScriptQSequentialAnimationGroup::QtScriptQSequentialAnimationGroup(QScriptEngine *engine)
	: QtScriptQSequentialAnimationGroup(engine, "SequentialAnimationGroup")
{
}

void QtScriptQSequentialAnimationGroup::Register(const QScriptValue &targetNamespace)
{
	auto engine = targetNamespace.engine();
	Q_ASSERT(engine);
	auto inherit = engine->defaultPrototype(qMetaTypeId<QAnimationGroup *>());
	auto ctor = RegisterT<QSequentialAnimationGroup, QtScriptQSequentialAnimationGroup>(targetNamespace, inherit);
	Q_ASSERT(ctor.isFunction());
}

int QtScriptQSequentialAnimationGroup::duration()
{
	auto __o = this->thiz<QSequentialAnimationGroup *>();
	if (__o)
	{
		return __o->duration();
	}
	return 0;
}

QPauseAnimation* QtScriptQSequentialAnimationGroup::addPause(int msecs)
{
	auto __o = this->thiz<QSequentialAnimationGroup *>();
	if (__o)
	{
		return __o->addPause(msecs);
	}
	return nullptr;
}

QPauseAnimation* QtScriptQSequentialAnimationGroup::insertPause(int index, int msecs)
{
	auto __o = this->thiz<QSequentialAnimationGroup *>();
	if (__o)
	{
		return __o->insertPause(index, msecs);
	}
	return nullptr;
}

QAbstractAnimation* QtScriptQSequentialAnimationGroup::currentAnimation()
{
	auto __o = this->thiz<QSequentialAnimationGroup *>();
	if (__o)
	{
		return __o->currentAnimation();
	}
	return nullptr;
}

int QtScriptQSequentialAnimationGroup::constructorArgumentCountMin() const
{
	return 0;
}

int QtScriptQSequentialAnimationGroup::constructorArgumentCountMax() const
{
	return 1;
}

bool QtScriptQSequentialAnimationGroup::constructObject(QScriptContext *context, NativeObjectType &out)
{
	auto __e = context->engine();
	Q_UNUSED(__e);
	bool ok = false;
	switch (context->argumentCount())
	{
		case 0:
		{
			out = new QSequentialAnimationGroup();
			ok = true;
			break;
		}
		case 1:
		{
			auto arg0 = qscriptvalue_cast<QObject*>(context->argument(0));
			out = new QSequentialAnimationGroup(arg0);
			ok = true;
			break;
		}
	}
	
	if (!ok)
	{
		QtScriptUtils::badArgumentsException(context,
			"QSequentialAnimationGroup constructor");
	}
	return ok;
}

QtScriptQSettings::QtScriptQSettings(QScriptEngine *engine, const QByteArray &className)
	: QtScriptQObject(engine, className)
{
}

QtScriptQSettings::QtScriptQSettings(QScriptEngine *engine)
	: QtScriptQSettings(engine, "Settings")
{
}

void QtScriptQSettings::Register(const QScriptValue &targetNamespace)
{
	auto engine = targetNamespace.engine();
	Q_ASSERT(engine);
	auto inherit = engine->defaultPrototype(qMetaTypeId<QObject *>());
	auto ctor = RegisterT<QSettings, QtScriptQSettings>(targetNamespace, inherit);
	Q_ASSERT(ctor.isFunction());
	ctor.setProperty("setUserIniPath", engine->newFunction(
		static_cast<QScriptValue (*)(QScriptContext *, QScriptEngine *)>(
			&QtScriptQSettings::setUserIniPath)),
			QScriptValue::ReadOnly | QScriptValue::Undeletable);
	ctor.setProperty("defaultFormat", engine->newFunction(
		static_cast<QScriptValue (*)(QScriptContext *, QScriptEngine *)>(
			&QtScriptQSettings::defaultFormat)),
			QScriptValue::ReadOnly | QScriptValue::Undeletable);
	ctor.setProperty("setSystemIniPath", engine->newFunction(
		static_cast<QScriptValue (*)(QScriptContext *, QScriptEngine *)>(
			&QtScriptQSettings::setSystemIniPath)),
			QScriptValue::ReadOnly | QScriptValue::Undeletable);
	ctor.setProperty("setDefaultFormat", engine->newFunction(
		static_cast<QScriptValue (*)(QScriptContext *, QScriptEngine *)>(
			&QtScriptQSettings::setDefaultFormat)),
			QScriptValue::ReadOnly | QScriptValue::Undeletable);
	ctor.setProperty("setPath", engine->newFunction(
		static_cast<QScriptValue (*)(QScriptContext *, QScriptEngine *)>(
			&QtScriptQSettings::setPath)),
			QScriptValue::ReadOnly | QScriptValue::Undeletable);
}

void QtScriptQSettings::setIniCodec(QTextCodec* codec)
{
	auto __o = this->thiz<QSettings *>();
	if (__o)
	{
		__o->setIniCodec(codec);
	}
}

void QtScriptQSettings::sync()
{
	auto __o = this->thiz<QSettings *>();
	if (__o)
	{
		__o->sync();
	}
}

void QtScriptQSettings::remove(const QString& key)
{
	auto __o = this->thiz<QSettings *>();
	if (__o)
	{
		__o->remove(key);
	}
}

bool QtScriptQSettings::fallbacksEnabled()
{
	auto __o = this->thiz<QSettings *>();
	if (__o)
	{
		return __o->fallbacksEnabled();
	}
	return false;
}

QStringList QtScriptQSettings::allKeys()
{
	auto __o = this->thiz<QSettings *>();
	if (__o)
	{
		return __o->allKeys();
	}
	return QStringList();
}

QString QtScriptQSettings::applicationName()
{
	auto __o = this->thiz<QSettings *>();
	if (__o)
	{
		return __o->applicationName();
	}
	return QString();
}

QString QtScriptQSettings::group()
{
	auto __o = this->thiz<QSettings *>();
	if (__o)
	{
		return __o->group();
	}
	return QString();
}

bool QtScriptQSettings::isWritable()
{
	auto __o = this->thiz<QSettings *>();
	if (__o)
	{
		return __o->isWritable();
	}
	return false;
}

bool QtScriptQSettings::contains(const QString& key)
{
	auto __o = this->thiz<QSettings *>();
	if (__o)
	{
		return __o->contains(key);
	}
	return false;
}

void QtScriptQSettings::setArrayIndex(int i)
{
	auto __o = this->thiz<QSettings *>();
	if (__o)
	{
		__o->setArrayIndex(i);
	}
}

void QtScriptQSettings::beginGroup(const QString& prefix)
{
	auto __o = this->thiz<QSettings *>();
	if (__o)
	{
		__o->beginGroup(prefix);
	}
}

QStringList QtScriptQSettings::childGroups()
{
	auto __o = this->thiz<QSettings *>();
	if (__o)
	{
		return __o->childGroups();
	}
	return QStringList();
}

int QtScriptQSettings::scope()
{
	auto __o = this->thiz<QSettings *>();
	if (__o)
	{
		return int(__o->scope());
	}
	return 0;
}

void QtScriptQSettings::setFallbacksEnabled(bool b)
{
	auto __o = this->thiz<QSettings *>();
	if (__o)
	{
		__o->setFallbacksEnabled(b);
	}
}

int QtScriptQSettings::status()
{
	auto __o = this->thiz<QSettings *>();
	if (__o)
	{
		return int(__o->status());
	}
	return 0;
}

void QtScriptQSettings::setValue(const QString& key, const QVariant& value)
{
	auto __o = this->thiz<QSettings *>();
	if (__o)
	{
		__o->setValue(key, value);
	}
}

void QtScriptQSettings::beginWriteArray(const QString& prefix)
{
	auto __o = this->thiz<QSettings *>();
	if (__o)
	{
		__o->beginWriteArray(prefix);
	}
}

void QtScriptQSettings::beginWriteArray(const QString& prefix, int size)
{
	auto __o = this->thiz<QSettings *>();
	if (__o)
	{
		__o->beginWriteArray(prefix, size);
	}
}

int QtScriptQSettings::format()
{
	auto __o = this->thiz<QSettings *>();
	if (__o)
	{
		return int(__o->format());
	}
	return 0;
}

void QtScriptQSettings::endGroup()
{
	auto __o = this->thiz<QSettings *>();
	if (__o)
	{
		__o->endGroup();
	}
}

QString QtScriptQSettings::fileName()
{
	auto __o = this->thiz<QSettings *>();
	if (__o)
	{
		return __o->fileName();
	}
	return QString();
}

QStringList QtScriptQSettings::childKeys()
{
	auto __o = this->thiz<QSettings *>();
	if (__o)
	{
		return __o->childKeys();
	}
	return QStringList();
}

QTextCodec* QtScriptQSettings::iniCodec()
{
	auto __o = this->thiz<QSettings *>();
	if (__o)
	{
		return __o->iniCodec();
	}
	return nullptr;
}

QString QtScriptQSettings::organizationName()
{
	auto __o = this->thiz<QSettings *>();
	if (__o)
	{
		return __o->organizationName();
	}
	return QString();
}

void QtScriptQSettings::clear()
{
	auto __o = this->thiz<QSettings *>();
	if (__o)
	{
		__o->clear();
	}
}

QVariant QtScriptQSettings::value(const QString& key)
{
	auto __o = this->thiz<QSettings *>();
	if (__o)
	{
		return __o->value(key);
	}
	return QVariant();
}

QVariant QtScriptQSettings::value(const QString& key, const QVariant& defaultValue)
{
	auto __o = this->thiz<QSettings *>();
	if (__o)
	{
		return __o->value(key, defaultValue);
	}
	return QVariant();
}

int QtScriptQSettings::beginReadArray(const QString& prefix)
{
	auto __o = this->thiz<QSettings *>();
	if (__o)
	{
		return __o->beginReadArray(prefix);
	}
	return 0;
}

void QtScriptQSettings::endArray()
{
	auto __o = this->thiz<QSettings *>();
	if (__o)
	{
		__o->endArray();
	}
}

QScriptValue QtScriptQSettings::setUserIniPath(QScriptContext *context, QScriptEngine* __e)
{
	if (!QtScriptUtils::checkArgumentCount(context, 1, 1))
	{
		return __e->uncaughtException();
	}

	switch (context->argumentCount())
	{
		case 1:
		{
			auto arg0 = qscriptvalue_cast<QString>(context->argument(0));
			QSettings::setUserIniPath(arg0);
			return __e->undefinedValue();
		}
	}

	QtScriptUtils::badArgumentsException(context,
			"QSettings::setUserIniPath");
	return __e->uncaughtException();
}

QScriptValue QtScriptQSettings::defaultFormat(QScriptContext *context, QScriptEngine* __e)
{
	if (!QtScriptUtils::checkArgumentCount(context, 0, 0))
	{
		return __e->uncaughtException();
	}

	switch (context->argumentCount())
	{
		case 0:
		{
			return __e->toScriptValue(int(QSettings::defaultFormat()));
		}
	}

	QtScriptUtils::badArgumentsException(context,
			"QSettings::defaultFormat");
	return __e->uncaughtException();
}

QScriptValue QtScriptQSettings::setSystemIniPath(QScriptContext *context, QScriptEngine* __e)
{
	if (!QtScriptUtils::checkArgumentCount(context, 1, 1))
	{
		return __e->uncaughtException();
	}

	switch (context->argumentCount())
	{
		case 1:
		{
			auto arg0 = qscriptvalue_cast<QString>(context->argument(0));
			QSettings::setSystemIniPath(arg0);
			return __e->undefinedValue();
		}
	}

	QtScriptUtils::badArgumentsException(context,
			"QSettings::setSystemIniPath");
	return __e->uncaughtException();
}

QScriptValue QtScriptQSettings::setDefaultFormat(QScriptContext *context, QScriptEngine* __e)
{
	if (!QtScriptUtils::checkArgumentCount(context, 1, 1))
	{
		return __e->uncaughtException();
	}

	switch (context->argumentCount())
	{
		case 1:
		{
			auto tmp_0 = qscriptvalue_cast<int>(context->argument(0));
			auto arg0 = QSettings::Format(tmp_0);
			QSettings::setDefaultFormat(arg0);
			return __e->undefinedValue();
		}
	}

	QtScriptUtils::badArgumentsException(context,
			"QSettings::setDefaultFormat");
	return __e->uncaughtException();
}

QScriptValue QtScriptQSettings::setPath(QScriptContext *context, QScriptEngine* __e)
{
	if (!QtScriptUtils::checkArgumentCount(context, 3, 3))
	{
		return __e->uncaughtException();
	}

	switch (context->argumentCount())
	{
		case 3:
		{
			auto tmp_0 = qscriptvalue_cast<int>(context->argument(0));
			auto arg0 = QSettings::Format(tmp_0);
			auto tmp_1 = qscriptvalue_cast<int>(context->argument(1));
			auto arg1 = QSettings::Scope(tmp_1);
			auto arg2 = qscriptvalue_cast<QString>(context->argument(2));
			QSettings::setPath(arg0, arg1, arg2);
			return __e->undefinedValue();
		}
	}

	QtScriptUtils::badArgumentsException(context,
			"QSettings::setPath");
	return __e->uncaughtException();
}

int QtScriptQSettings::constructorArgumentCountMin() const
{
	return 0;
}

int QtScriptQSettings::constructorArgumentCountMax() const
{
	return 5;
}

bool QtScriptQSettings::constructObject(QScriptContext *context, NativeObjectType &out)
{
	auto __e = context->engine();
	Q_UNUSED(__e);
	bool ok = false;
	switch (context->argumentCount())
	{
		case 0:
		{
			out = new QSettings();
			ok = true;
			break;
		}
		case 1:
		{
			auto arg0 = qscriptvalue_cast<QString>(context->argument(0));
			out = new QSettings(arg0);
			ok = true;
			break;
		}
		case 2:
		{
			auto arg0 = qscriptvalue_cast<QString>(context->argument(0));
			auto arg1 = qscriptvalue_cast<QString>(context->argument(1));
			out = new QSettings(arg0, arg1);
			ok = true;
			break;
		}
		case 3:
		{
			auto arg0 = qscriptvalue_cast<QString>(context->argument(0));
			auto arg1 = qscriptvalue_cast<QString>(context->argument(1));
			auto arg2 = qscriptvalue_cast<QObject*>(context->argument(2));
			out = new QSettings(arg0, arg1, arg2);
			ok = true;
			break;
		}
		case 4:
		{
			auto tmp_0 = qscriptvalue_cast<int>(context->argument(0));
			auto arg0 = QSettings::Scope(tmp_0);
			auto arg1 = qscriptvalue_cast<QString>(context->argument(1));
			auto arg2 = qscriptvalue_cast<QString>(context->argument(2));
			auto arg3 = qscriptvalue_cast<QObject*>(context->argument(3));
			out = new QSettings(arg0, arg1, arg2, arg3);
			ok = true;
			break;
		}
		case 5:
		{
			auto tmp_0 = qscriptvalue_cast<int>(context->argument(0));
			auto arg0 = QSettings::Format(tmp_0);
			auto tmp_1 = qscriptvalue_cast<int>(context->argument(1));
			auto arg1 = QSettings::Scope(tmp_1);
			auto arg2 = qscriptvalue_cast<QString>(context->argument(2));
			auto arg3 = qscriptvalue_cast<QString>(context->argument(3));
			auto arg4 = qscriptvalue_cast<QObject*>(context->argument(4));
			out = new QSettings(arg0, arg1, arg2, arg3, arg4);
			ok = true;
			break;
		}
	}
	
	if (!ok)
	{
		QtScriptUtils::badArgumentsException(context,
			"QSettings constructor");
	}
	return ok;
}

QtScriptQStandardPaths::QtScriptQStandardPaths(QScriptEngine *engine, const QByteArray &className)
	: QtScriptBaseClassPrototype<QStandardPaths *, true>(engine, className)
{
}

QtScriptQStandardPaths::QtScriptQStandardPaths(QScriptEngine *engine)
	: QtScriptQStandardPaths(engine, "StandardPaths")
{
}

void QtScriptQStandardPaths::Register(const QScriptValue &targetNamespace)
{
	auto engine = targetNamespace.engine();
	Q_ASSERT(engine);
	QScriptValue inherit;
	auto ctor = RegisterT<QStandardPaths, QtScriptQStandardPaths>(targetNamespace, inherit);
	Q_ASSERT(ctor.isFunction());
	ctor.setProperty("locate", engine->newFunction(
		static_cast<QScriptValue (*)(QScriptContext *, QScriptEngine *)>(
			&QtScriptQStandardPaths::locate)),
			QScriptValue::ReadOnly | QScriptValue::Undeletable);
	ctor.setProperty("displayName", engine->newFunction(
		static_cast<QScriptValue (*)(QScriptContext *, QScriptEngine *)>(
			&QtScriptQStandardPaths::displayName)),
			QScriptValue::ReadOnly | QScriptValue::Undeletable);
	ctor.setProperty("setTestModeEnabled", engine->newFunction(
		static_cast<QScriptValue (*)(QScriptContext *, QScriptEngine *)>(
			&QtScriptQStandardPaths::setTestModeEnabled)),
			QScriptValue::ReadOnly | QScriptValue::Undeletable);
	ctor.setProperty("enableTestMode", engine->newFunction(
		static_cast<QScriptValue (*)(QScriptContext *, QScriptEngine *)>(
			&QtScriptQStandardPaths::enableTestMode)),
			QScriptValue::ReadOnly | QScriptValue::Undeletable);
	ctor.setProperty("writableLocation", engine->newFunction(
		static_cast<QScriptValue (*)(QScriptContext *, QScriptEngine *)>(
			&QtScriptQStandardPaths::writableLocation)),
			QScriptValue::ReadOnly | QScriptValue::Undeletable);
	ctor.setProperty("findExecutable", engine->newFunction(
		static_cast<QScriptValue (*)(QScriptContext *, QScriptEngine *)>(
			&QtScriptQStandardPaths::findExecutable)),
			QScriptValue::ReadOnly | QScriptValue::Undeletable);
	ctor.setProperty("standardLocations", engine->newFunction(
		static_cast<QScriptValue (*)(QScriptContext *, QScriptEngine *)>(
			&QtScriptQStandardPaths::standardLocations)),
			QScriptValue::ReadOnly | QScriptValue::Undeletable);
	ctor.setProperty("locateAll", engine->newFunction(
		static_cast<QScriptValue (*)(QScriptContext *, QScriptEngine *)>(
			&QtScriptQStandardPaths::locateAll)),
			QScriptValue::ReadOnly | QScriptValue::Undeletable);
	ctor.setProperty("isTestModeEnabled", engine->newFunction(
		static_cast<QScriptValue (*)(QScriptContext *, QScriptEngine *)>(
			&QtScriptQStandardPaths::isTestModeEnabled)),
			QScriptValue::ReadOnly | QScriptValue::Undeletable);
}

int QtScriptQStandardPaths::constructorArgumentCountMin() const
{
	return 0;
}

int QtScriptQStandardPaths::constructorArgumentCountMax() const
{
	return 0;
}

bool QtScriptQStandardPaths::constructObject(QScriptContext *context, NativeObjectType &)
{
	QtScriptUtils::noPublicConstructorException(context,
		"QStandardPaths");
	return false;
}

QScriptValue QtScriptQStandardPaths::locate(QScriptContext *context, QScriptEngine* __e)
{
	if (!QtScriptUtils::checkArgumentCount(context, 2, 3))
	{
		return __e->uncaughtException();
	}

	switch (context->argumentCount())
	{
		case 2:
		{
			auto tmp_0 = qscriptvalue_cast<int>(context->argument(0));
			auto arg0 = QStandardPaths::StandardLocation(tmp_0);
			auto arg1 = qscriptvalue_cast<QString>(context->argument(1));
			return __e->toScriptValue(QStandardPaths::locate(arg0, arg1));
		}
		case 3:
		{
			auto tmp_0 = qscriptvalue_cast<int>(context->argument(0));
			auto arg0 = QStandardPaths::StandardLocation(tmp_0);
			auto arg1 = qscriptvalue_cast<QString>(context->argument(1));
			auto tmp_2 = qscriptvalue_cast<int>(context->argument(2));
			auto arg2 = QFlags<QStandardPaths::LocateOption>(tmp_2);
			return __e->toScriptValue(QStandardPaths::locate(arg0, arg1, arg2));
		}
	}

	QtScriptUtils::badArgumentsException(context,
			"QStandardPaths::locate");
	return __e->uncaughtException();
}

QScriptValue QtScriptQStandardPaths::displayName(QScriptContext *context, QScriptEngine* __e)
{
	if (!QtScriptUtils::checkArgumentCount(context, 1, 1))
	{
		return __e->uncaughtException();
	}

	switch (context->argumentCount())
	{
		case 1:
		{
			auto tmp_0 = qscriptvalue_cast<int>(context->argument(0));
			auto arg0 = QStandardPaths::StandardLocation(tmp_0);
			return __e->toScriptValue(QStandardPaths::displayName(arg0));
		}
	}

	QtScriptUtils::badArgumentsException(context,
			"QStandardPaths::displayName");
	return __e->uncaughtException();
}

QScriptValue QtScriptQStandardPaths::setTestModeEnabled(QScriptContext *context, QScriptEngine* __e)
{
	if (!QtScriptUtils::checkArgumentCount(context, 1, 1))
	{
		return __e->uncaughtException();
	}

	switch (context->argumentCount())
	{
		case 1:
		{
			auto arg0 = qscriptvalue_cast<bool>(context->argument(0));
			QStandardPaths::setTestModeEnabled(arg0);
			return __e->undefinedValue();
		}
	}

	QtScriptUtils::badArgumentsException(context,
			"QStandardPaths::setTestModeEnabled");
	return __e->uncaughtException();
}

QScriptValue QtScriptQStandardPaths::enableTestMode(QScriptContext *context, QScriptEngine* __e)
{
	if (!QtScriptUtils::checkArgumentCount(context, 1, 1))
	{
		return __e->uncaughtException();
	}

	switch (context->argumentCount())
	{
		case 1:
		{
			auto arg0 = qscriptvalue_cast<bool>(context->argument(0));
			QStandardPaths::enableTestMode(arg0);
			return __e->undefinedValue();
		}
	}

	QtScriptUtils::badArgumentsException(context,
			"QStandardPaths::enableTestMode");
	return __e->uncaughtException();
}

QScriptValue QtScriptQStandardPaths::writableLocation(QScriptContext *context, QScriptEngine* __e)
{
	if (!QtScriptUtils::checkArgumentCount(context, 1, 1))
	{
		return __e->uncaughtException();
	}

	switch (context->argumentCount())
	{
		case 1:
		{
			auto tmp_0 = qscriptvalue_cast<int>(context->argument(0));
			auto arg0 = QStandardPaths::StandardLocation(tmp_0);
			return __e->toScriptValue(QStandardPaths::writableLocation(arg0));
		}
	}

	QtScriptUtils::badArgumentsException(context,
			"QStandardPaths::writableLocation");
	return __e->uncaughtException();
}

QScriptValue QtScriptQStandardPaths::findExecutable(QScriptContext *context, QScriptEngine* __e)
{
	if (!QtScriptUtils::checkArgumentCount(context, 1, 2))
	{
		return __e->uncaughtException();
	}

	switch (context->argumentCount())
	{
		case 1:
		{
			auto arg0 = qscriptvalue_cast<QString>(context->argument(0));
			return __e->toScriptValue(QStandardPaths::findExecutable(arg0));
		}
		case 2:
		{
			auto arg0 = qscriptvalue_cast<QString>(context->argument(0));
			auto arg1 = qscriptvalue_cast<QStringList>(context->argument(1));
			return __e->toScriptValue(QStandardPaths::findExecutable(arg0, arg1));
		}
	}

	QtScriptUtils::badArgumentsException(context,
			"QStandardPaths::findExecutable");
	return __e->uncaughtException();
}

QScriptValue QtScriptQStandardPaths::standardLocations(QScriptContext *context, QScriptEngine* __e)
{
	if (!QtScriptUtils::checkArgumentCount(context, 1, 1))
	{
		return __e->uncaughtException();
	}

	switch (context->argumentCount())
	{
		case 1:
		{
			auto tmp_0 = qscriptvalue_cast<int>(context->argument(0));
			auto arg0 = QStandardPaths::StandardLocation(tmp_0);
			return __e->toScriptValue(QStandardPaths::standardLocations(arg0));
		}
	}

	QtScriptUtils::badArgumentsException(context,
			"QStandardPaths::standardLocations");
	return __e->uncaughtException();
}

QScriptValue QtScriptQStandardPaths::locateAll(QScriptContext *context, QScriptEngine* __e)
{
	if (!QtScriptUtils::checkArgumentCount(context, 2, 3))
	{
		return __e->uncaughtException();
	}

	switch (context->argumentCount())
	{
		case 2:
		{
			auto tmp_0 = qscriptvalue_cast<int>(context->argument(0));
			auto arg0 = QStandardPaths::StandardLocation(tmp_0);
			auto arg1 = qscriptvalue_cast<QString>(context->argument(1));
			return __e->toScriptValue(QStandardPaths::locateAll(arg0, arg1));
		}
		case 3:
		{
			auto tmp_0 = qscriptvalue_cast<int>(context->argument(0));
			auto arg0 = QStandardPaths::StandardLocation(tmp_0);
			auto arg1 = qscriptvalue_cast<QString>(context->argument(1));
			auto tmp_2 = qscriptvalue_cast<int>(context->argument(2));
			auto arg2 = QFlags<QStandardPaths::LocateOption>(tmp_2);
			return __e->toScriptValue(QStandardPaths::locateAll(arg0, arg1, arg2));
		}
	}

	QtScriptUtils::badArgumentsException(context,
			"QStandardPaths::locateAll");
	return __e->uncaughtException();
}

QScriptValue QtScriptQStandardPaths::isTestModeEnabled(QScriptContext *context, QScriptEngine* __e)
{
	if (!QtScriptUtils::checkArgumentCount(context, 0, 0))
	{
		return __e->uncaughtException();
	}

	switch (context->argumentCount())
	{
		case 0:
		{
			return __e->toScriptValue(QStandardPaths::isTestModeEnabled());
		}
	}

	QtScriptUtils::badArgumentsException(context,
			"QStandardPaths::isTestModeEnabled");
	return __e->uncaughtException();
}

QtScriptQTemporaryDir::QtScriptQTemporaryDir(QScriptEngine *engine, const QByteArray &className)
	: QtScriptBaseClassPrototype<QTemporaryDir *, false>(engine, className)
{
}

QtScriptQTemporaryDir::QtScriptQTemporaryDir(QScriptEngine *engine)
	: QtScriptQTemporaryDir(engine, "TemporaryDir")
{
}

void QtScriptQTemporaryDir::Register(const QScriptValue &targetNamespace)
{
	auto engine = targetNamespace.engine();
	Q_ASSERT(engine);
	QScriptValue inherit;
	auto ctor = RegisterT<QTemporaryDir, QtScriptQTemporaryDir>(targetNamespace, inherit);
	Q_ASSERT(ctor.isFunction());
}

bool QtScriptQTemporaryDir::autoRemove()
{
	auto __o = this->thiz<QTemporaryDir *>();
	if (__o)
	{
		return __o->autoRemove();
	}
	return false;
}

void QtScriptQTemporaryDir::setAutoRemove(bool b)
{
	auto __o = this->thiz<QTemporaryDir *>();
	if (__o)
	{
		__o->setAutoRemove(b);
	}
}

QString QtScriptQTemporaryDir::errorString()
{
	auto __o = this->thiz<QTemporaryDir *>();
	if (__o)
	{
		return __o->errorString();
	}
	return QString();
}

QString QtScriptQTemporaryDir::filePath(const QString& fileName)
{
	auto __o = this->thiz<QTemporaryDir *>();
	if (__o)
	{
		return __o->filePath(fileName);
	}
	return QString();
}

bool QtScriptQTemporaryDir::isValid()
{
	auto __o = this->thiz<QTemporaryDir *>();
	if (__o)
	{
		return __o->isValid();
	}
	return false;
}

bool QtScriptQTemporaryDir::remove()
{
	auto __o = this->thiz<QTemporaryDir *>();
	if (__o)
	{
		return __o->remove();
	}
	return false;
}

QString QtScriptQTemporaryDir::path()
{
	auto __o = this->thiz<QTemporaryDir *>();
	if (__o)
	{
		return __o->path();
	}
	return QString();
}

int QtScriptQTemporaryDir::constructorArgumentCountMin() const
{
	return 0;
}

int QtScriptQTemporaryDir::constructorArgumentCountMax() const
{
	return 1;
}

bool QtScriptQTemporaryDir::constructObject(QScriptContext *context, NativeObjectType &out)
{
	auto __e = context->engine();
	Q_UNUSED(__e);
	bool ok = false;
	switch (context->argumentCount())
	{
		case 0:
		{
			out = new QTemporaryDir();
			ok = true;
			break;
		}
		case 1:
		{
			auto arg0 = qscriptvalue_cast<QString>(context->argument(0));
			out = new QTemporaryDir(arg0);
			ok = true;
			break;
		}
	}
	
	if (!ok)
	{
		QtScriptUtils::badArgumentsException(context,
			"QTemporaryDir constructor");
	}
	return ok;
}

QtScriptQTemporaryFile::QtScriptQTemporaryFile(QScriptEngine *engine, const QByteArray &className)
	: QtScriptQFile(engine, className)
{
}

QtScriptQTemporaryFile::QtScriptQTemporaryFile(QScriptEngine *engine)
	: QtScriptQTemporaryFile(engine, "TemporaryFile")
{
}

void QtScriptQTemporaryFile::Register(const QScriptValue &targetNamespace)
{
	auto engine = targetNamespace.engine();
	Q_ASSERT(engine);
	auto inherit = engine->defaultPrototype(qMetaTypeId<QFile *>());
	auto ctor = RegisterT<QTemporaryFile, QtScriptQTemporaryFile>(targetNamespace, inherit);
	Q_ASSERT(ctor.isFunction());
	ctor.setProperty("createNativeFile", engine->newFunction(
		static_cast<QScriptValue (*)(QScriptContext *, QScriptEngine *)>(
			&QtScriptQTemporaryFile::createNativeFile)),
			QScriptValue::ReadOnly | QScriptValue::Undeletable);
	ctor.setProperty("createLocalFile", engine->newFunction(
		static_cast<QScriptValue (*)(QScriptContext *, QScriptEngine *)>(
			&QtScriptQTemporaryFile::createLocalFile)),
			QScriptValue::ReadOnly | QScriptValue::Undeletable);
}

bool QtScriptQTemporaryFile::open()
{
	auto __o = this->thiz<QTemporaryFile *>();
	if (__o)
	{
		return __o->open();
	}
	return false;
}

bool QtScriptQTemporaryFile::autoRemove()
{
	auto __o = this->thiz<QTemporaryFile *>();
	if (__o)
	{
		return __o->autoRemove();
	}
	return false;
}

void QtScriptQTemporaryFile::setAutoRemove(bool b)
{
	auto __o = this->thiz<QTemporaryFile *>();
	if (__o)
	{
		__o->setAutoRemove(b);
	}
}

void QtScriptQTemporaryFile::setFileTemplate(const QString& name)
{
	auto __o = this->thiz<QTemporaryFile *>();
	if (__o)
	{
		__o->setFileTemplate(name);
	}
}

QString QtScriptQTemporaryFile::fileTemplate()
{
	auto __o = this->thiz<QTemporaryFile *>();
	if (__o)
	{
		return __o->fileTemplate();
	}
	return QString();
}

QScriptValue QtScriptQTemporaryFile::createNativeFile(QScriptContext *context, QScriptEngine* __e)
{
	if (!QtScriptUtils::checkArgumentCount(context, 1, 1))
	{
		return __e->uncaughtException();
	}

	switch (context->argumentCount())
	{
		case 1:
		{
			auto arg0 = qscriptvalue_cast<QString>(context->argument(0));
			return __e->toScriptValue(QTemporaryFile::createNativeFile(arg0));
		}
	}

	QtScriptUtils::badArgumentsException(context,
			"QTemporaryFile::createNativeFile");
	return __e->uncaughtException();
}

QScriptValue QtScriptQTemporaryFile::createLocalFile(QScriptContext *context, QScriptEngine* __e)
{
	if (!QtScriptUtils::checkArgumentCount(context, 1, 1))
	{
		return __e->uncaughtException();
	}

	switch (context->argumentCount())
	{
		case 1:
		{
			auto arg0 = qscriptvalue_cast<QString>(context->argument(0));
			return __e->toScriptValue(QTemporaryFile::createLocalFile(arg0));
		}
	}

	QtScriptUtils::badArgumentsException(context,
			"QTemporaryFile::createLocalFile");
	return __e->uncaughtException();
}

int QtScriptQTemporaryFile::constructorArgumentCountMin() const
{
	return 0;
}

int QtScriptQTemporaryFile::constructorArgumentCountMax() const
{
	return 2;
}

bool QtScriptQTemporaryFile::constructObject(QScriptContext *context, NativeObjectType &out)
{
	auto __e = context->engine();
	Q_UNUSED(__e);
	bool ok = false;
	switch (context->argumentCount())
	{
		case 0:
		{
			out = new QTemporaryFile();
			ok = true;
			break;
		}
		case 1:
		{
			auto arg0 = qscriptvalue_cast<QString>(context->argument(0));
			out = new QTemporaryFile(arg0);
			ok = true;
			break;
		}
		case 2:
		{
			auto arg0 = qscriptvalue_cast<QString>(context->argument(0));
			auto arg1 = qscriptvalue_cast<QObject*>(context->argument(1));
			out = new QTemporaryFile(arg0, arg1);
			ok = true;
			break;
		}
	}
	
	if (!ok)
	{
		QtScriptUtils::badArgumentsException(context,
			"QTemporaryFile constructor");
	}
	return ok;
}

QtScriptQTextCodec::QtScriptQTextCodec(QScriptEngine *engine, const QByteArray &className)
	: QtScriptBaseClassPrototype<QTextCodec *, true>(engine, className)
{
}

QtScriptQTextCodec::QtScriptQTextCodec(QScriptEngine *engine)
	: QtScriptQTextCodec(engine, "TextCodec")
{
}

void QtScriptQTextCodec::Register(const QScriptValue &targetNamespace)
{
	auto engine = targetNamespace.engine();
	Q_ASSERT(engine);
	QScriptValue inherit;
	auto ctor = RegisterT<QTextCodec, QtScriptQTextCodec>(targetNamespace, inherit);
	Q_ASSERT(ctor.isFunction());
	ctor.setProperty("codecForHtml", engine->newFunction(
		static_cast<QScriptValue (*)(QScriptContext *, QScriptEngine *)>(
			&QtScriptQTextCodec::codecForHtml)),
			QScriptValue::ReadOnly | QScriptValue::Undeletable);
	ctor.setProperty("codecForName", engine->newFunction(
		static_cast<QScriptValue (*)(QScriptContext *, QScriptEngine *)>(
			&QtScriptQTextCodec::codecForName)),
			QScriptValue::ReadOnly | QScriptValue::Undeletable);
	ctor.setProperty("codecForLocale", engine->newFunction(
		static_cast<QScriptValue (*)(QScriptContext *, QScriptEngine *)>(
			&QtScriptQTextCodec::codecForLocale)),
			QScriptValue::ReadOnly | QScriptValue::Undeletable);
	ctor.setProperty("setCodecForLocale", engine->newFunction(
		static_cast<QScriptValue (*)(QScriptContext *, QScriptEngine *)>(
			&QtScriptQTextCodec::setCodecForLocale)),
			QScriptValue::ReadOnly | QScriptValue::Undeletable);
	ctor.setProperty("codecForUtfText", engine->newFunction(
		static_cast<QScriptValue (*)(QScriptContext *, QScriptEngine *)>(
			&QtScriptQTextCodec::codecForUtfText)),
			QScriptValue::ReadOnly | QScriptValue::Undeletable);
	ctor.setProperty("availableMibs", engine->newFunction(
		static_cast<QScriptValue (*)(QScriptContext *, QScriptEngine *)>(
			&QtScriptQTextCodec::availableMibs)),
			QScriptValue::ReadOnly | QScriptValue::Undeletable);
	ctor.setProperty("codecForMib", engine->newFunction(
		static_cast<QScriptValue (*)(QScriptContext *, QScriptEngine *)>(
			&QtScriptQTextCodec::codecForMib)),
			QScriptValue::ReadOnly | QScriptValue::Undeletable);
	ctor.setProperty("availableCodecs", engine->newFunction(
		static_cast<QScriptValue (*)(QScriptContext *, QScriptEngine *)>(
			&QtScriptQTextCodec::availableCodecs)),
			QScriptValue::ReadOnly | QScriptValue::Undeletable);
}

int QtScriptQTextCodec::constructorArgumentCountMin() const
{
	return 0;
}

int QtScriptQTextCodec::constructorArgumentCountMax() const
{
	return 0;
}

bool QtScriptQTextCodec::constructObject(QScriptContext *context, NativeObjectType &)
{
	QtScriptUtils::noPublicConstructorException(context,
		"QTextCodec");
	return false;
}

bool QtScriptQTextCodec::canEncode(QChar arg0)
{
	auto __o = this->thiz<QTextCodec *>();
	if (__o)
	{
		return __o->canEncode(arg0);
	}
	return false;
}

QTextDecoder* QtScriptQTextCodec::makeDecoder()
{
	auto __o = this->thiz<QTextCodec *>();
	if (__o)
	{
		return __o->makeDecoder();
	}
	return nullptr;
}

QTextDecoder* QtScriptQTextCodec::makeDecoder(int flags)
{
	auto __o = this->thiz<QTextCodec *>();
	if (__o)
	{
		return __o->makeDecoder(QFlags<QTextCodec::ConversionFlag>(flags));
	}
	return nullptr;
}

QString QtScriptQTextCodec::toUnicode(const QByteArray& arg0)
{
	auto __o = this->thiz<QTextCodec *>();
	if (__o)
	{
		return __o->toUnicode(arg0);
	}
	return QString();
}

QTextEncoder* QtScriptQTextCodec::makeEncoder()
{
	auto __o = this->thiz<QTextCodec *>();
	if (__o)
	{
		return __o->makeEncoder();
	}
	return nullptr;
}

QTextEncoder* QtScriptQTextCodec::makeEncoder(int flags)
{
	auto __o = this->thiz<QTextCodec *>();
	if (__o)
	{
		return __o->makeEncoder(QFlags<QTextCodec::ConversionFlag>(flags));
	}
	return nullptr;
}

QByteArray QtScriptQTextCodec::fromUnicode(const QString& uc)
{
	auto __o = this->thiz<QTextCodec *>();
	if (__o)
	{
		return __o->fromUnicode(uc);
	}
	return QByteArray();
}

QList<QByteArray> QtScriptQTextCodec::aliases()
{
	auto __o = this->thiz<QTextCodec *>();
	if (__o)
	{
		return __o->aliases();
	}
	return QList<QByteArray>();
}

QScriptValue QtScriptQTextCodec::codecForHtml(QScriptContext *context, QScriptEngine* __e)
{
	if (!QtScriptUtils::checkArgumentCount(context, 1, 2))
	{
		return __e->uncaughtException();
	}

	switch (context->argumentCount())
	{
		case 1:
		{
			auto arg0 = qscriptvalue_cast<QByteArray>(context->argument(0));
			return __e->toScriptValue(QTextCodec::codecForHtml(arg0));
		}
		case 2:
		{
			auto arg0 = qscriptvalue_cast<QByteArray>(context->argument(0));
			auto arg1 = qscriptvalue_cast<QTextCodec*>(context->argument(1));
			return __e->toScriptValue(QTextCodec::codecForHtml(arg0, arg1));
		}
	}

	QtScriptUtils::badArgumentsException(context,
			"QTextCodec::codecForHtml");
	return __e->uncaughtException();
}

QScriptValue QtScriptQTextCodec::codecForName(QScriptContext *context, QScriptEngine* __e)
{
	if (!QtScriptUtils::checkArgumentCount(context, 1, 1))
	{
		return __e->uncaughtException();
	}

	switch (context->argumentCount())
	{
		case 1:
		{
			auto arg0 = qscriptvalue_cast<QByteArray>(context->argument(0));
			return __e->toScriptValue(QTextCodec::codecForName(arg0));
		}
	}

	QtScriptUtils::badArgumentsException(context,
			"QTextCodec::codecForName");
	return __e->uncaughtException();
}

QScriptValue QtScriptQTextCodec::codecForLocale(QScriptContext *context, QScriptEngine* __e)
{
	if (!QtScriptUtils::checkArgumentCount(context, 0, 0))
	{
		return __e->uncaughtException();
	}

	switch (context->argumentCount())
	{
		case 0:
		{
			return __e->toScriptValue(QTextCodec::codecForLocale());
		}
	}

	QtScriptUtils::badArgumentsException(context,
			"QTextCodec::codecForLocale");
	return __e->uncaughtException();
}

QScriptValue QtScriptQTextCodec::setCodecForLocale(QScriptContext *context, QScriptEngine* __e)
{
	if (!QtScriptUtils::checkArgumentCount(context, 1, 1))
	{
		return __e->uncaughtException();
	}

	switch (context->argumentCount())
	{
		case 1:
		{
			auto arg0 = qscriptvalue_cast<QTextCodec*>(context->argument(0));
			QTextCodec::setCodecForLocale(arg0);
			return __e->undefinedValue();
		}
	}

	QtScriptUtils::badArgumentsException(context,
			"QTextCodec::setCodecForLocale");
	return __e->uncaughtException();
}

QScriptValue QtScriptQTextCodec::codecForUtfText(QScriptContext *context, QScriptEngine* __e)
{
	if (!QtScriptUtils::checkArgumentCount(context, 1, 2))
	{
		return __e->uncaughtException();
	}

	switch (context->argumentCount())
	{
		case 1:
		{
			auto arg0 = qscriptvalue_cast<QByteArray>(context->argument(0));
			return __e->toScriptValue(QTextCodec::codecForUtfText(arg0));
		}
		case 2:
		{
			auto arg0 = qscriptvalue_cast<QByteArray>(context->argument(0));
			auto arg1 = qscriptvalue_cast<QTextCodec*>(context->argument(1));
			return __e->toScriptValue(QTextCodec::codecForUtfText(arg0, arg1));
		}
	}

	QtScriptUtils::badArgumentsException(context,
			"QTextCodec::codecForUtfText");
	return __e->uncaughtException();
}

QScriptValue QtScriptQTextCodec::availableMibs(QScriptContext *context, QScriptEngine* __e)
{
	if (!QtScriptUtils::checkArgumentCount(context, 0, 0))
	{
		return __e->uncaughtException();
	}

	switch (context->argumentCount())
	{
		case 0:
		{
			return __e->toScriptValue(QTextCodec::availableMibs());
		}
	}

	QtScriptUtils::badArgumentsException(context,
			"QTextCodec::availableMibs");
	return __e->uncaughtException();
}

QScriptValue QtScriptQTextCodec::codecForMib(QScriptContext *context, QScriptEngine* __e)
{
	if (!QtScriptUtils::checkArgumentCount(context, 1, 1))
	{
		return __e->uncaughtException();
	}

	switch (context->argumentCount())
	{
		case 1:
		{
			auto arg0 = qscriptvalue_cast<int>(context->argument(0));
			return __e->toScriptValue(QTextCodec::codecForMib(arg0));
		}
	}

	QtScriptUtils::badArgumentsException(context,
			"QTextCodec::codecForMib");
	return __e->uncaughtException();
}

QScriptValue QtScriptQTextCodec::availableCodecs(QScriptContext *context, QScriptEngine* __e)
{
	if (!QtScriptUtils::checkArgumentCount(context, 0, 0))
	{
		return __e->uncaughtException();
	}

	switch (context->argumentCount())
	{
		case 0:
		{
			return __e->toScriptValue(QTextCodec::availableCodecs());
		}
	}

	QtScriptUtils::badArgumentsException(context,
			"QTextCodec::availableCodecs");
	return __e->uncaughtException();
}

QtScriptQTextEncoder::QtScriptQTextEncoder(QScriptEngine *engine, const QByteArray &className)
	: QtScriptBaseClassPrototype<QTextEncoder *, false>(engine, className)
{
}

QtScriptQTextEncoder::QtScriptQTextEncoder(QScriptEngine *engine)
	: QtScriptQTextEncoder(engine, "TextEncoder")
{
}

void QtScriptQTextEncoder::Register(const QScriptValue &targetNamespace)
{
	auto engine = targetNamespace.engine();
	Q_ASSERT(engine);
	QScriptValue inherit;
	auto ctor = RegisterT<QTextEncoder, QtScriptQTextEncoder>(targetNamespace, inherit);
	Q_ASSERT(ctor.isFunction());
}

QByteArray QtScriptQTextEncoder::fromUnicode(const QString& str)
{
	auto __o = this->thiz<QTextEncoder *>();
	if (__o)
	{
		return __o->fromUnicode(str);
	}
	return QByteArray();
}

bool QtScriptQTextEncoder::hasFailure()
{
	auto __o = this->thiz<QTextEncoder *>();
	if (__o)
	{
		return __o->hasFailure();
	}
	return false;
}

int QtScriptQTextEncoder::constructorArgumentCountMin() const
{
	return 1;
}

int QtScriptQTextEncoder::constructorArgumentCountMax() const
{
	return 2;
}

bool QtScriptQTextEncoder::constructObject(QScriptContext *context, NativeObjectType &out)
{
	auto __e = context->engine();
	Q_UNUSED(__e);
	bool ok = false;
	switch (context->argumentCount())
	{
		case 1:
		{
			auto arg0 = qscriptvalue_cast<const QTextCodec*>(context->argument(0));
			out = new QTextEncoder(arg0);
			ok = true;
			break;
		}
		case 2:
		{
			auto arg0 = qscriptvalue_cast<const QTextCodec*>(context->argument(0));
			auto tmp_1 = qscriptvalue_cast<int>(context->argument(1));
			auto arg1 = QFlags<QTextCodec::ConversionFlag>(tmp_1);
			out = new QTextEncoder(arg0, arg1);
			ok = true;
			break;
		}
	}
	
	if (!ok)
	{
		QtScriptUtils::badArgumentsException(context,
			"QTextEncoder constructor");
	}
	return ok;
}

QtScriptQTextDecoder::QtScriptQTextDecoder(QScriptEngine *engine, const QByteArray &className)
	: QtScriptBaseClassPrototype<QTextDecoder *, false>(engine, className)
{
}

QtScriptQTextDecoder::QtScriptQTextDecoder(QScriptEngine *engine)
	: QtScriptQTextDecoder(engine, "TextDecoder")
{
}

void QtScriptQTextDecoder::Register(const QScriptValue &targetNamespace)
{
	auto engine = targetNamespace.engine();
	Q_ASSERT(engine);
	QScriptValue inherit;
	auto ctor = RegisterT<QTextDecoder, QtScriptQTextDecoder>(targetNamespace, inherit);
	Q_ASSERT(ctor.isFunction());
}

bool QtScriptQTextDecoder::hasFailure()
{
	auto __o = this->thiz<QTextDecoder *>();
	if (__o)
	{
		return __o->hasFailure();
	}
	return false;
}

QString QtScriptQTextDecoder::toUnicode(const QByteArray& ba)
{
	auto __o = this->thiz<QTextDecoder *>();
	if (__o)
	{
		return __o->toUnicode(ba);
	}
	return QString();
}

int QtScriptQTextDecoder::constructorArgumentCountMin() const
{
	return 1;
}

int QtScriptQTextDecoder::constructorArgumentCountMax() const
{
	return 2;
}

bool QtScriptQTextDecoder::constructObject(QScriptContext *context, NativeObjectType &out)
{
	auto __e = context->engine();
	Q_UNUSED(__e);
	bool ok = false;
	switch (context->argumentCount())
	{
		case 1:
		{
			auto arg0 = qscriptvalue_cast<const QTextCodec*>(context->argument(0));
			out = new QTextDecoder(arg0);
			ok = true;
			break;
		}
		case 2:
		{
			auto arg0 = qscriptvalue_cast<const QTextCodec*>(context->argument(0));
			auto tmp_1 = qscriptvalue_cast<int>(context->argument(1));
			auto arg1 = QFlags<QTextCodec::ConversionFlag>(tmp_1);
			out = new QTextDecoder(arg0, arg1);
			ok = true;
			break;
		}
	}
	
	if (!ok)
	{
		QtScriptUtils::badArgumentsException(context,
			"QTextDecoder constructor");
	}
	return ok;
}

QtScriptQTimeLine::QtScriptQTimeLine(QScriptEngine *engine, const QByteArray &className)
	: QtScriptQObject(engine, className)
{
}

QtScriptQTimeLine::QtScriptQTimeLine(QScriptEngine *engine)
	: QtScriptQTimeLine(engine, "TimeLine")
{
}

void QtScriptQTimeLine::Register(const QScriptValue &targetNamespace)
{
	auto engine = targetNamespace.engine();
	Q_ASSERT(engine);
	auto inherit = engine->defaultPrototype(qMetaTypeId<QObject *>());
	auto ctor = RegisterT<QTimeLine, QtScriptQTimeLine>(targetNamespace, inherit);
	Q_ASSERT(ctor.isFunction());
}

void QtScriptQTimeLine::toggleDirection()
{
	auto __o = this->thiz<QTimeLine *>();
	if (__o)
	{
		__o->toggleDirection();
	}
}

void QtScriptQTimeLine::setCurveShape(int shape)
{
	auto __o = this->thiz<QTimeLine *>();
	if (__o)
	{
		__o->setCurveShape(QTimeLine::CurveShape(shape));
	}
}

qreal QtScriptQTimeLine::currentValue()
{
	auto __o = this->thiz<QTimeLine *>();
	if (__o)
	{
		return __o->currentValue();
	}
	return static_cast<qreal>(0);
}

void QtScriptQTimeLine::setEasingCurve(const QEasingCurve& curve)
{
	auto __o = this->thiz<QTimeLine *>();
	if (__o)
	{
		__o->setEasingCurve(curve);
	}
}

void QtScriptQTimeLine::setCurrentTime(int msec)
{
	auto __o = this->thiz<QTimeLine *>();
	if (__o)
	{
		__o->setCurrentTime(msec);
	}
}

void QtScriptQTimeLine::setFrameRange(int startFrame, int endFrame)
{
	auto __o = this->thiz<QTimeLine *>();
	if (__o)
	{
		__o->setFrameRange(startFrame, endFrame);
	}
}

int QtScriptQTimeLine::duration()
{
	auto __o = this->thiz<QTimeLine *>();
	if (__o)
	{
		return __o->duration();
	}
	return 0;
}

int QtScriptQTimeLine::loopCount()
{
	auto __o = this->thiz<QTimeLine *>();
	if (__o)
	{
		return __o->loopCount();
	}
	return 0;
}

void QtScriptQTimeLine::setDirection(int direction)
{
	auto __o = this->thiz<QTimeLine *>();
	if (__o)
	{
		__o->setDirection(QTimeLine::Direction(direction));
	}
}

qreal QtScriptQTimeLine::valueForTime(int msec)
{
	auto __o = this->thiz<QTimeLine *>();
	if (__o)
	{
		return __o->valueForTime(msec);
	}
	return static_cast<qreal>(0);
}

void QtScriptQTimeLine::start()
{
	auto __o = this->thiz<QTimeLine *>();
	if (__o)
	{
		__o->start();
	}
}

int QtScriptQTimeLine::state()
{
	auto __o = this->thiz<QTimeLine *>();
	if (__o)
	{
		return int(__o->state());
	}
	return 0;
}

int QtScriptQTimeLine::direction()
{
	auto __o = this->thiz<QTimeLine *>();
	if (__o)
	{
		return int(__o->direction());
	}
	return 0;
}

void QtScriptQTimeLine::setLoopCount(int count)
{
	auto __o = this->thiz<QTimeLine *>();
	if (__o)
	{
		__o->setLoopCount(count);
	}
}

int QtScriptQTimeLine::frameForTime(int msec)
{
	auto __o = this->thiz<QTimeLine *>();
	if (__o)
	{
		return __o->frameForTime(msec);
	}
	return 0;
}

int QtScriptQTimeLine::endFrame()
{
	auto __o = this->thiz<QTimeLine *>();
	if (__o)
	{
		return __o->endFrame();
	}
	return 0;
}

void QtScriptQTimeLine::stop()
{
	auto __o = this->thiz<QTimeLine *>();
	if (__o)
	{
		__o->stop();
	}
}

int QtScriptQTimeLine::startFrame()
{
	auto __o = this->thiz<QTimeLine *>();
	if (__o)
	{
		return __o->startFrame();
	}
	return 0;
}

int QtScriptQTimeLine::updateInterval()
{
	auto __o = this->thiz<QTimeLine *>();
	if (__o)
	{
		return __o->updateInterval();
	}
	return 0;
}

int QtScriptQTimeLine::currentFrame()
{
	auto __o = this->thiz<QTimeLine *>();
	if (__o)
	{
		return __o->currentFrame();
	}
	return 0;
}

void QtScriptQTimeLine::setUpdateInterval(int interval)
{
	auto __o = this->thiz<QTimeLine *>();
	if (__o)
	{
		__o->setUpdateInterval(interval);
	}
}

int QtScriptQTimeLine::curveShape()
{
	auto __o = this->thiz<QTimeLine *>();
	if (__o)
	{
		return int(__o->curveShape());
	}
	return 0;
}

int QtScriptQTimeLine::currentTime()
{
	auto __o = this->thiz<QTimeLine *>();
	if (__o)
	{
		return __o->currentTime();
	}
	return 0;
}

void QtScriptQTimeLine::setEndFrame(int frame)
{
	auto __o = this->thiz<QTimeLine *>();
	if (__o)
	{
		__o->setEndFrame(frame);
	}
}

void QtScriptQTimeLine::resume()
{
	auto __o = this->thiz<QTimeLine *>();
	if (__o)
	{
		__o->resume();
	}
}

QEasingCurve QtScriptQTimeLine::easingCurve()
{
	auto __o = this->thiz<QTimeLine *>();
	if (__o)
	{
		return __o->easingCurve();
	}
	return QEasingCurve();
}

void QtScriptQTimeLine::setDuration(int duration)
{
	auto __o = this->thiz<QTimeLine *>();
	if (__o)
	{
		__o->setDuration(duration);
	}
}

void QtScriptQTimeLine::setStartFrame(int frame)
{
	auto __o = this->thiz<QTimeLine *>();
	if (__o)
	{
		__o->setStartFrame(frame);
	}
}

void QtScriptQTimeLine::setPaused(bool paused)
{
	auto __o = this->thiz<QTimeLine *>();
	if (__o)
	{
		__o->setPaused(paused);
	}
}

int QtScriptQTimeLine::constructorArgumentCountMin() const
{
	return 0;
}

int QtScriptQTimeLine::constructorArgumentCountMax() const
{
	return 2;
}

bool QtScriptQTimeLine::constructObject(QScriptContext *context, NativeObjectType &out)
{
	auto __e = context->engine();
	Q_UNUSED(__e);
	bool ok = false;
	switch (context->argumentCount())
	{
		case 0:
		{
			out = new QTimeLine();
			ok = true;
			break;
		}
		case 1:
		{
			auto arg0 = qscriptvalue_cast<int>(context->argument(0));
			out = new QTimeLine(arg0);
			ok = true;
			break;
		}
		case 2:
		{
			auto arg0 = qscriptvalue_cast<int>(context->argument(0));
			auto arg1 = qscriptvalue_cast<QObject*>(context->argument(1));
			out = new QTimeLine(arg0, arg1);
			ok = true;
			break;
		}
	}
	
	if (!ok)
	{
		QtScriptUtils::badArgumentsException(context,
			"QTimeLine constructor");
	}
	return ok;
}

QtScriptQUrl::QtScriptQUrl(QScriptEngine *engine, const QByteArray &className)
	: QtScriptBaseClassPrototype<QUrl, false>(engine, className)
{
}

QtScriptQUrl::QtScriptQUrl(QScriptEngine *engine)
	: QtScriptQUrl(engine, "Url")
{
}

void QtScriptQUrl::Register(const QScriptValue &targetNamespace)
{
	auto engine = targetNamespace.engine();
	Q_ASSERT(engine);
	QScriptValue inherit;
	auto ctor = RegisterT<QUrl, QtScriptQUrl>(targetNamespace, inherit);
	Q_ASSERT(ctor.isFunction());
	ctor.setProperty("toAce", engine->newFunction(
		static_cast<QScriptValue (*)(QScriptContext *, QScriptEngine *)>(
			&QtScriptQUrl::toAce)),
			QScriptValue::ReadOnly | QScriptValue::Undeletable);
	ctor.setProperty("fromAce", engine->newFunction(
		static_cast<QScriptValue (*)(QScriptContext *, QScriptEngine *)>(
			&QtScriptQUrl::fromAce)),
			QScriptValue::ReadOnly | QScriptValue::Undeletable);
	ctor.setProperty("toStringList", engine->newFunction(
		static_cast<QScriptValue (*)(QScriptContext *, QScriptEngine *)>(
			&QtScriptQUrl::toStringList)),
			QScriptValue::ReadOnly | QScriptValue::Undeletable);
	ctor.setProperty("fromEncoded", engine->newFunction(
		static_cast<QScriptValue (*)(QScriptContext *, QScriptEngine *)>(
			&QtScriptQUrl::fromEncoded)),
			QScriptValue::ReadOnly | QScriptValue::Undeletable);
	ctor.setProperty("fromUserInput", engine->newFunction(
		static_cast<QScriptValue (*)(QScriptContext *, QScriptEngine *)>(
			&QtScriptQUrl::fromUserInput)),
			QScriptValue::ReadOnly | QScriptValue::Undeletable);
	ctor.setProperty("fromPercentEncoding", engine->newFunction(
		static_cast<QScriptValue (*)(QScriptContext *, QScriptEngine *)>(
			&QtScriptQUrl::fromPercentEncoding)),
			QScriptValue::ReadOnly | QScriptValue::Undeletable);
	ctor.setProperty("fromStringList", engine->newFunction(
		static_cast<QScriptValue (*)(QScriptContext *, QScriptEngine *)>(
			&QtScriptQUrl::fromStringList)),
			QScriptValue::ReadOnly | QScriptValue::Undeletable);
	ctor.setProperty("fromLocalFile", engine->newFunction(
		static_cast<QScriptValue (*)(QScriptContext *, QScriptEngine *)>(
			&QtScriptQUrl::fromLocalFile)),
			QScriptValue::ReadOnly | QScriptValue::Undeletable);
	ctor.setProperty("toPercentEncoding", engine->newFunction(
		static_cast<QScriptValue (*)(QScriptContext *, QScriptEngine *)>(
			&QtScriptQUrl::toPercentEncoding)),
			QScriptValue::ReadOnly | QScriptValue::Undeletable);
	ctor.setProperty("setIdnWhitelist", engine->newFunction(
		static_cast<QScriptValue (*)(QScriptContext *, QScriptEngine *)>(
			&QtScriptQUrl::setIdnWhitelist)),
			QScriptValue::ReadOnly | QScriptValue::Undeletable);
	ctor.setProperty("idnWhitelist", engine->newFunction(
		static_cast<QScriptValue (*)(QScriptContext *, QScriptEngine *)>(
			&QtScriptQUrl::idnWhitelist)),
			QScriptValue::ReadOnly | QScriptValue::Undeletable);
}

bool QtScriptQUrl::notEquals(const QUrl& url)
{
	auto __o = this->thiz<QUrl *>();
	if (__o)
	{
		return __o->operator!=(url);
	}
	return false;
}

QUrl QtScriptQUrl::adjusted(int options)
{
	auto __o = this->thiz<QUrl *>();
	if (__o)
	{
		return __o->adjusted(QUrlTwoFlags<QUrl::UrlFormattingOption, QUrl::ComponentFormattingOption>(options));
	}
	return QUrl();
}

void QtScriptQUrl::set(const QUrl& copy)
{
	auto __o = this->thiz<QUrl *>();
	if (__o)
	{
		__o->operator=(copy);
	}
}

bool QtScriptQUrl::isRelative()
{
	auto __o = this->thiz<QUrl *>();
	if (__o)
	{
		return __o->isRelative();
	}
	return false;
}

bool QtScriptQUrl::matches(const QUrl& url, int options)
{
	auto __o = this->thiz<QUrl *>();
	if (__o)
	{
		return __o->matches(url, QUrlTwoFlags<QUrl::UrlFormattingOption, QUrl::ComponentFormattingOption>(options));
	}
	return false;
}

QString QtScriptQUrl::authority()
{
	auto __o = this->thiz<QUrl *>();
	if (__o)
	{
		return __o->authority();
	}
	return QString();
}

QString QtScriptQUrl::authority(int options)
{
	auto __o = this->thiz<QUrl *>();
	if (__o)
	{
		return __o->authority(QFlags<QUrl::ComponentFormattingOption>(options));
	}
	return QString();
}

bool QtScriptQUrl::equals(const QUrl& url)
{
	auto __o = this->thiz<QUrl *>();
	if (__o)
	{
		return __o->operator==(url);
	}
	return false;
}

void QtScriptQUrl::setUserName(const QString& userName)
{
	auto __o = this->thiz<QUrl *>();
	if (__o)
	{
		__o->setUserName(userName);
	}
}

void QtScriptQUrl::setUserName(const QString& userName, int mode)
{
	auto __o = this->thiz<QUrl *>();
	if (__o)
	{
		__o->setUserName(userName, QUrl::ParsingMode(mode));
	}
}

void QtScriptQUrl::setScheme(const QString& scheme)
{
	auto __o = this->thiz<QUrl *>();
	if (__o)
	{
		__o->setScheme(scheme);
	}
}

QString QtScriptQUrl::query()
{
	auto __o = this->thiz<QUrl *>();
	if (__o)
	{
		return __o->query();
	}
	return QString();
}

QString QtScriptQUrl::query(int arg0)
{
	auto __o = this->thiz<QUrl *>();
	if (__o)
	{
		return __o->query(QFlags<QUrl::ComponentFormattingOption>(arg0));
	}
	return QString();
}

QString QtScriptQUrl::toDisplayString()
{
	auto __o = this->thiz<QUrl *>();
	if (__o)
	{
		return __o->toDisplayString();
	}
	return QString();
}

QString QtScriptQUrl::toDisplayString(int options)
{
	auto __o = this->thiz<QUrl *>();
	if (__o)
	{
		return __o->toDisplayString(QUrlTwoFlags<QUrl::UrlFormattingOption, QUrl::ComponentFormattingOption>(options));
	}
	return QString();
}

int QtScriptQUrl::port()
{
	auto __o = this->thiz<QUrl *>();
	if (__o)
	{
		return __o->port();
	}
	return 0;
}

int QtScriptQUrl::port(int defaultPort)
{
	auto __o = this->thiz<QUrl *>();
	if (__o)
	{
		return __o->port(defaultPort);
	}
	return 0;
}

QString QtScriptQUrl::topLevelDomain()
{
	auto __o = this->thiz<QUrl *>();
	if (__o)
	{
		return __o->topLevelDomain();
	}
	return QString();
}

QString QtScriptQUrl::topLevelDomain(int options)
{
	auto __o = this->thiz<QUrl *>();
	if (__o)
	{
		return __o->topLevelDomain(QFlags<QUrl::ComponentFormattingOption>(options));
	}
	return QString();
}

void QtScriptQUrl::setFragment(const QString& fragment)
{
	auto __o = this->thiz<QUrl *>();
	if (__o)
	{
		__o->setFragment(fragment);
	}
}

void QtScriptQUrl::setFragment(const QString& fragment, int mode)
{
	auto __o = this->thiz<QUrl *>();
	if (__o)
	{
		__o->setFragment(fragment, QUrl::ParsingMode(mode));
	}
}

void QtScriptQUrl::setHost(const QString& host)
{
	auto __o = this->thiz<QUrl *>();
	if (__o)
	{
		__o->setHost(host);
	}
}

void QtScriptQUrl::setHost(const QString& host, int mode)
{
	auto __o = this->thiz<QUrl *>();
	if (__o)
	{
		__o->setHost(host, QUrl::ParsingMode(mode));
	}
}

QString QtScriptQUrl::toString()
{
	auto __o = this->thiz<QUrl *>();
	if (__o)
	{
		return __o->toString();
	}
	return QString();
}

QString QtScriptQUrl::toString(int options)
{
	auto __o = this->thiz<QUrl *>();
	if (__o)
	{
		return __o->toString(QUrlTwoFlags<QUrl::UrlFormattingOption, QUrl::ComponentFormattingOption>(options));
	}
	return QString();
}

void QtScriptQUrl::swap(QUrl& other)
{
	auto __o = this->thiz<QUrl *>();
	if (__o)
	{
		__o->swap(other);
	}
}

void QtScriptQUrl::setPassword(const QString& password)
{
	auto __o = this->thiz<QUrl *>();
	if (__o)
	{
		__o->setPassword(password);
	}
}

void QtScriptQUrl::setPassword(const QString& password, int mode)
{
	auto __o = this->thiz<QUrl *>();
	if (__o)
	{
		__o->setPassword(password, QUrl::ParsingMode(mode));
	}
}

bool QtScriptQUrl::isEmpty()
{
	auto __o = this->thiz<QUrl *>();
	if (__o)
	{
		return __o->isEmpty();
	}
	return false;
}

void QtScriptQUrl::setPath(const QString& path)
{
	auto __o = this->thiz<QUrl *>();
	if (__o)
	{
		__o->setPath(path);
	}
}

void QtScriptQUrl::setPath(const QString& path, int mode)
{
	auto __o = this->thiz<QUrl *>();
	if (__o)
	{
		__o->setPath(path, QUrl::ParsingMode(mode));
	}
}

QString QtScriptQUrl::scheme()
{
	auto __o = this->thiz<QUrl *>();
	if (__o)
	{
		return __o->scheme();
	}
	return QString();
}

QUrl QtScriptQUrl::resolved(const QUrl& relative)
{
	auto __o = this->thiz<QUrl *>();
	if (__o)
	{
		return __o->resolved(relative);
	}
	return QUrl();
}

void QtScriptQUrl::detach()
{
	auto __o = this->thiz<QUrl *>();
	if (__o)
	{
		__o->detach();
	}
}

QString QtScriptQUrl::errorString()
{
	auto __o = this->thiz<QUrl *>();
	if (__o)
	{
		return __o->errorString();
	}
	return QString();
}

QString QtScriptQUrl::fragment()
{
	auto __o = this->thiz<QUrl *>();
	if (__o)
	{
		return __o->fragment();
	}
	return QString();
}

QString QtScriptQUrl::fragment(int options)
{
	auto __o = this->thiz<QUrl *>();
	if (__o)
	{
		return __o->fragment(QFlags<QUrl::ComponentFormattingOption>(options));
	}
	return QString();
}

bool QtScriptQUrl::isValid()
{
	auto __o = this->thiz<QUrl *>();
	if (__o)
	{
		return __o->isValid();
	}
	return false;
}

void QtScriptQUrl::setUrl(const QString& url)
{
	auto __o = this->thiz<QUrl *>();
	if (__o)
	{
		__o->setUrl(url);
	}
}

void QtScriptQUrl::setUrl(const QString& url, int mode)
{
	auto __o = this->thiz<QUrl *>();
	if (__o)
	{
		__o->setUrl(url, QUrl::ParsingMode(mode));
	}
}

QString QtScriptQUrl::fileName()
{
	auto __o = this->thiz<QUrl *>();
	if (__o)
	{
		return __o->fileName();
	}
	return QString();
}

QString QtScriptQUrl::fileName(int options)
{
	auto __o = this->thiz<QUrl *>();
	if (__o)
	{
		return __o->fileName(QFlags<QUrl::ComponentFormattingOption>(options));
	}
	return QString();
}

QString QtScriptQUrl::host()
{
	auto __o = this->thiz<QUrl *>();
	if (__o)
	{
		return __o->host();
	}
	return QString();
}

QString QtScriptQUrl::host(int arg0)
{
	auto __o = this->thiz<QUrl *>();
	if (__o)
	{
		return __o->host(QFlags<QUrl::ComponentFormattingOption>(arg0));
	}
	return QString();
}

QString QtScriptQUrl::userInfo()
{
	auto __o = this->thiz<QUrl *>();
	if (__o)
	{
		return __o->userInfo();
	}
	return QString();
}

QString QtScriptQUrl::userInfo(int options)
{
	auto __o = this->thiz<QUrl *>();
	if (__o)
	{
		return __o->userInfo(QFlags<QUrl::ComponentFormattingOption>(options));
	}
	return QString();
}

bool QtScriptQUrl::isParentOf(const QUrl& url)
{
	auto __o = this->thiz<QUrl *>();
	if (__o)
	{
		return __o->isParentOf(url);
	}
	return false;
}

QString QtScriptQUrl::path()
{
	auto __o = this->thiz<QUrl *>();
	if (__o)
	{
		return __o->path();
	}
	return QString();
}

QString QtScriptQUrl::path(int options)
{
	auto __o = this->thiz<QUrl *>();
	if (__o)
	{
		return __o->path(QFlags<QUrl::ComponentFormattingOption>(options));
	}
	return QString();
}

QString QtScriptQUrl::password()
{
	auto __o = this->thiz<QUrl *>();
	if (__o)
	{
		return __o->password();
	}
	return QString();
}

QString QtScriptQUrl::password(int arg0)
{
	auto __o = this->thiz<QUrl *>();
	if (__o)
	{
		return __o->password(QFlags<QUrl::ComponentFormattingOption>(arg0));
	}
	return QString();
}

bool QtScriptQUrl::hasQuery()
{
	auto __o = this->thiz<QUrl *>();
	if (__o)
	{
		return __o->hasQuery();
	}
	return false;
}

QByteArray QtScriptQUrl::toEncoded()
{
	auto __o = this->thiz<QUrl *>();
	if (__o)
	{
		return __o->toEncoded();
	}
	return QByteArray();
}

QByteArray QtScriptQUrl::toEncoded(int options)
{
	auto __o = this->thiz<QUrl *>();
	if (__o)
	{
		return __o->toEncoded(QUrlTwoFlags<QUrl::UrlFormattingOption, QUrl::ComponentFormattingOption>(options));
	}
	return QByteArray();
}

QString QtScriptQUrl::userName()
{
	auto __o = this->thiz<QUrl *>();
	if (__o)
	{
		return __o->userName();
	}
	return QString();
}

QString QtScriptQUrl::userName(int options)
{
	auto __o = this->thiz<QUrl *>();
	if (__o)
	{
		return __o->userName(QFlags<QUrl::ComponentFormattingOption>(options));
	}
	return QString();
}

QString QtScriptQUrl::url()
{
	auto __o = this->thiz<QUrl *>();
	if (__o)
	{
		return __o->url();
	}
	return QString();
}

QString QtScriptQUrl::url(int options)
{
	auto __o = this->thiz<QUrl *>();
	if (__o)
	{
		return __o->url(QUrlTwoFlags<QUrl::UrlFormattingOption, QUrl::ComponentFormattingOption>(options));
	}
	return QString();
}

void QtScriptQUrl::clear()
{
	auto __o = this->thiz<QUrl *>();
	if (__o)
	{
		__o->clear();
	}
}

void QtScriptQUrl::setAuthority(const QString& authority)
{
	auto __o = this->thiz<QUrl *>();
	if (__o)
	{
		__o->setAuthority(authority);
	}
}

void QtScriptQUrl::setAuthority(const QString& authority, int mode)
{
	auto __o = this->thiz<QUrl *>();
	if (__o)
	{
		__o->setAuthority(authority, QUrl::ParsingMode(mode));
	}
}

bool QtScriptQUrl::lessThan(const QUrl& url)
{
	auto __o = this->thiz<QUrl *>();
	if (__o)
	{
		return __o->operator<(url);
	}
	return false;
}

bool QtScriptQUrl::hasFragment()
{
	auto __o = this->thiz<QUrl *>();
	if (__o)
	{
		return __o->hasFragment();
	}
	return false;
}

void QtScriptQUrl::setQuery(const QString& query)
{
	auto __o = this->thiz<QUrl *>();
	if (__o)
	{
		__o->setQuery(query);
	}
}

void QtScriptQUrl::setQuery(const QString& query, int mode)
{
	auto __o = this->thiz<QUrl *>();
	if (__o)
	{
		__o->setQuery(query, QUrl::ParsingMode(mode));
	}
}

void QtScriptQUrl::setUserInfo(const QString& userInfo)
{
	auto __o = this->thiz<QUrl *>();
	if (__o)
	{
		__o->setUserInfo(userInfo);
	}
}

void QtScriptQUrl::setUserInfo(const QString& userInfo, int mode)
{
	auto __o = this->thiz<QUrl *>();
	if (__o)
	{
		__o->setUserInfo(userInfo, QUrl::ParsingMode(mode));
	}
}

bool QtScriptQUrl::isLocalFile()
{
	auto __o = this->thiz<QUrl *>();
	if (__o)
	{
		return __o->isLocalFile();
	}
	return false;
}

void QtScriptQUrl::setPort(int port)
{
	auto __o = this->thiz<QUrl *>();
	if (__o)
	{
		__o->setPort(port);
	}
}

QString QtScriptQUrl::toLocalFile()
{
	auto __o = this->thiz<QUrl *>();
	if (__o)
	{
		return __o->toLocalFile();
	}
	return QString();
}

QScriptValue QtScriptQUrl::toAce(QScriptContext *context, QScriptEngine* __e)
{
	if (!QtScriptUtils::checkArgumentCount(context, 1, 1))
	{
		return __e->uncaughtException();
	}

	switch (context->argumentCount())
	{
		case 1:
		{
			auto arg0 = qscriptvalue_cast<QString>(context->argument(0));
			return __e->toScriptValue(QUrl::toAce(arg0));
		}
	}

	QtScriptUtils::badArgumentsException(context,
			"QUrl::toAce");
	return __e->uncaughtException();
}

QScriptValue QtScriptQUrl::fromAce(QScriptContext *context, QScriptEngine* __e)
{
	if (!QtScriptUtils::checkArgumentCount(context, 1, 1))
	{
		return __e->uncaughtException();
	}

	switch (context->argumentCount())
	{
		case 1:
		{
			auto arg0 = qscriptvalue_cast<QByteArray>(context->argument(0));
			return __e->toScriptValue(QUrl::fromAce(arg0));
		}
	}

	QtScriptUtils::badArgumentsException(context,
			"QUrl::fromAce");
	return __e->uncaughtException();
}

QScriptValue QtScriptQUrl::toStringList(QScriptContext *context, QScriptEngine* __e)
{
	if (!QtScriptUtils::checkArgumentCount(context, 1, 2))
	{
		return __e->uncaughtException();
	}

	switch (context->argumentCount())
	{
		case 1:
		{
			auto arg0 = qscriptvalue_cast<QList<QUrl>>(context->argument(0));
			return __e->toScriptValue(QUrl::toStringList(arg0));
		}
		case 2:
		{
			auto arg0 = qscriptvalue_cast<QList<QUrl>>(context->argument(0));
			auto tmp_1 = qscriptvalue_cast<int>(context->argument(1));
			auto arg1 = QUrlTwoFlags<QUrl::UrlFormattingOption, QUrl::ComponentFormattingOption>(tmp_1);
			return __e->toScriptValue(QUrl::toStringList(arg0, arg1));
		}
	}

	QtScriptUtils::badArgumentsException(context,
			"QUrl::toStringList");
	return __e->uncaughtException();
}

QScriptValue QtScriptQUrl::fromEncoded(QScriptContext *context, QScriptEngine* __e)
{
	if (!QtScriptUtils::checkArgumentCount(context, 1, 2))
	{
		return __e->uncaughtException();
	}

	switch (context->argumentCount())
	{
		case 1:
		{
			auto arg0 = qscriptvalue_cast<QByteArray>(context->argument(0));
			return __e->toScriptValue(QUrl::fromEncoded(arg0));
		}
		case 2:
		{
			auto arg0 = qscriptvalue_cast<QByteArray>(context->argument(0));
			auto tmp_1 = qscriptvalue_cast<int>(context->argument(1));
			auto arg1 = QUrl::ParsingMode(tmp_1);
			return __e->toScriptValue(QUrl::fromEncoded(arg0, arg1));
		}
	}

	QtScriptUtils::badArgumentsException(context,
			"QUrl::fromEncoded");
	return __e->uncaughtException();
}

QScriptValue QtScriptQUrl::fromUserInput(QScriptContext *context, QScriptEngine* __e)
{
	if (!QtScriptUtils::checkArgumentCount(context, 1, 3))
	{
		return __e->uncaughtException();
	}

	switch (context->argumentCount())
	{
		case 1:
		{
			auto arg0 = qscriptvalue_cast<QString>(context->argument(0));
			return __e->toScriptValue(QUrl::fromUserInput(arg0));
		}
		case 2:
		{
			auto arg0 = qscriptvalue_cast<QString>(context->argument(0));
			auto arg1 = qscriptvalue_cast<QString>(context->argument(1));
			return __e->toScriptValue(QUrl::fromUserInput(arg0, arg1));
		}
		case 3:
		{
			auto arg0 = qscriptvalue_cast<QString>(context->argument(0));
			auto arg1 = qscriptvalue_cast<QString>(context->argument(1));
			auto tmp_2 = qscriptvalue_cast<int>(context->argument(2));
			auto arg2 = QFlags<QUrl::UserInputResolutionOption>(tmp_2);
			return __e->toScriptValue(QUrl::fromUserInput(arg0, arg1, arg2));
		}
	}

	QtScriptUtils::badArgumentsException(context,
			"QUrl::fromUserInput");
	return __e->uncaughtException();
}

QScriptValue QtScriptQUrl::fromPercentEncoding(QScriptContext *context, QScriptEngine* __e)
{
	if (!QtScriptUtils::checkArgumentCount(context, 1, 1))
	{
		return __e->uncaughtException();
	}

	switch (context->argumentCount())
	{
		case 1:
		{
			auto arg0 = qscriptvalue_cast<QByteArray>(context->argument(0));
			return __e->toScriptValue(QUrl::fromPercentEncoding(arg0));
		}
	}

	QtScriptUtils::badArgumentsException(context,
			"QUrl::fromPercentEncoding");
	return __e->uncaughtException();
}

QScriptValue QtScriptQUrl::fromStringList(QScriptContext *context, QScriptEngine* __e)
{
	if (!QtScriptUtils::checkArgumentCount(context, 1, 2))
	{
		return __e->uncaughtException();
	}

	switch (context->argumentCount())
	{
		case 1:
		{
			auto arg0 = qscriptvalue_cast<QStringList>(context->argument(0));
			return __e->toScriptValue(QUrl::fromStringList(arg0));
		}
		case 2:
		{
			auto arg0 = qscriptvalue_cast<QStringList>(context->argument(0));
			auto tmp_1 = qscriptvalue_cast<int>(context->argument(1));
			auto arg1 = QUrl::ParsingMode(tmp_1);
			return __e->toScriptValue(QUrl::fromStringList(arg0, arg1));
		}
	}

	QtScriptUtils::badArgumentsException(context,
			"QUrl::fromStringList");
	return __e->uncaughtException();
}

QScriptValue QtScriptQUrl::fromLocalFile(QScriptContext *context, QScriptEngine* __e)
{
	if (!QtScriptUtils::checkArgumentCount(context, 1, 1))
	{
		return __e->uncaughtException();
	}

	switch (context->argumentCount())
	{
		case 1:
		{
			auto arg0 = qscriptvalue_cast<QString>(context->argument(0));
			return __e->toScriptValue(QUrl::fromLocalFile(arg0));
		}
	}

	QtScriptUtils::badArgumentsException(context,
			"QUrl::fromLocalFile");
	return __e->uncaughtException();
}

QScriptValue QtScriptQUrl::toPercentEncoding(QScriptContext *context, QScriptEngine* __e)
{
	if (!QtScriptUtils::checkArgumentCount(context, 1, 3))
	{
		return __e->uncaughtException();
	}

	switch (context->argumentCount())
	{
		case 1:
		{
			auto arg0 = qscriptvalue_cast<QString>(context->argument(0));
			return __e->toScriptValue(QUrl::toPercentEncoding(arg0));
		}
		case 2:
		{
			auto arg0 = qscriptvalue_cast<QString>(context->argument(0));
			auto arg1 = qscriptvalue_cast<QByteArray>(context->argument(1));
			return __e->toScriptValue(QUrl::toPercentEncoding(arg0, arg1));
		}
		case 3:
		{
			auto arg0 = qscriptvalue_cast<QString>(context->argument(0));
			auto arg1 = qscriptvalue_cast<QByteArray>(context->argument(1));
			auto arg2 = qscriptvalue_cast<QByteArray>(context->argument(2));
			return __e->toScriptValue(QUrl::toPercentEncoding(arg0, arg1, arg2));
		}
	}

	QtScriptUtils::badArgumentsException(context,
			"QUrl::toPercentEncoding");
	return __e->uncaughtException();
}

QScriptValue QtScriptQUrl::setIdnWhitelist(QScriptContext *context, QScriptEngine* __e)
{
	if (!QtScriptUtils::checkArgumentCount(context, 1, 1))
	{
		return __e->uncaughtException();
	}

	switch (context->argumentCount())
	{
		case 1:
		{
			auto arg0 = qscriptvalue_cast<QStringList>(context->argument(0));
			QUrl::setIdnWhitelist(arg0);
			return __e->undefinedValue();
		}
	}

	QtScriptUtils::badArgumentsException(context,
			"QUrl::setIdnWhitelist");
	return __e->uncaughtException();
}

QScriptValue QtScriptQUrl::idnWhitelist(QScriptContext *context, QScriptEngine* __e)
{
	if (!QtScriptUtils::checkArgumentCount(context, 0, 0))
	{
		return __e->uncaughtException();
	}

	switch (context->argumentCount())
	{
		case 0:
		{
			return __e->toScriptValue(QUrl::idnWhitelist());
		}
	}

	QtScriptUtils::badArgumentsException(context,
			"QUrl::idnWhitelist");
	return __e->uncaughtException();
}

int QtScriptQUrl::constructorArgumentCountMin() const
{
	return 0;
}

int QtScriptQUrl::constructorArgumentCountMax() const
{
	return 2;
}

bool QtScriptQUrl::constructObject(QScriptContext *context, NativeObjectType &out)
{
	auto __e = context->engine();
	Q_UNUSED(__e);
	bool ok = false;
	switch (context->argumentCount())
	{
		case 0:
		{
			ok = true;
			break;
		}
		case 1:
		{
			auto arg0 = qscriptvalue_cast<QUrl>(context->argument(0));
			out = QUrl(arg0);
			ok = true;
			break;
		}
		case 2:
		{
			auto arg0 = qscriptvalue_cast<QString>(context->argument(0));
			auto tmp_1 = qscriptvalue_cast<int>(context->argument(1));
			auto arg1 = QUrl::ParsingMode(tmp_1);
			out = QUrl(arg0, arg1);
			ok = true;
			break;
		}
	}
	
	if (!ok)
	{
		QtScriptUtils::badArgumentsException(context,
			"QUrl constructor");
	}
	return ok;
}

QtScriptQUrlQuery::QtScriptQUrlQuery(QScriptEngine *engine, const QByteArray &className)
	: QtScriptBaseClassPrototype<QUrlQuery, false>(engine, className)
{
}

QtScriptQUrlQuery::QtScriptQUrlQuery(QScriptEngine *engine)
	: QtScriptQUrlQuery(engine, "UrlQuery")
{
}

void QtScriptQUrlQuery::Register(const QScriptValue &targetNamespace)
{
	auto engine = targetNamespace.engine();
	Q_ASSERT(engine);
	QScriptValue inherit;
	auto ctor = RegisterT<QUrlQuery, QtScriptQUrlQuery>(targetNamespace, inherit);
	Q_ASSERT(ctor.isFunction());
	ctor.setProperty("defaultQueryValueDelimiter", engine->newFunction(
		static_cast<QScriptValue (*)(QScriptContext *, QScriptEngine *)>(
			&QtScriptQUrlQuery::defaultQueryValueDelimiter)),
			QScriptValue::ReadOnly | QScriptValue::Undeletable);
	ctor.setProperty("defaultQueryPairDelimiter", engine->newFunction(
		static_cast<QScriptValue (*)(QScriptContext *, QScriptEngine *)>(
			&QtScriptQUrlQuery::defaultQueryPairDelimiter)),
			QScriptValue::ReadOnly | QScriptValue::Undeletable);
}

bool QtScriptQUrlQuery::notEquals(const QUrlQuery& other)
{
	auto __o = this->thiz<QUrlQuery *>();
	if (__o)
	{
		return __o->operator!=(other);
	}
	return false;
}

void QtScriptQUrlQuery::addQueryItem(const QString& key, const QString& value)
{
	auto __o = this->thiz<QUrlQuery *>();
	if (__o)
	{
		__o->addQueryItem(key, value);
	}
}

void QtScriptQUrlQuery::set(const QUrlQuery& other)
{
	auto __o = this->thiz<QUrlQuery *>();
	if (__o)
	{
		__o->operator=(other);
	}
}

void QtScriptQUrlQuery::setQuery(const QString& queryString)
{
	auto __o = this->thiz<QUrlQuery *>();
	if (__o)
	{
		__o->setQuery(queryString);
	}
}

QString QtScriptQUrlQuery::queryItemValue(const QString& key)
{
	auto __o = this->thiz<QUrlQuery *>();
	if (__o)
	{
		return __o->queryItemValue(key);
	}
	return QString();
}

QString QtScriptQUrlQuery::queryItemValue(const QString& key, int encoding)
{
	auto __o = this->thiz<QUrlQuery *>();
	if (__o)
	{
		return __o->queryItemValue(key, QFlags<QUrl::ComponentFormattingOption>(encoding));
	}
	return QString();
}

void QtScriptQUrlQuery::clear()
{
	auto __o = this->thiz<QUrlQuery *>();
	if (__o)
	{
		__o->clear();
	}
}

bool QtScriptQUrlQuery::equals(const QUrlQuery& other)
{
	auto __o = this->thiz<QUrlQuery *>();
	if (__o)
	{
		return __o->operator==(other);
	}
	return false;
}

bool QtScriptQUrlQuery::hasQueryItem(const QString& key)
{
	auto __o = this->thiz<QUrlQuery *>();
	if (__o)
	{
		return __o->hasQueryItem(key);
	}
	return false;
}

void QtScriptQUrlQuery::removeAllQueryItems(const QString& key)
{
	auto __o = this->thiz<QUrlQuery *>();
	if (__o)
	{
		__o->removeAllQueryItems(key);
	}
}

QChar QtScriptQUrlQuery::queryPairDelimiter()
{
	auto __o = this->thiz<QUrlQuery *>();
	if (__o)
	{
		return __o->queryPairDelimiter();
	}
	return QChar();
}

QStringList QtScriptQUrlQuery::allQueryItemValues(const QString& key)
{
	auto __o = this->thiz<QUrlQuery *>();
	if (__o)
	{
		return __o->allQueryItemValues(key);
	}
	return QStringList();
}

QStringList QtScriptQUrlQuery::allQueryItemValues(const QString& key, int encoding)
{
	auto __o = this->thiz<QUrlQuery *>();
	if (__o)
	{
		return __o->allQueryItemValues(key, QFlags<QUrl::ComponentFormattingOption>(encoding));
	}
	return QStringList();
}

bool QtScriptQUrlQuery::isEmpty()
{
	auto __o = this->thiz<QUrlQuery *>();
	if (__o)
	{
		return __o->isEmpty();
	}
	return false;
}

void QtScriptQUrlQuery::swap(QUrlQuery& other)
{
	auto __o = this->thiz<QUrlQuery *>();
	if (__o)
	{
		__o->swap(other);
	}
}

QString QtScriptQUrlQuery::query()
{
	auto __o = this->thiz<QUrlQuery *>();
	if (__o)
	{
		return __o->query();
	}
	return QString();
}

QString QtScriptQUrlQuery::query(int encoding)
{
	auto __o = this->thiz<QUrlQuery *>();
	if (__o)
	{
		return __o->query(QFlags<QUrl::ComponentFormattingOption>(encoding));
	}
	return QString();
}

QString QtScriptQUrlQuery::toString()
{
	auto __o = this->thiz<QUrlQuery *>();
	if (__o)
	{
		return __o->toString();
	}
	return QString();
}

QString QtScriptQUrlQuery::toString(int encoding)
{
	auto __o = this->thiz<QUrlQuery *>();
	if (__o)
	{
		return __o->toString(QFlags<QUrl::ComponentFormattingOption>(encoding));
	}
	return QString();
}

void QtScriptQUrlQuery::setQueryDelimiters(QChar valueDelimiter, QChar pairDelimiter)
{
	auto __o = this->thiz<QUrlQuery *>();
	if (__o)
	{
		__o->setQueryDelimiters(valueDelimiter, pairDelimiter);
	}
}

void QtScriptQUrlQuery::removeQueryItem(const QString& key)
{
	auto __o = this->thiz<QUrlQuery *>();
	if (__o)
	{
		__o->removeQueryItem(key);
	}
}

QChar QtScriptQUrlQuery::queryValueDelimiter()
{
	auto __o = this->thiz<QUrlQuery *>();
	if (__o)
	{
		return __o->queryValueDelimiter();
	}
	return QChar();
}

QScriptValue QtScriptQUrlQuery::defaultQueryValueDelimiter(QScriptContext *context, QScriptEngine* __e)
{
	if (!QtScriptUtils::checkArgumentCount(context, 0, 0))
	{
		return __e->uncaughtException();
	}

	switch (context->argumentCount())
	{
		case 0:
		{
			return __e->toScriptValue(QUrlQuery::defaultQueryValueDelimiter());
		}
	}

	QtScriptUtils::badArgumentsException(context,
			"QUrlQuery::defaultQueryValueDelimiter");
	return __e->uncaughtException();
}

QScriptValue QtScriptQUrlQuery::defaultQueryPairDelimiter(QScriptContext *context, QScriptEngine* __e)
{
	if (!QtScriptUtils::checkArgumentCount(context, 0, 0))
	{
		return __e->uncaughtException();
	}

	switch (context->argumentCount())
	{
		case 0:
		{
			return __e->toScriptValue(QUrlQuery::defaultQueryPairDelimiter());
		}
	}

	QtScriptUtils::badArgumentsException(context,
			"QUrlQuery::defaultQueryPairDelimiter");
	return __e->uncaughtException();
}

int QtScriptQUrlQuery::constructorArgumentCountMin() const
{
	return 0;
}

int QtScriptQUrlQuery::constructorArgumentCountMax() const
{
	return 1;
}

bool QtScriptQUrlQuery::constructObject(QScriptContext *context, NativeObjectType &out)
{
	auto __e = context->engine();
	Q_UNUSED(__e);
	bool ok = false;
	switch (context->argumentCount())
	{
		case 0:
		{
			ok = true;
			break;
		}
		case 1:
		{
			auto arg0 = qscriptvalue_cast<QUrl>(context->argument(0));
			out = QUrlQuery(arg0);
			ok = true;
			break;
		}
	}
	
	if (!ok)
	{
		QtScriptUtils::badArgumentsException(context,
			"QUrlQuery constructor");
	}
	return ok;
}

void qtscript_register_all_QtCore(QScriptEngine* engine)
{
	QScriptValue targetNamespace;
	targetNamespace = QtScriptUtils::getNamespaceObject(engine, "qt");
	QtScriptQTextDecoder::Register(targetNamespace);
	QtScriptQSize::Register(targetNamespace);
	QtScriptQFileInfo::Register(targetNamespace);
	QtScriptQTime::Register(targetNamespace);
	QtScriptQMargins::Register(targetNamespace);
	QtScriptQTextEncoder::Register(targetNamespace);
	QtScriptQDir::Register(targetNamespace);
	QtScriptQDirIterator::Register(targetNamespace);
	QtScriptQAbstractAnimation::Register(targetNamespace);
	QtScriptQAnimationGroup::Register(targetNamespace);
	QtScriptQSequentialAnimationGroup::Register(targetNamespace);
	QtScriptQVariantAnimation::Register(targetNamespace);
	QtScriptQTemporaryDir::Register(targetNamespace);
	QtScriptQUrl::Register(targetNamespace);
	QtScriptQPoint::Register(targetNamespace);
	QtScriptQIODevice::Register(targetNamespace);
	QtScriptQBuffer::Register(targetNamespace);
	QtScriptQRectF::Register(targetNamespace);
	QtScriptQUrlQuery::Register(targetNamespace);
	QtScriptQEasingCurve::Register(targetNamespace);
	QtScriptQTextStream::Register(targetNamespace);
	QtScriptQLocale::Register(targetNamespace);
	QtScriptQFileDevice::Register(targetNamespace);
	QtScriptQParallelAnimationGroup::Register(targetNamespace);
	QtScriptQFile::Register(targetNamespace);
	QtScriptQSizeF::Register(targetNamespace);
	QtScriptQLine::Register(targetNamespace);
	QtScriptQTextCodec::Register(targetNamespace);
	QtScriptQStandardPaths::Register(targetNamespace);
	QtScriptQMarginsF::Register(targetNamespace);
	QtScriptQRect::Register(targetNamespace);
	QtScriptQSettings::Register(targetNamespace);
	QtScriptQTimeLine::Register(targetNamespace);
	QtScriptQTemporaryFile::Register(targetNamespace);
	QtScriptQPropertyAnimation::Register(targetNamespace);
	QtScriptQPauseAnimation::Register(targetNamespace);
	QtScriptQSaveFile::Register(targetNamespace);
	QtScriptQLineF::Register(targetNamespace);
	QtScriptQPointF::Register(targetNamespace);
}
