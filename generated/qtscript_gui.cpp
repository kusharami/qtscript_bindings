#include "qtscript_gui.hpp"
#include "QtScriptUtils.h"
#include "QtScriptQByteArray.h"

QtScriptQRgba64::QtScriptQRgba64(QScriptEngine *engine, const QByteArray &className)
	: QtScriptBaseClassPrototype<QRgba64, false>(engine, className)
{
}

QtScriptQRgba64::QtScriptQRgba64(QScriptEngine *engine)
	: QtScriptQRgba64(engine, "Rgba64")
{
}

void QtScriptQRgba64::Register(const QScriptValue &targetNamespace)
{
	auto engine = targetNamespace.engine();
	Q_ASSERT(engine);
	QScriptValue inherit;
	auto ctor = RegisterT<QRgba64, QtScriptQRgba64>(targetNamespace, inherit);
	Q_ASSERT(ctor.isFunction());
	ctor.setProperty("fromArgb32", engine->newFunction(
		static_cast<QScriptValue (*)(QScriptContext *, QScriptEngine *)>(
			&QtScriptQRgba64::fromArgb32)),
			QScriptValue::ReadOnly | QScriptValue::Undeletable);
	ctor.setProperty("fromRgba", engine->newFunction(
		static_cast<QScriptValue (*)(QScriptContext *, QScriptEngine *)>(
			&QtScriptQRgba64::fromRgba)),
			QScriptValue::ReadOnly | QScriptValue::Undeletable);
	ctor.setProperty("fromRgba64", engine->newFunction(
		static_cast<QScriptValue (*)(QScriptContext *, QScriptEngine *)>(
			&QtScriptQRgba64::fromRgba64)),
			QScriptValue::ReadOnly | QScriptValue::Undeletable);
}

quint16 QtScriptQRgba64::alpha()
{
	auto __o = this->thiz<QRgba64 *>();
	if (__o)
	{
		return __o->alpha();
	}
	return static_cast<quint16>(0);
}

quint8 QtScriptQRgba64::alpha8()
{
	auto __o = this->thiz<QRgba64 *>();
	if (__o)
	{
		return __o->alpha8();
	}
	return static_cast<quint8>(0);
}

quint16 QtScriptQRgba64::blue()
{
	auto __o = this->thiz<QRgba64 *>();
	if (__o)
	{
		return __o->blue();
	}
	return static_cast<quint16>(0);
}

quint8 QtScriptQRgba64::blue8()
{
	auto __o = this->thiz<QRgba64 *>();
	if (__o)
	{
		return __o->blue8();
	}
	return static_cast<quint8>(0);
}

quint16 QtScriptQRgba64::green()
{
	auto __o = this->thiz<QRgba64 *>();
	if (__o)
	{
		return __o->green();
	}
	return static_cast<quint16>(0);
}

quint8 QtScriptQRgba64::green8()
{
	auto __o = this->thiz<QRgba64 *>();
	if (__o)
	{
		return __o->green8();
	}
	return static_cast<quint8>(0);
}

bool QtScriptQRgba64::isOpaque()
{
	auto __o = this->thiz<QRgba64 *>();
	if (__o)
	{
		return __o->isOpaque();
	}
	return false;
}

bool QtScriptQRgba64::isTransparent()
{
	auto __o = this->thiz<QRgba64 *>();
	if (__o)
	{
		return __o->isTransparent();
	}
	return false;
}

QRgba64 QtScriptQRgba64::premultiplied()
{
	auto __o = this->thiz<QRgba64 *>();
	if (__o)
	{
		return __o->premultiplied();
	}
	return QRgba64();
}

quint16 QtScriptQRgba64::red()
{
	auto __o = this->thiz<QRgba64 *>();
	if (__o)
	{
		return __o->red();
	}
	return static_cast<quint16>(0);
}

quint8 QtScriptQRgba64::red8()
{
	auto __o = this->thiz<QRgba64 *>();
	if (__o)
	{
		return __o->red8();
	}
	return static_cast<quint8>(0);
}

void QtScriptQRgba64::set(quint64 _rgba)
{
	auto __o = this->thiz<QRgba64 *>();
	if (__o)
	{
		__o->operator=(_rgba);
	}
}

void QtScriptQRgba64::setAlpha(quint16 _alpha)
{
	auto __o = this->thiz<QRgba64 *>();
	if (__o)
	{
		__o->setAlpha(_alpha);
	}
}

void QtScriptQRgba64::setBlue(quint16 _blue)
{
	auto __o = this->thiz<QRgba64 *>();
	if (__o)
	{
		__o->setBlue(_blue);
	}
}

void QtScriptQRgba64::setGreen(quint16 _green)
{
	auto __o = this->thiz<QRgba64 *>();
	if (__o)
	{
		__o->setGreen(_green);
	}
}

void QtScriptQRgba64::setRed(quint16 _red)
{
	auto __o = this->thiz<QRgba64 *>();
	if (__o)
	{
		__o->setRed(_red);
	}
}

uint QtScriptQRgba64::toArgb32()
{
	auto __o = this->thiz<QRgba64 *>();
	if (__o)
	{
		return __o->toArgb32();
	}
	return static_cast<uint>(0);
}

ushort QtScriptQRgba64::toRgb16()
{
	auto __o = this->thiz<QRgba64 *>();
	if (__o)
	{
		return __o->toRgb16();
	}
	return static_cast<ushort>(0);
}

QRgba64 QtScriptQRgba64::unpremultiplied()
{
	auto __o = this->thiz<QRgba64 *>();
	if (__o)
	{
		return __o->unpremultiplied();
	}
	return QRgba64();
}

QScriptValue QtScriptQRgba64::fromArgb32(QScriptContext *context, QScriptEngine* __e)
{
	if (!QtScriptUtils::checkArgumentCount(context, 1, 1))
	{
		return __e->uncaughtException();
	}

	switch (context->argumentCount())
	{
		case 1:
		{
			auto arg0 = qscriptvalue_cast<uint>(context->argument(0));
			return __e->toScriptValue(QRgba64::fromArgb32(arg0));
		}
	}

	QtScriptUtils::badArgumentsException(context,
			"QRgba64::fromArgb32");
	return __e->uncaughtException();
}

QScriptValue QtScriptQRgba64::fromRgba(QScriptContext *context, QScriptEngine* __e)
{
	if (!QtScriptUtils::checkArgumentCount(context, 4, 4))
	{
		return __e->uncaughtException();
	}

	switch (context->argumentCount())
	{
		case 4:
		{
			auto arg0 = qscriptvalue_cast<quint8>(context->argument(0));
			auto arg1 = qscriptvalue_cast<quint8>(context->argument(1));
			auto arg2 = qscriptvalue_cast<quint8>(context->argument(2));
			auto arg3 = qscriptvalue_cast<quint8>(context->argument(3));
			return __e->toScriptValue(QRgba64::fromRgba(arg0, arg1, arg2, arg3));
		}
	}

	QtScriptUtils::badArgumentsException(context,
			"QRgba64::fromRgba");
	return __e->uncaughtException();
}

QScriptValue QtScriptQRgba64::fromRgba64(QScriptContext *context, QScriptEngine* __e)
{
	if (!QtScriptUtils::checkArgumentCount(context, 1, 4))
	{
		return __e->uncaughtException();
	}

	switch (context->argumentCount())
	{
		case 1:
		{
			auto arg0 = qscriptvalue_cast<quint64>(context->argument(0));
			return __e->toScriptValue(QRgba64::fromRgba64(arg0));
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
			auto arg0 = qscriptvalue_cast<quint16>(context->argument(0));
			auto arg1 = qscriptvalue_cast<quint16>(context->argument(1));
			auto arg2 = qscriptvalue_cast<quint16>(context->argument(2));
			auto arg3 = qscriptvalue_cast<quint16>(context->argument(3));
			return __e->toScriptValue(QRgba64::fromRgba64(arg0, arg1, arg2, arg3));
		}
	}

	QtScriptUtils::badArgumentsException(context,
			"QRgba64::fromRgba64");
	return __e->uncaughtException();
}

int QtScriptQRgba64::constructorArgumentCountMin() const
{
	return 0;
}

int QtScriptQRgba64::constructorArgumentCountMax() const
{
	return 0;
}

bool QtScriptQRgba64::constructObject(QScriptContext *context, NativeObjectType &out)
{
	auto __e = context->engine();
	Q_UNUSED(__e);
	bool ok = false;
	switch (context->argumentCount())
	{
		case 0:
		{
			Q_UNUSED(out);
			ok = true;
			break;
		}
	}

	if (!ok)
	{
		QtScriptUtils::badArgumentsException(context,
			"QRgba64 constructor");
	}
	return ok;
}

QtScriptQColor::QtScriptQColor(QScriptEngine *engine, const QByteArray &className)
	: QtScriptBaseClassPrototype<QColor, false>(engine, className)
{
}

QtScriptQColor::QtScriptQColor(QScriptEngine *engine)
	: QtScriptQColor(engine, "Color")
{
}

void QtScriptQColor::Register(const QScriptValue &targetNamespace)
{
	auto engine = targetNamespace.engine();
	Q_ASSERT(engine);
	QScriptValue inherit;
	auto ctor = RegisterT<QColor, QtScriptQColor>(targetNamespace, inherit);
	Q_ASSERT(ctor.isFunction());
	ctor.setProperty("colorNames", engine->newFunction(
		static_cast<QScriptValue (*)(QScriptContext *, QScriptEngine *)>(
			&QtScriptQColor::colorNames)),
			QScriptValue::ReadOnly | QScriptValue::Undeletable);
	ctor.setProperty("fromCmyk", engine->newFunction(
		static_cast<QScriptValue (*)(QScriptContext *, QScriptEngine *)>(
			&QtScriptQColor::fromCmyk)),
			QScriptValue::ReadOnly | QScriptValue::Undeletable);
	ctor.setProperty("fromCmykF", engine->newFunction(
		static_cast<QScriptValue (*)(QScriptContext *, QScriptEngine *)>(
			&QtScriptQColor::fromCmykF)),
			QScriptValue::ReadOnly | QScriptValue::Undeletable);
	ctor.setProperty("fromHsl", engine->newFunction(
		static_cast<QScriptValue (*)(QScriptContext *, QScriptEngine *)>(
			&QtScriptQColor::fromHsl)),
			QScriptValue::ReadOnly | QScriptValue::Undeletable);
	ctor.setProperty("fromHslF", engine->newFunction(
		static_cast<QScriptValue (*)(QScriptContext *, QScriptEngine *)>(
			&QtScriptQColor::fromHslF)),
			QScriptValue::ReadOnly | QScriptValue::Undeletable);
	ctor.setProperty("fromHsv", engine->newFunction(
		static_cast<QScriptValue (*)(QScriptContext *, QScriptEngine *)>(
			&QtScriptQColor::fromHsv)),
			QScriptValue::ReadOnly | QScriptValue::Undeletable);
	ctor.setProperty("fromHsvF", engine->newFunction(
		static_cast<QScriptValue (*)(QScriptContext *, QScriptEngine *)>(
			&QtScriptQColor::fromHsvF)),
			QScriptValue::ReadOnly | QScriptValue::Undeletable);
	ctor.setProperty("fromRgb", engine->newFunction(
		static_cast<QScriptValue (*)(QScriptContext *, QScriptEngine *)>(
			&QtScriptQColor::fromRgb)),
			QScriptValue::ReadOnly | QScriptValue::Undeletable);
	ctor.setProperty("fromRgbF", engine->newFunction(
		static_cast<QScriptValue (*)(QScriptContext *, QScriptEngine *)>(
			&QtScriptQColor::fromRgbF)),
			QScriptValue::ReadOnly | QScriptValue::Undeletable);
	ctor.setProperty("fromRgba", engine->newFunction(
		static_cast<QScriptValue (*)(QScriptContext *, QScriptEngine *)>(
			&QtScriptQColor::fromRgba)),
			QScriptValue::ReadOnly | QScriptValue::Undeletable);
	ctor.setProperty("fromRgba64", engine->newFunction(
		static_cast<QScriptValue (*)(QScriptContext *, QScriptEngine *)>(
			&QtScriptQColor::fromRgba64)),
			QScriptValue::ReadOnly | QScriptValue::Undeletable);
	ctor.setProperty("isValidColor", engine->newFunction(
		static_cast<QScriptValue (*)(QScriptContext *, QScriptEngine *)>(
			&QtScriptQColor::isValidColor)),
			QScriptValue::ReadOnly | QScriptValue::Undeletable);
}

int QtScriptQColor::alpha()
{
	auto __o = this->thiz<QColor *>();
	if (__o)
	{
		return __o->alpha();
	}
	return 0;
}

qreal QtScriptQColor::alphaF()
{
	auto __o = this->thiz<QColor *>();
	if (__o)
	{
		return __o->alphaF();
	}
	return static_cast<qreal>(0);
}

int QtScriptQColor::black()
{
	auto __o = this->thiz<QColor *>();
	if (__o)
	{
		return __o->black();
	}
	return 0;
}

qreal QtScriptQColor::blackF()
{
	auto __o = this->thiz<QColor *>();
	if (__o)
	{
		return __o->blackF();
	}
	return static_cast<qreal>(0);
}

int QtScriptQColor::blue()
{
	auto __o = this->thiz<QColor *>();
	if (__o)
	{
		return __o->blue();
	}
	return 0;
}

qreal QtScriptQColor::blueF()
{
	auto __o = this->thiz<QColor *>();
	if (__o)
	{
		return __o->blueF();
	}
	return static_cast<qreal>(0);
}

QColor QtScriptQColor::convertTo(int colorSpec)
{
	auto __o = this->thiz<QColor *>();
	if (__o)
	{
		return __o->convertTo(QColor::Spec(colorSpec));
	}
	return QColor();
}

int QtScriptQColor::cyan()
{
	auto __o = this->thiz<QColor *>();
	if (__o)
	{
		return __o->cyan();
	}
	return 0;
}

qreal QtScriptQColor::cyanF()
{
	auto __o = this->thiz<QColor *>();
	if (__o)
	{
		return __o->cyanF();
	}
	return static_cast<qreal>(0);
}

QColor QtScriptQColor::dark()
{
	auto __o = this->thiz<QColor *>();
	if (__o)
	{
		return __o->dark();
	}
	return QColor();
}

QColor QtScriptQColor::dark(int f)
{
	auto __o = this->thiz<QColor *>();
	if (__o)
	{
		return __o->dark(f);
	}
	return QColor();
}

QColor QtScriptQColor::darker()
{
	auto __o = this->thiz<QColor *>();
	if (__o)
	{
		return __o->darker();
	}
	return QColor();
}

QColor QtScriptQColor::darker(int f)
{
	auto __o = this->thiz<QColor *>();
	if (__o)
	{
		return __o->darker(f);
	}
	return QColor();
}

bool QtScriptQColor::equals(const QColor& c)
{
	auto __o = this->thiz<QColor *>();
	if (__o)
	{
		return __o->operator==(c);
	}
	return false;
}

int QtScriptQColor::green()
{
	auto __o = this->thiz<QColor *>();
	if (__o)
	{
		return __o->green();
	}
	return 0;
}

qreal QtScriptQColor::greenF()
{
	auto __o = this->thiz<QColor *>();
	if (__o)
	{
		return __o->greenF();
	}
	return static_cast<qreal>(0);
}

int QtScriptQColor::hslHue()
{
	auto __o = this->thiz<QColor *>();
	if (__o)
	{
		return __o->hslHue();
	}
	return 0;
}

qreal QtScriptQColor::hslHueF()
{
	auto __o = this->thiz<QColor *>();
	if (__o)
	{
		return __o->hslHueF();
	}
	return static_cast<qreal>(0);
}

int QtScriptQColor::hslSaturation()
{
	auto __o = this->thiz<QColor *>();
	if (__o)
	{
		return __o->hslSaturation();
	}
	return 0;
}

qreal QtScriptQColor::hslSaturationF()
{
	auto __o = this->thiz<QColor *>();
	if (__o)
	{
		return __o->hslSaturationF();
	}
	return static_cast<qreal>(0);
}

int QtScriptQColor::hsvHue()
{
	auto __o = this->thiz<QColor *>();
	if (__o)
	{
		return __o->hsvHue();
	}
	return 0;
}

qreal QtScriptQColor::hsvHueF()
{
	auto __o = this->thiz<QColor *>();
	if (__o)
	{
		return __o->hsvHueF();
	}
	return static_cast<qreal>(0);
}

int QtScriptQColor::hsvSaturation()
{
	auto __o = this->thiz<QColor *>();
	if (__o)
	{
		return __o->hsvSaturation();
	}
	return 0;
}

qreal QtScriptQColor::hsvSaturationF()
{
	auto __o = this->thiz<QColor *>();
	if (__o)
	{
		return __o->hsvSaturationF();
	}
	return static_cast<qreal>(0);
}

int QtScriptQColor::hue()
{
	auto __o = this->thiz<QColor *>();
	if (__o)
	{
		return __o->hue();
	}
	return 0;
}

qreal QtScriptQColor::hueF()
{
	auto __o = this->thiz<QColor *>();
	if (__o)
	{
		return __o->hueF();
	}
	return static_cast<qreal>(0);
}

bool QtScriptQColor::isValid()
{
	auto __o = this->thiz<QColor *>();
	if (__o)
	{
		return __o->isValid();
	}
	return false;
}

QColor QtScriptQColor::light()
{
	auto __o = this->thiz<QColor *>();
	if (__o)
	{
		return __o->light();
	}
	return QColor();
}

QColor QtScriptQColor::light(int f)
{
	auto __o = this->thiz<QColor *>();
	if (__o)
	{
		return __o->light(f);
	}
	return QColor();
}

QColor QtScriptQColor::lighter()
{
	auto __o = this->thiz<QColor *>();
	if (__o)
	{
		return __o->lighter();
	}
	return QColor();
}

QColor QtScriptQColor::lighter(int f)
{
	auto __o = this->thiz<QColor *>();
	if (__o)
	{
		return __o->lighter(f);
	}
	return QColor();
}

int QtScriptQColor::lightness()
{
	auto __o = this->thiz<QColor *>();
	if (__o)
	{
		return __o->lightness();
	}
	return 0;
}

qreal QtScriptQColor::lightnessF()
{
	auto __o = this->thiz<QColor *>();
	if (__o)
	{
		return __o->lightnessF();
	}
	return static_cast<qreal>(0);
}

int QtScriptQColor::magenta()
{
	auto __o = this->thiz<QColor *>();
	if (__o)
	{
		return __o->magenta();
	}
	return 0;
}

qreal QtScriptQColor::magentaF()
{
	auto __o = this->thiz<QColor *>();
	if (__o)
	{
		return __o->magentaF();
	}
	return static_cast<qreal>(0);
}

QString QtScriptQColor::name()
{
	auto __o = this->thiz<QColor *>();
	if (__o)
	{
		return __o->name();
	}
	return QString();
}

QString QtScriptQColor::name(int format)
{
	auto __o = this->thiz<QColor *>();
	if (__o)
	{
		return __o->name(QColor::NameFormat(format));
	}
	return QString();
}

bool QtScriptQColor::notEquals(const QColor& c)
{
	auto __o = this->thiz<QColor *>();
	if (__o)
	{
		return __o->operator!=(c);
	}
	return false;
}

int QtScriptQColor::red()
{
	auto __o = this->thiz<QColor *>();
	if (__o)
	{
		return __o->red();
	}
	return 0;
}

qreal QtScriptQColor::redF()
{
	auto __o = this->thiz<QColor *>();
	if (__o)
	{
		return __o->redF();
	}
	return static_cast<qreal>(0);
}

unsigned int QtScriptQColor::rgb()
{
	auto __o = this->thiz<QColor *>();
	if (__o)
	{
		return __o->rgb();
	}
	return static_cast<unsigned int>(0);
}

unsigned int QtScriptQColor::rgba()
{
	auto __o = this->thiz<QColor *>();
	if (__o)
	{
		return __o->rgba();
	}
	return static_cast<unsigned int>(0);
}

QRgba64 QtScriptQColor::rgba64()
{
	auto __o = this->thiz<QColor *>();
	if (__o)
	{
		return __o->rgba64();
	}
	return QRgba64();
}

int QtScriptQColor::saturation()
{
	auto __o = this->thiz<QColor *>();
	if (__o)
	{
		return __o->saturation();
	}
	return 0;
}

qreal QtScriptQColor::saturationF()
{
	auto __o = this->thiz<QColor *>();
	if (__o)
	{
		return __o->saturationF();
	}
	return static_cast<qreal>(0);
}

void QtScriptQColor::set(const QColor& arg0)
{
	auto __o = this->thiz<QColor *>();
	if (__o)
	{
		__o->operator=(arg0);
	}
}

void QtScriptQColor::setAlpha(int alpha)
{
	auto __o = this->thiz<QColor *>();
	if (__o)
	{
		__o->setAlpha(alpha);
	}
}

void QtScriptQColor::setAlphaF(qreal alpha)
{
	auto __o = this->thiz<QColor *>();
	if (__o)
	{
		__o->setAlphaF(alpha);
	}
}

void QtScriptQColor::setBlue(int blue)
{
	auto __o = this->thiz<QColor *>();
	if (__o)
	{
		__o->setBlue(blue);
	}
}

void QtScriptQColor::setBlueF(qreal blue)
{
	auto __o = this->thiz<QColor *>();
	if (__o)
	{
		__o->setBlueF(blue);
	}
}

void QtScriptQColor::setCmyk(int c, int m, int y, int k)
{
	auto __o = this->thiz<QColor *>();
	if (__o)
	{
		__o->setCmyk(c, m, y, k);
	}
}

void QtScriptQColor::setCmyk(int c, int m, int y, int k, int a)
{
	auto __o = this->thiz<QColor *>();
	if (__o)
	{
		__o->setCmyk(c, m, y, k, a);
	}
}

void QtScriptQColor::setCmykF(qreal c, qreal m, qreal y, qreal k)
{
	auto __o = this->thiz<QColor *>();
	if (__o)
	{
		__o->setCmykF(c, m, y, k);
	}
}

void QtScriptQColor::setCmykF(qreal c, qreal m, qreal y, qreal k, qreal a)
{
	auto __o = this->thiz<QColor *>();
	if (__o)
	{
		__o->setCmykF(c, m, y, k, a);
	}
}

void QtScriptQColor::setGreen(int green)
{
	auto __o = this->thiz<QColor *>();
	if (__o)
	{
		__o->setGreen(green);
	}
}

void QtScriptQColor::setGreenF(qreal green)
{
	auto __o = this->thiz<QColor *>();
	if (__o)
	{
		__o->setGreenF(green);
	}
}

void QtScriptQColor::setHsl(int h, int s, int l)
{
	auto __o = this->thiz<QColor *>();
	if (__o)
	{
		__o->setHsl(h, s, l);
	}
}

void QtScriptQColor::setHsl(int h, int s, int l, int a)
{
	auto __o = this->thiz<QColor *>();
	if (__o)
	{
		__o->setHsl(h, s, l, a);
	}
}

void QtScriptQColor::setHslF(qreal h, qreal s, qreal l)
{
	auto __o = this->thiz<QColor *>();
	if (__o)
	{
		__o->setHslF(h, s, l);
	}
}

void QtScriptQColor::setHslF(qreal h, qreal s, qreal l, qreal a)
{
	auto __o = this->thiz<QColor *>();
	if (__o)
	{
		__o->setHslF(h, s, l, a);
	}
}

void QtScriptQColor::setHsv(int h, int s, int v)
{
	auto __o = this->thiz<QColor *>();
	if (__o)
	{
		__o->setHsv(h, s, v);
	}
}

void QtScriptQColor::setHsv(int h, int s, int v, int a)
{
	auto __o = this->thiz<QColor *>();
	if (__o)
	{
		__o->setHsv(h, s, v, a);
	}
}

void QtScriptQColor::setHsvF(qreal h, qreal s, qreal v)
{
	auto __o = this->thiz<QColor *>();
	if (__o)
	{
		__o->setHsvF(h, s, v);
	}
}

void QtScriptQColor::setHsvF(qreal h, qreal s, qreal v, qreal a)
{
	auto __o = this->thiz<QColor *>();
	if (__o)
	{
		__o->setHsvF(h, s, v, a);
	}
}

void QtScriptQColor::setNamedColor(const QString& name)
{
	auto __o = this->thiz<QColor *>();
	if (__o)
	{
		__o->setNamedColor(name);
	}
}

void QtScriptQColor::setRed(int red)
{
	auto __o = this->thiz<QColor *>();
	if (__o)
	{
		__o->setRed(red);
	}
}

void QtScriptQColor::setRedF(qreal red)
{
	auto __o = this->thiz<QColor *>();
	if (__o)
	{
		__o->setRedF(red);
	}
}

void QtScriptQColor::setRgb(unsigned int rgb)
{
	auto __o = this->thiz<QColor *>();
	if (__o)
	{
		__o->setRgb(rgb);
	}
}

void QtScriptQColor::setRgb(int r, int g, int b)
{
	auto __o = this->thiz<QColor *>();
	if (__o)
	{
		__o->setRgb(r, g, b);
	}
}

void QtScriptQColor::setRgb(int r, int g, int b, int a)
{
	auto __o = this->thiz<QColor *>();
	if (__o)
	{
		__o->setRgb(r, g, b, a);
	}
}

void QtScriptQColor::setRgbF(qreal r, qreal g, qreal b)
{
	auto __o = this->thiz<QColor *>();
	if (__o)
	{
		__o->setRgbF(r, g, b);
	}
}

void QtScriptQColor::setRgbF(qreal r, qreal g, qreal b, qreal a)
{
	auto __o = this->thiz<QColor *>();
	if (__o)
	{
		__o->setRgbF(r, g, b, a);
	}
}

void QtScriptQColor::setRgba(unsigned int rgba)
{
	auto __o = this->thiz<QColor *>();
	if (__o)
	{
		__o->setRgba(rgba);
	}
}

void QtScriptQColor::setRgba64(QRgba64 rgba)
{
	auto __o = this->thiz<QColor *>();
	if (__o)
	{
		__o->setRgba64(rgba);
	}
}

int QtScriptQColor::spec()
{
	auto __o = this->thiz<QColor *>();
	if (__o)
	{
		return int(__o->spec());
	}
	return 0;
}

QColor QtScriptQColor::toCmyk()
{
	auto __o = this->thiz<QColor *>();
	if (__o)
	{
		return __o->toCmyk();
	}
	return QColor();
}

QColor QtScriptQColor::toHsl()
{
	auto __o = this->thiz<QColor *>();
	if (__o)
	{
		return __o->toHsl();
	}
	return QColor();
}

QColor QtScriptQColor::toHsv()
{
	auto __o = this->thiz<QColor *>();
	if (__o)
	{
		return __o->toHsv();
	}
	return QColor();
}

QColor QtScriptQColor::toRgb()
{
	auto __o = this->thiz<QColor *>();
	if (__o)
	{
		return __o->toRgb();
	}
	return QColor();
}

int QtScriptQColor::value()
{
	auto __o = this->thiz<QColor *>();
	if (__o)
	{
		return __o->value();
	}
	return 0;
}

qreal QtScriptQColor::valueF()
{
	auto __o = this->thiz<QColor *>();
	if (__o)
	{
		return __o->valueF();
	}
	return static_cast<qreal>(0);
}

int QtScriptQColor::yellow()
{
	auto __o = this->thiz<QColor *>();
	if (__o)
	{
		return __o->yellow();
	}
	return 0;
}

qreal QtScriptQColor::yellowF()
{
	auto __o = this->thiz<QColor *>();
	if (__o)
	{
		return __o->yellowF();
	}
	return static_cast<qreal>(0);
}

QScriptValue QtScriptQColor::colorNames(QScriptContext *context, QScriptEngine* __e)
{
	if (!QtScriptUtils::checkArgumentCount(context, 0, 0))
	{
		return __e->uncaughtException();
	}

	switch (context->argumentCount())
	{
		case 0:
		{
			return __e->toScriptValue(QColor::colorNames());
		}
	}

	QtScriptUtils::badArgumentsException(context,
			"QColor::colorNames");
	return __e->uncaughtException();
}

QScriptValue QtScriptQColor::fromCmyk(QScriptContext *context, QScriptEngine* __e)
{
	if (!QtScriptUtils::checkArgumentCount(context, 4, 5))
	{
		return __e->uncaughtException();
	}

	switch (context->argumentCount())
	{
		case 4:
		{
			auto arg0 = qscriptvalue_cast<int>(context->argument(0));
			auto arg1 = qscriptvalue_cast<int>(context->argument(1));
			auto arg2 = qscriptvalue_cast<int>(context->argument(2));
			auto arg3 = qscriptvalue_cast<int>(context->argument(3));
			return __e->toScriptValue(QColor::fromCmyk(arg0, arg1, arg2, arg3));
		}
		case 5:
		{
			auto arg0 = qscriptvalue_cast<int>(context->argument(0));
			auto arg1 = qscriptvalue_cast<int>(context->argument(1));
			auto arg2 = qscriptvalue_cast<int>(context->argument(2));
			auto arg3 = qscriptvalue_cast<int>(context->argument(3));
			auto arg4 = qscriptvalue_cast<int>(context->argument(4));
			return __e->toScriptValue(QColor::fromCmyk(arg0, arg1, arg2, arg3, arg4));
		}
	}

	QtScriptUtils::badArgumentsException(context,
			"QColor::fromCmyk");
	return __e->uncaughtException();
}

QScriptValue QtScriptQColor::fromCmykF(QScriptContext *context, QScriptEngine* __e)
{
	if (!QtScriptUtils::checkArgumentCount(context, 4, 5))
	{
		return __e->uncaughtException();
	}

	switch (context->argumentCount())
	{
		case 4:
		{
			auto arg0 = qscriptvalue_cast<qreal>(context->argument(0));
			auto arg1 = qscriptvalue_cast<qreal>(context->argument(1));
			auto arg2 = qscriptvalue_cast<qreal>(context->argument(2));
			auto arg3 = qscriptvalue_cast<qreal>(context->argument(3));
			return __e->toScriptValue(QColor::fromCmykF(arg0, arg1, arg2, arg3));
		}
		case 5:
		{
			auto arg0 = qscriptvalue_cast<qreal>(context->argument(0));
			auto arg1 = qscriptvalue_cast<qreal>(context->argument(1));
			auto arg2 = qscriptvalue_cast<qreal>(context->argument(2));
			auto arg3 = qscriptvalue_cast<qreal>(context->argument(3));
			auto arg4 = qscriptvalue_cast<qreal>(context->argument(4));
			return __e->toScriptValue(QColor::fromCmykF(arg0, arg1, arg2, arg3, arg4));
		}
	}

	QtScriptUtils::badArgumentsException(context,
			"QColor::fromCmykF");
	return __e->uncaughtException();
}

QScriptValue QtScriptQColor::fromHsl(QScriptContext *context, QScriptEngine* __e)
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
			return __e->toScriptValue(QColor::fromHsl(arg0, arg1, arg2));
		}
		case 4:
		{
			auto arg0 = qscriptvalue_cast<int>(context->argument(0));
			auto arg1 = qscriptvalue_cast<int>(context->argument(1));
			auto arg2 = qscriptvalue_cast<int>(context->argument(2));
			auto arg3 = qscriptvalue_cast<int>(context->argument(3));
			return __e->toScriptValue(QColor::fromHsl(arg0, arg1, arg2, arg3));
		}
	}

	QtScriptUtils::badArgumentsException(context,
			"QColor::fromHsl");
	return __e->uncaughtException();
}

QScriptValue QtScriptQColor::fromHslF(QScriptContext *context, QScriptEngine* __e)
{
	if (!QtScriptUtils::checkArgumentCount(context, 3, 4))
	{
		return __e->uncaughtException();
	}

	switch (context->argumentCount())
	{
		case 3:
		{
			auto arg0 = qscriptvalue_cast<qreal>(context->argument(0));
			auto arg1 = qscriptvalue_cast<qreal>(context->argument(1));
			auto arg2 = qscriptvalue_cast<qreal>(context->argument(2));
			return __e->toScriptValue(QColor::fromHslF(arg0, arg1, arg2));
		}
		case 4:
		{
			auto arg0 = qscriptvalue_cast<qreal>(context->argument(0));
			auto arg1 = qscriptvalue_cast<qreal>(context->argument(1));
			auto arg2 = qscriptvalue_cast<qreal>(context->argument(2));
			auto arg3 = qscriptvalue_cast<qreal>(context->argument(3));
			return __e->toScriptValue(QColor::fromHslF(arg0, arg1, arg2, arg3));
		}
	}

	QtScriptUtils::badArgumentsException(context,
			"QColor::fromHslF");
	return __e->uncaughtException();
}

QScriptValue QtScriptQColor::fromHsv(QScriptContext *context, QScriptEngine* __e)
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
			return __e->toScriptValue(QColor::fromHsv(arg0, arg1, arg2));
		}
		case 4:
		{
			auto arg0 = qscriptvalue_cast<int>(context->argument(0));
			auto arg1 = qscriptvalue_cast<int>(context->argument(1));
			auto arg2 = qscriptvalue_cast<int>(context->argument(2));
			auto arg3 = qscriptvalue_cast<int>(context->argument(3));
			return __e->toScriptValue(QColor::fromHsv(arg0, arg1, arg2, arg3));
		}
	}

	QtScriptUtils::badArgumentsException(context,
			"QColor::fromHsv");
	return __e->uncaughtException();
}

QScriptValue QtScriptQColor::fromHsvF(QScriptContext *context, QScriptEngine* __e)
{
	if (!QtScriptUtils::checkArgumentCount(context, 3, 4))
	{
		return __e->uncaughtException();
	}

	switch (context->argumentCount())
	{
		case 3:
		{
			auto arg0 = qscriptvalue_cast<qreal>(context->argument(0));
			auto arg1 = qscriptvalue_cast<qreal>(context->argument(1));
			auto arg2 = qscriptvalue_cast<qreal>(context->argument(2));
			return __e->toScriptValue(QColor::fromHsvF(arg0, arg1, arg2));
		}
		case 4:
		{
			auto arg0 = qscriptvalue_cast<qreal>(context->argument(0));
			auto arg1 = qscriptvalue_cast<qreal>(context->argument(1));
			auto arg2 = qscriptvalue_cast<qreal>(context->argument(2));
			auto arg3 = qscriptvalue_cast<qreal>(context->argument(3));
			return __e->toScriptValue(QColor::fromHsvF(arg0, arg1, arg2, arg3));
		}
	}

	QtScriptUtils::badArgumentsException(context,
			"QColor::fromHsvF");
	return __e->uncaughtException();
}

QScriptValue QtScriptQColor::fromRgb(QScriptContext *context, QScriptEngine* __e)
{
	if (!QtScriptUtils::checkArgumentCount(context, 1, 4))
	{
		return __e->uncaughtException();
	}

	switch (context->argumentCount())
	{
		case 1:
		{
			auto arg0 = qscriptvalue_cast<unsigned int>(context->argument(0));
			return __e->toScriptValue(QColor::fromRgb(arg0));
		}
		case 2:
		{
			break;
		}
		case 3:
		{
			auto arg0 = qscriptvalue_cast<int>(context->argument(0));
			auto arg1 = qscriptvalue_cast<int>(context->argument(1));
			auto arg2 = qscriptvalue_cast<int>(context->argument(2));
			return __e->toScriptValue(QColor::fromRgb(arg0, arg1, arg2));
		}
		case 4:
		{
			auto arg0 = qscriptvalue_cast<int>(context->argument(0));
			auto arg1 = qscriptvalue_cast<int>(context->argument(1));
			auto arg2 = qscriptvalue_cast<int>(context->argument(2));
			auto arg3 = qscriptvalue_cast<int>(context->argument(3));
			return __e->toScriptValue(QColor::fromRgb(arg0, arg1, arg2, arg3));
		}
	}

	QtScriptUtils::badArgumentsException(context,
			"QColor::fromRgb");
	return __e->uncaughtException();
}

QScriptValue QtScriptQColor::fromRgbF(QScriptContext *context, QScriptEngine* __e)
{
	if (!QtScriptUtils::checkArgumentCount(context, 3, 4))
	{
		return __e->uncaughtException();
	}

	switch (context->argumentCount())
	{
		case 3:
		{
			auto arg0 = qscriptvalue_cast<qreal>(context->argument(0));
			auto arg1 = qscriptvalue_cast<qreal>(context->argument(1));
			auto arg2 = qscriptvalue_cast<qreal>(context->argument(2));
			return __e->toScriptValue(QColor::fromRgbF(arg0, arg1, arg2));
		}
		case 4:
		{
			auto arg0 = qscriptvalue_cast<qreal>(context->argument(0));
			auto arg1 = qscriptvalue_cast<qreal>(context->argument(1));
			auto arg2 = qscriptvalue_cast<qreal>(context->argument(2));
			auto arg3 = qscriptvalue_cast<qreal>(context->argument(3));
			return __e->toScriptValue(QColor::fromRgbF(arg0, arg1, arg2, arg3));
		}
	}

	QtScriptUtils::badArgumentsException(context,
			"QColor::fromRgbF");
	return __e->uncaughtException();
}

QScriptValue QtScriptQColor::fromRgba(QScriptContext *context, QScriptEngine* __e)
{
	if (!QtScriptUtils::checkArgumentCount(context, 1, 1))
	{
		return __e->uncaughtException();
	}

	switch (context->argumentCount())
	{
		case 1:
		{
			auto arg0 = qscriptvalue_cast<unsigned int>(context->argument(0));
			return __e->toScriptValue(QColor::fromRgba(arg0));
		}
	}

	QtScriptUtils::badArgumentsException(context,
			"QColor::fromRgba");
	return __e->uncaughtException();
}

QScriptValue QtScriptQColor::fromRgba64(QScriptContext *context, QScriptEngine* __e)
{
	if (!QtScriptUtils::checkArgumentCount(context, 1, 4))
	{
		return __e->uncaughtException();
	}

	switch (context->argumentCount())
	{
		case 1:
		{
			auto arg0 = qscriptvalue_cast<QRgba64>(context->argument(0));
			return __e->toScriptValue(QColor::fromRgba64(arg0));
		}
		case 2:
		{
			break;
		}
		case 3:
		{
			auto arg0 = qscriptvalue_cast<ushort>(context->argument(0));
			auto arg1 = qscriptvalue_cast<ushort>(context->argument(1));
			auto arg2 = qscriptvalue_cast<ushort>(context->argument(2));
			return __e->toScriptValue(QColor::fromRgba64(arg0, arg1, arg2));
		}
		case 4:
		{
			auto arg0 = qscriptvalue_cast<ushort>(context->argument(0));
			auto arg1 = qscriptvalue_cast<ushort>(context->argument(1));
			auto arg2 = qscriptvalue_cast<ushort>(context->argument(2));
			auto arg3 = qscriptvalue_cast<ushort>(context->argument(3));
			return __e->toScriptValue(QColor::fromRgba64(arg0, arg1, arg2, arg3));
		}
	}

	QtScriptUtils::badArgumentsException(context,
			"QColor::fromRgba64");
	return __e->uncaughtException();
}

QScriptValue QtScriptQColor::isValidColor(QScriptContext *context, QScriptEngine* __e)
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
			return __e->toScriptValue(QColor::isValidColor(arg0));
		}
	}

	QtScriptUtils::badArgumentsException(context,
			"QColor::isValidColor");
	return __e->uncaughtException();
}

int QtScriptQColor::constructorArgumentCountMin() const
{
	return 0;
}

int QtScriptQColor::constructorArgumentCountMax() const
{
	return 4;
}

bool QtScriptQColor::constructObject(QScriptContext *context, NativeObjectType &out)
{
	auto __e = context->engine();
	Q_UNUSED(__e);
	bool ok = false;
	switch (context->argumentCount())
	{
		case 0:
		{
			Q_UNUSED(out);
			ok = true;
			break;
		}
		case 1:
		{
			auto tmp_0 = qscriptvalue_cast<int>(context->argument(0));
			auto arg0 = Qt::GlobalColor(tmp_0);
			out = QColor(arg0);
			ok = true;
			break;
		}
		case 2:
		{
			break;
		}
		case 3:
		{
			auto arg0 = qscriptvalue_cast<int>(context->argument(0));
			auto arg1 = qscriptvalue_cast<int>(context->argument(1));
			auto arg2 = qscriptvalue_cast<int>(context->argument(2));
			out = QColor(arg0, arg1, arg2);
			ok = true;
			break;
		}
		case 4:
		{
			auto arg0 = qscriptvalue_cast<int>(context->argument(0));
			auto arg1 = qscriptvalue_cast<int>(context->argument(1));
			auto arg2 = qscriptvalue_cast<int>(context->argument(2));
			auto arg3 = qscriptvalue_cast<int>(context->argument(3));
			out = QColor(arg0, arg1, arg2, arg3);
			ok = true;
			break;
		}
	}

	if (!ok)
	{
		QtScriptUtils::badArgumentsException(context,
			"QColor constructor");
	}
	return ok;
}

QtScriptQVector2D::QtScriptQVector2D(QScriptEngine *engine, const QByteArray &className)
	: QtScriptBaseClassPrototype<QVector2D, false>(engine, className)
{
}

QtScriptQVector2D::QtScriptQVector2D(QScriptEngine *engine)
	: QtScriptQVector2D(engine, "Vector2D")
{
}

void QtScriptQVector2D::Register(const QScriptValue &targetNamespace)
{
	auto engine = targetNamespace.engine();
	Q_ASSERT(engine);
	QScriptValue inherit;
	auto ctor = RegisterT<QVector2D, QtScriptQVector2D>(targetNamespace, inherit);
	Q_ASSERT(ctor.isFunction());
	ctor.setProperty("dotProduct", engine->newFunction(
		static_cast<QScriptValue (*)(QScriptContext *, QScriptEngine *)>(
			&QtScriptQVector2D::dotProduct)),
			QScriptValue::ReadOnly | QScriptValue::Undeletable);
}

void QtScriptQVector2D::dec(const QVector2D& vector)
{
	auto __o = this->thiz<QVector2D *>();
	if (__o)
	{
		__o->operator-=(vector);
	}
}

float QtScriptQVector2D::distanceToLine(const QVector2D& point, const QVector2D& direction)
{
	auto __o = this->thiz<QVector2D *>();
	if (__o)
	{
		return __o->distanceToLine(point, direction);
	}
	return static_cast<float>(0);
}

float QtScriptQVector2D::distanceToPoint(const QVector2D& point)
{
	auto __o = this->thiz<QVector2D *>();
	if (__o)
	{
		return __o->distanceToPoint(point);
	}
	return static_cast<float>(0);
}

void QtScriptQVector2D::divideBy(float divisor)
{
	auto __o = this->thiz<QVector2D *>();
	if (__o)
	{
		__o->operator/=(divisor);
	}
}

void QtScriptQVector2D::inc(const QVector2D& vector)
{
	auto __o = this->thiz<QVector2D *>();
	if (__o)
	{
		__o->operator+=(vector);
	}
}

bool QtScriptQVector2D::isNull()
{
	auto __o = this->thiz<QVector2D *>();
	if (__o)
	{
		return __o->isNull();
	}
	return false;
}

float QtScriptQVector2D::length()
{
	auto __o = this->thiz<QVector2D *>();
	if (__o)
	{
		return __o->length();
	}
	return static_cast<float>(0);
}

float QtScriptQVector2D::lengthSquared()
{
	auto __o = this->thiz<QVector2D *>();
	if (__o)
	{
		return __o->lengthSquared();
	}
	return static_cast<float>(0);
}

void QtScriptQVector2D::multiplyBy(float factor)
{
	auto __o = this->thiz<QVector2D *>();
	if (__o)
	{
		__o->operator*=(factor);
	}
}

void QtScriptQVector2D::normalize()
{
	auto __o = this->thiz<QVector2D *>();
	if (__o)
	{
		__o->normalize();
	}
}

QVector2D QtScriptQVector2D::normalized()
{
	auto __o = this->thiz<QVector2D *>();
	if (__o)
	{
		return __o->normalized();
	}
	return QVector2D();
}

void QtScriptQVector2D::setX(float x)
{
	auto __o = this->thiz<QVector2D *>();
	if (__o)
	{
		__o->setX(x);
	}
}

void QtScriptQVector2D::setY(float y)
{
	auto __o = this->thiz<QVector2D *>();
	if (__o)
	{
		__o->setY(y);
	}
}

QPoint QtScriptQVector2D::toPoint()
{
	auto __o = this->thiz<QVector2D *>();
	if (__o)
	{
		return __o->toPoint();
	}
	return QPoint();
}

QPointF QtScriptQVector2D::toPointF()
{
	auto __o = this->thiz<QVector2D *>();
	if (__o)
	{
		return __o->toPointF();
	}
	return QPointF();
}

QVector3D QtScriptQVector2D::toVector3D()
{
	auto __o = this->thiz<QVector2D *>();
	if (__o)
	{
		return __o->toVector3D();
	}
	return QVector3D();
}

QVector4D QtScriptQVector2D::toVector4D()
{
	auto __o = this->thiz<QVector2D *>();
	if (__o)
	{
		return __o->toVector4D();
	}
	return QVector4D();
}

float QtScriptQVector2D::x()
{
	auto __o = this->thiz<QVector2D *>();
	if (__o)
	{
		return __o->x();
	}
	return static_cast<float>(0);
}

float QtScriptQVector2D::y()
{
	auto __o = this->thiz<QVector2D *>();
	if (__o)
	{
		return __o->y();
	}
	return static_cast<float>(0);
}

QScriptValue QtScriptQVector2D::dotProduct(QScriptContext *context, QScriptEngine* __e)
{
	if (!QtScriptUtils::checkArgumentCount(context, 2, 2))
	{
		return __e->uncaughtException();
	}

	switch (context->argumentCount())
	{
		case 2:
		{
			auto arg0 = qscriptvalue_cast<QVector2D>(context->argument(0));
			auto arg1 = qscriptvalue_cast<QVector2D>(context->argument(1));
			return __e->toScriptValue(QVector2D::dotProduct(arg0, arg1));
		}
	}

	QtScriptUtils::badArgumentsException(context,
			"QVector2D::dotProduct");
	return __e->uncaughtException();
}

int QtScriptQVector2D::constructorArgumentCountMin() const
{
	return 0;
}

int QtScriptQVector2D::constructorArgumentCountMax() const
{
	return 2;
}

bool QtScriptQVector2D::constructObject(QScriptContext *context, NativeObjectType &out)
{
	auto __e = context->engine();
	Q_UNUSED(__e);
	bool ok = false;
	switch (context->argumentCount())
	{
		case 0:
		{
			Q_UNUSED(out);
			ok = true;
			break;
		}
		case 1:
		{
			auto tmp_0 = qscriptvalue_cast<int>(context->argument(0));
			auto arg0 = Qt::Initialization(tmp_0);
			out = QVector2D(arg0);
			ok = true;
			break;
		}
		case 2:
		{
			auto arg0 = qscriptvalue_cast<float>(context->argument(0));
			auto arg1 = qscriptvalue_cast<float>(context->argument(1));
			out = QVector2D(arg0, arg1);
			ok = true;
			break;
		}
	}

	if (!ok)
	{
		QtScriptUtils::badArgumentsException(context,
			"QVector2D constructor");
	}
	return ok;
}

QtScriptQMatrix::QtScriptQMatrix(QScriptEngine *engine, const QByteArray &className)
	: QtScriptBaseClassPrototype<QMatrix, false>(engine, className)
{
}

QtScriptQMatrix::QtScriptQMatrix(QScriptEngine *engine)
	: QtScriptQMatrix(engine, "Matrix")
{
}

void QtScriptQMatrix::Register(const QScriptValue &targetNamespace)
{
	QScriptValue inherit;
	auto ctor = RegisterT<QMatrix, QtScriptQMatrix>(targetNamespace, inherit);
	Q_ASSERT(ctor.isFunction());
}

qreal QtScriptQMatrix::determinant()
{
	auto __o = this->thiz<QMatrix *>();
	if (__o)
	{
		return __o->determinant();
	}
	return static_cast<qreal>(0);
}

qreal QtScriptQMatrix::dx()
{
	auto __o = this->thiz<QMatrix *>();
	if (__o)
	{
		return __o->dx();
	}
	return static_cast<qreal>(0);
}

qreal QtScriptQMatrix::dy()
{
	auto __o = this->thiz<QMatrix *>();
	if (__o)
	{
		return __o->dy();
	}
	return static_cast<qreal>(0);
}

bool QtScriptQMatrix::equals(const QMatrix& arg0)
{
	auto __o = this->thiz<QMatrix *>();
	if (__o)
	{
		return __o->operator==(arg0);
	}
	return false;
}

QMatrix QtScriptQMatrix::inverted()
{
	auto __o = this->thiz<QMatrix *>();
	if (__o)
	{
		return __o->inverted();
	}
	return QMatrix();
}

QMatrix QtScriptQMatrix::inverted(bool* invertible)
{
	auto __o = this->thiz<QMatrix *>();
	if (__o)
	{
		return __o->inverted(invertible);
	}
	return QMatrix();
}

bool QtScriptQMatrix::isIdentity()
{
	auto __o = this->thiz<QMatrix *>();
	if (__o)
	{
		return __o->isIdentity();
	}
	return false;
}

bool QtScriptQMatrix::isInvertible()
{
	auto __o = this->thiz<QMatrix *>();
	if (__o)
	{
		return __o->isInvertible();
	}
	return false;
}

qreal QtScriptQMatrix::m11()
{
	auto __o = this->thiz<QMatrix *>();
	if (__o)
	{
		return __o->m11();
	}
	return static_cast<qreal>(0);
}

qreal QtScriptQMatrix::m12()
{
	auto __o = this->thiz<QMatrix *>();
	if (__o)
	{
		return __o->m12();
	}
	return static_cast<qreal>(0);
}

qreal QtScriptQMatrix::m21()
{
	auto __o = this->thiz<QMatrix *>();
	if (__o)
	{
		return __o->m21();
	}
	return static_cast<qreal>(0);
}

qreal QtScriptQMatrix::m22()
{
	auto __o = this->thiz<QMatrix *>();
	if (__o)
	{
		return __o->m22();
	}
	return static_cast<qreal>(0);
}

QPoint QtScriptQMatrix::map(const QPoint& p)
{
	auto __o = this->thiz<QMatrix *>();
	if (__o)
	{
		return __o->map(p);
	}
	return QPoint();
}

QRect QtScriptQMatrix::mapRect(const QRect& arg0)
{
	auto __o = this->thiz<QMatrix *>();
	if (__o)
	{
		return __o->mapRect(arg0);
	}
	return QRect();
}

QPolygon QtScriptQMatrix::mapToPolygon(const QRect& r)
{
	auto __o = this->thiz<QMatrix *>();
	if (__o)
	{
		return __o->mapToPolygon(r);
	}
	return QPolygon();
}

QMatrix QtScriptQMatrix::mul(const QMatrix& o)
{
	auto __o = this->thiz<QMatrix *>();
	if (__o)
	{
		return __o->operator*(o);
	}
	return QMatrix();
}

void QtScriptQMatrix::multiplyBy(const QMatrix& arg0)
{
	auto __o = this->thiz<QMatrix *>();
	if (__o)
	{
		__o->operator*=(arg0);
	}
}

bool QtScriptQMatrix::notEquals(const QMatrix& arg0)
{
	auto __o = this->thiz<QMatrix *>();
	if (__o)
	{
		return __o->operator!=(arg0);
	}
	return false;
}

void QtScriptQMatrix::reset()
{
	auto __o = this->thiz<QMatrix *>();
	if (__o)
	{
		__o->reset();
	}
}

QMatrix* QtScriptQMatrix::rotate(qreal a)
{
	auto __o = this->thiz<QMatrix *>();
	if (__o)
	{
		return &__o->rotate(a);
	}
	return nullptr;
}

QMatrix* QtScriptQMatrix::scale(qreal sx, qreal sy)
{
	auto __o = this->thiz<QMatrix *>();
	if (__o)
	{
		return &__o->scale(sx, sy);
	}
	return nullptr;
}

void QtScriptQMatrix::set(const QMatrix& arg0)
{
	auto __o = this->thiz<QMatrix *>();
	if (__o)
	{
		__o->operator=(arg0);
	}
}

void QtScriptQMatrix::setMatrix(qreal m11, qreal m12, qreal m21, qreal m22, qreal dx, qreal dy)
{
	auto __o = this->thiz<QMatrix *>();
	if (__o)
	{
		__o->setMatrix(m11, m12, m21, m22, dx, dy);
	}
}

QMatrix* QtScriptQMatrix::shear(qreal sh, qreal sv)
{
	auto __o = this->thiz<QMatrix *>();
	if (__o)
	{
		return &__o->shear(sh, sv);
	}
	return nullptr;
}

QMatrix* QtScriptQMatrix::translate(qreal dx, qreal dy)
{
	auto __o = this->thiz<QMatrix *>();
	if (__o)
	{
		return &__o->translate(dx, dy);
	}
	return nullptr;
}

int QtScriptQMatrix::constructorArgumentCountMin() const
{
	return 0;
}

int QtScriptQMatrix::constructorArgumentCountMax() const
{
	return 6;
}

bool QtScriptQMatrix::constructObject(QScriptContext *context, NativeObjectType &out)
{
	auto __e = context->engine();
	Q_UNUSED(__e);
	bool ok = false;
	switch (context->argumentCount())
	{
		case 0:
		{
			Q_UNUSED(out);
			ok = true;
			break;
		}
		case 1:
		{
			auto tmp_0 = qscriptvalue_cast<int>(context->argument(0));
			auto arg0 = Qt::Initialization(tmp_0);
			out = QMatrix(arg0);
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
			break;
		}
		case 5:
		{
			break;
		}
		case 6:
		{
			auto arg0 = qscriptvalue_cast<qreal>(context->argument(0));
			auto arg1 = qscriptvalue_cast<qreal>(context->argument(1));
			auto arg2 = qscriptvalue_cast<qreal>(context->argument(2));
			auto arg3 = qscriptvalue_cast<qreal>(context->argument(3));
			auto arg4 = qscriptvalue_cast<qreal>(context->argument(4));
			auto arg5 = qscriptvalue_cast<qreal>(context->argument(5));
			out = QMatrix(arg0, arg1, arg2, arg3, arg4, arg5);
			ok = true;
			break;
		}
	}

	if (!ok)
	{
		QtScriptUtils::badArgumentsException(context,
			"QMatrix constructor");
	}
	return ok;
}

QtScriptQTransform::QtScriptQTransform(QScriptEngine *engine, const QByteArray &className)
	: QtScriptBaseClassPrototype<QTransform, false>(engine, className)
{
}

QtScriptQTransform::QtScriptQTransform(QScriptEngine *engine)
	: QtScriptQTransform(engine, "Transform")
{
}

void QtScriptQTransform::Register(const QScriptValue &targetNamespace)
{
	auto engine = targetNamespace.engine();
	Q_ASSERT(engine);
	QScriptValue inherit;
	auto ctor = RegisterT<QTransform, QtScriptQTransform>(targetNamespace, inherit);
	Q_ASSERT(ctor.isFunction());
	ctor.setProperty("fromScale", engine->newFunction(
		static_cast<QScriptValue (*)(QScriptContext *, QScriptEngine *)>(
			&QtScriptQTransform::fromScale)),
			QScriptValue::ReadOnly | QScriptValue::Undeletable);
	ctor.setProperty("fromTranslate", engine->newFunction(
		static_cast<QScriptValue (*)(QScriptContext *, QScriptEngine *)>(
			&QtScriptQTransform::fromTranslate)),
			QScriptValue::ReadOnly | QScriptValue::Undeletable);
	ctor.setProperty("quadToQuad", engine->newFunction(
		static_cast<QScriptValue (*)(QScriptContext *, QScriptEngine *)>(
			&QtScriptQTransform::quadToQuad)),
			QScriptValue::ReadOnly | QScriptValue::Undeletable);
	ctor.setProperty("quadToSquare", engine->newFunction(
		static_cast<QScriptValue (*)(QScriptContext *, QScriptEngine *)>(
			&QtScriptQTransform::quadToSquare)),
			QScriptValue::ReadOnly | QScriptValue::Undeletable);
	ctor.setProperty("squareToQuad", engine->newFunction(
		static_cast<QScriptValue (*)(QScriptContext *, QScriptEngine *)>(
			&QtScriptQTransform::squareToQuad)),
			QScriptValue::ReadOnly | QScriptValue::Undeletable);
}

QTransform QtScriptQTransform::adjoint()
{
	auto __o = this->thiz<QTransform *>();
	if (__o)
	{
		return __o->adjoint();
	}
	return QTransform();
}

void QtScriptQTransform::dec(qreal div)
{
	auto __o = this->thiz<QTransform *>();
	if (__o)
	{
		__o->operator-=(div);
	}
}

qreal QtScriptQTransform::det()
{
	auto __o = this->thiz<QTransform *>();
	if (__o)
	{
		return __o->det();
	}
	return static_cast<qreal>(0);
}

qreal QtScriptQTransform::determinant()
{
	auto __o = this->thiz<QTransform *>();
	if (__o)
	{
		return __o->determinant();
	}
	return static_cast<qreal>(0);
}

void QtScriptQTransform::divideBy(qreal div)
{
	auto __o = this->thiz<QTransform *>();
	if (__o)
	{
		__o->operator/=(div);
	}
}

qreal QtScriptQTransform::dx()
{
	auto __o = this->thiz<QTransform *>();
	if (__o)
	{
		return __o->dx();
	}
	return static_cast<qreal>(0);
}

qreal QtScriptQTransform::dy()
{
	auto __o = this->thiz<QTransform *>();
	if (__o)
	{
		return __o->dy();
	}
	return static_cast<qreal>(0);
}

bool QtScriptQTransform::equals(const QTransform& arg0)
{
	auto __o = this->thiz<QTransform *>();
	if (__o)
	{
		return __o->operator==(arg0);
	}
	return false;
}

void QtScriptQTransform::inc(qreal div)
{
	auto __o = this->thiz<QTransform *>();
	if (__o)
	{
		__o->operator+=(div);
	}
}

QTransform QtScriptQTransform::inverted()
{
	auto __o = this->thiz<QTransform *>();
	if (__o)
	{
		return __o->inverted();
	}
	return QTransform();
}

QTransform QtScriptQTransform::inverted(bool* invertible)
{
	auto __o = this->thiz<QTransform *>();
	if (__o)
	{
		return __o->inverted(invertible);
	}
	return QTransform();
}

bool QtScriptQTransform::isAffine()
{
	auto __o = this->thiz<QTransform *>();
	if (__o)
	{
		return __o->isAffine();
	}
	return false;
}

bool QtScriptQTransform::isIdentity()
{
	auto __o = this->thiz<QTransform *>();
	if (__o)
	{
		return __o->isIdentity();
	}
	return false;
}

bool QtScriptQTransform::isInvertible()
{
	auto __o = this->thiz<QTransform *>();
	if (__o)
	{
		return __o->isInvertible();
	}
	return false;
}

bool QtScriptQTransform::isRotating()
{
	auto __o = this->thiz<QTransform *>();
	if (__o)
	{
		return __o->isRotating();
	}
	return false;
}

bool QtScriptQTransform::isScaling()
{
	auto __o = this->thiz<QTransform *>();
	if (__o)
	{
		return __o->isScaling();
	}
	return false;
}

bool QtScriptQTransform::isTranslating()
{
	auto __o = this->thiz<QTransform *>();
	if (__o)
	{
		return __o->isTranslating();
	}
	return false;
}

qreal QtScriptQTransform::m11()
{
	auto __o = this->thiz<QTransform *>();
	if (__o)
	{
		return __o->m11();
	}
	return static_cast<qreal>(0);
}

qreal QtScriptQTransform::m12()
{
	auto __o = this->thiz<QTransform *>();
	if (__o)
	{
		return __o->m12();
	}
	return static_cast<qreal>(0);
}

qreal QtScriptQTransform::m13()
{
	auto __o = this->thiz<QTransform *>();
	if (__o)
	{
		return __o->m13();
	}
	return static_cast<qreal>(0);
}

qreal QtScriptQTransform::m21()
{
	auto __o = this->thiz<QTransform *>();
	if (__o)
	{
		return __o->m21();
	}
	return static_cast<qreal>(0);
}

qreal QtScriptQTransform::m22()
{
	auto __o = this->thiz<QTransform *>();
	if (__o)
	{
		return __o->m22();
	}
	return static_cast<qreal>(0);
}

qreal QtScriptQTransform::m23()
{
	auto __o = this->thiz<QTransform *>();
	if (__o)
	{
		return __o->m23();
	}
	return static_cast<qreal>(0);
}

qreal QtScriptQTransform::m31()
{
	auto __o = this->thiz<QTransform *>();
	if (__o)
	{
		return __o->m31();
	}
	return static_cast<qreal>(0);
}

qreal QtScriptQTransform::m32()
{
	auto __o = this->thiz<QTransform *>();
	if (__o)
	{
		return __o->m32();
	}
	return static_cast<qreal>(0);
}

qreal QtScriptQTransform::m33()
{
	auto __o = this->thiz<QTransform *>();
	if (__o)
	{
		return __o->m33();
	}
	return static_cast<qreal>(0);
}

QPoint QtScriptQTransform::map(const QPoint& p)
{
	auto __o = this->thiz<QTransform *>();
	if (__o)
	{
		return __o->map(p);
	}
	return QPoint();
}

QRect QtScriptQTransform::mapRect(const QRect& arg0)
{
	auto __o = this->thiz<QTransform *>();
	if (__o)
	{
		return __o->mapRect(arg0);
	}
	return QRect();
}

QPolygon QtScriptQTransform::mapToPolygon(const QRect& r)
{
	auto __o = this->thiz<QTransform *>();
	if (__o)
	{
		return __o->mapToPolygon(r);
	}
	return QPolygon();
}

QTransform QtScriptQTransform::mul(const QTransform& o)
{
	auto __o = this->thiz<QTransform *>();
	if (__o)
	{
		return __o->operator*(o);
	}
	return QTransform();
}

void QtScriptQTransform::multiplyBy(const QTransform& arg0)
{
	auto __o = this->thiz<QTransform *>();
	if (__o)
	{
		__o->operator*=(arg0);
	}
}

bool QtScriptQTransform::notEquals(const QTransform& arg0)
{
	auto __o = this->thiz<QTransform *>();
	if (__o)
	{
		return __o->operator!=(arg0);
	}
	return false;
}

void QtScriptQTransform::reset()
{
	auto __o = this->thiz<QTransform *>();
	if (__o)
	{
		__o->reset();
	}
}

QTransform* QtScriptQTransform::rotate(qreal a)
{
	auto __o = this->thiz<QTransform *>();
	if (__o)
	{
		return &__o->rotate(a);
	}
	return nullptr;
}

QTransform* QtScriptQTransform::rotate(qreal a, int axis)
{
	auto __o = this->thiz<QTransform *>();
	if (__o)
	{
		return &__o->rotate(a, Qt::Axis(axis));
	}
	return nullptr;
}

QTransform* QtScriptQTransform::rotateRadians(qreal a)
{
	auto __o = this->thiz<QTransform *>();
	if (__o)
	{
		return &__o->rotateRadians(a);
	}
	return nullptr;
}

QTransform* QtScriptQTransform::rotateRadians(qreal a, int axis)
{
	auto __o = this->thiz<QTransform *>();
	if (__o)
	{
		return &__o->rotateRadians(a, Qt::Axis(axis));
	}
	return nullptr;
}

QTransform* QtScriptQTransform::scale(qreal sx, qreal sy)
{
	auto __o = this->thiz<QTransform *>();
	if (__o)
	{
		return &__o->scale(sx, sy);
	}
	return nullptr;
}

void QtScriptQTransform::set(const QTransform& arg0)
{
	auto __o = this->thiz<QTransform *>();
	if (__o)
	{
		__o->operator=(arg0);
	}
}

void QtScriptQTransform::setMatrix(qreal m11, qreal m12, qreal m13, qreal m21, qreal m22, qreal m23, qreal m31, qreal m32, qreal m33)
{
	auto __o = this->thiz<QTransform *>();
	if (__o)
	{
		__o->setMatrix(m11, m12, m13, m21, m22, m23, m31, m32, m33);
	}
}

QTransform* QtScriptQTransform::shear(qreal sh, qreal sv)
{
	auto __o = this->thiz<QTransform *>();
	if (__o)
	{
		return &__o->shear(sh, sv);
	}
	return nullptr;
}

QMatrix QtScriptQTransform::toAffine()
{
	auto __o = this->thiz<QTransform *>();
	if (__o)
	{
		return __o->toAffine();
	}
	return QMatrix();
}

QTransform* QtScriptQTransform::translate(qreal dx, qreal dy)
{
	auto __o = this->thiz<QTransform *>();
	if (__o)
	{
		return &__o->translate(dx, dy);
	}
	return nullptr;
}

QTransform QtScriptQTransform::transposed()
{
	auto __o = this->thiz<QTransform *>();
	if (__o)
	{
		return __o->transposed();
	}
	return QTransform();
}

int QtScriptQTransform::type()
{
	auto __o = this->thiz<QTransform *>();
	if (__o)
	{
		return int(__o->type());
	}
	return 0;
}

QScriptValue QtScriptQTransform::fromScale(QScriptContext *context, QScriptEngine* __e)
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
			return __e->toScriptValue(QTransform::fromScale(arg0, arg1));
		}
	}

	QtScriptUtils::badArgumentsException(context,
			"QTransform::fromScale");
	return __e->uncaughtException();
}

QScriptValue QtScriptQTransform::fromTranslate(QScriptContext *context, QScriptEngine* __e)
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
			return __e->toScriptValue(QTransform::fromTranslate(arg0, arg1));
		}
	}

	QtScriptUtils::badArgumentsException(context,
			"QTransform::fromTranslate");
	return __e->uncaughtException();
}

QScriptValue QtScriptQTransform::quadToQuad(QScriptContext *context, QScriptEngine* __e)
{
	if (!QtScriptUtils::checkArgumentCount(context, 3, 3))
	{
		return __e->uncaughtException();
	}

	switch (context->argumentCount())
	{
		case 3:
		{
			auto arg0 = qscriptvalue_cast<QPolygonF>(context->argument(0));
			auto arg1 = qscriptvalue_cast<QPolygonF>(context->argument(1));
			auto arg2 = qscriptvalue_cast<QTransform*>(context->argument(2));
			QTransform dummy_2;
			if (!arg2)
			{
				arg2 = &dummy_2;
			}
			return __e->toScriptValue(QTransform::quadToQuad(arg0, arg1, *arg2));
		}
	}

	QtScriptUtils::badArgumentsException(context,
			"QTransform::quadToQuad");
	return __e->uncaughtException();
}

QScriptValue QtScriptQTransform::quadToSquare(QScriptContext *context, QScriptEngine* __e)
{
	if (!QtScriptUtils::checkArgumentCount(context, 2, 2))
	{
		return __e->uncaughtException();
	}

	switch (context->argumentCount())
	{
		case 2:
		{
			auto arg0 = qscriptvalue_cast<QPolygonF>(context->argument(0));
			auto arg1 = qscriptvalue_cast<QTransform*>(context->argument(1));
			QTransform dummy_1;
			if (!arg1)
			{
				arg1 = &dummy_1;
			}
			return __e->toScriptValue(QTransform::quadToSquare(arg0, *arg1));
		}
	}

	QtScriptUtils::badArgumentsException(context,
			"QTransform::quadToSquare");
	return __e->uncaughtException();
}

QScriptValue QtScriptQTransform::squareToQuad(QScriptContext *context, QScriptEngine* __e)
{
	if (!QtScriptUtils::checkArgumentCount(context, 2, 2))
	{
		return __e->uncaughtException();
	}

	switch (context->argumentCount())
	{
		case 2:
		{
			auto arg0 = qscriptvalue_cast<QPolygonF>(context->argument(0));
			auto arg1 = qscriptvalue_cast<QTransform*>(context->argument(1));
			QTransform dummy_1;
			if (!arg1)
			{
				arg1 = &dummy_1;
			}
			return __e->toScriptValue(QTransform::squareToQuad(arg0, *arg1));
		}
	}

	QtScriptUtils::badArgumentsException(context,
			"QTransform::squareToQuad");
	return __e->uncaughtException();
}

int QtScriptQTransform::constructorArgumentCountMin() const
{
	return 0;
}

int QtScriptQTransform::constructorArgumentCountMax() const
{
	return 9;
}

bool QtScriptQTransform::constructObject(QScriptContext *context, NativeObjectType &out)
{
	auto __e = context->engine();
	Q_UNUSED(__e);
	bool ok = false;
	switch (context->argumentCount())
	{
		case 0:
		{
			Q_UNUSED(out);
			ok = true;
			break;
		}
		case 1:
		{
			auto tmp_0 = qscriptvalue_cast<int>(context->argument(0));
			auto arg0 = Qt::Initialization(tmp_0);
			out = QTransform(arg0);
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
			break;
		}
		case 5:
		{
			break;
		}
		case 6:
		{
			auto arg0 = qscriptvalue_cast<qreal>(context->argument(0));
			auto arg1 = qscriptvalue_cast<qreal>(context->argument(1));
			auto arg2 = qscriptvalue_cast<qreal>(context->argument(2));
			auto arg3 = qscriptvalue_cast<qreal>(context->argument(3));
			auto arg4 = qscriptvalue_cast<qreal>(context->argument(4));
			auto arg5 = qscriptvalue_cast<qreal>(context->argument(5));
			out = QTransform(arg0, arg1, arg2, arg3, arg4, arg5);
			ok = true;
			break;
		}
		case 7:
		{
			break;
		}
		case 8:
		{
			auto arg0 = qscriptvalue_cast<qreal>(context->argument(0));
			auto arg1 = qscriptvalue_cast<qreal>(context->argument(1));
			auto arg2 = qscriptvalue_cast<qreal>(context->argument(2));
			auto arg3 = qscriptvalue_cast<qreal>(context->argument(3));
			auto arg4 = qscriptvalue_cast<qreal>(context->argument(4));
			auto arg5 = qscriptvalue_cast<qreal>(context->argument(5));
			auto arg6 = qscriptvalue_cast<qreal>(context->argument(6));
			auto arg7 = qscriptvalue_cast<qreal>(context->argument(7));
			out = QTransform(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7);
			ok = true;
			break;
		}
		case 9:
		{
			auto arg0 = qscriptvalue_cast<qreal>(context->argument(0));
			auto arg1 = qscriptvalue_cast<qreal>(context->argument(1));
			auto arg2 = qscriptvalue_cast<qreal>(context->argument(2));
			auto arg3 = qscriptvalue_cast<qreal>(context->argument(3));
			auto arg4 = qscriptvalue_cast<qreal>(context->argument(4));
			auto arg5 = qscriptvalue_cast<qreal>(context->argument(5));
			auto arg6 = qscriptvalue_cast<qreal>(context->argument(6));
			auto arg7 = qscriptvalue_cast<qreal>(context->argument(7));
			auto arg8 = qscriptvalue_cast<qreal>(context->argument(8));
			out = QTransform(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8);
			ok = true;
			break;
		}
	}

	if (!ok)
	{
		QtScriptUtils::badArgumentsException(context,
			"QTransform constructor");
	}
	return ok;
}

QtScriptQVector3D::QtScriptQVector3D(QScriptEngine *engine, const QByteArray &className)
	: QtScriptBaseClassPrototype<QVector3D, false>(engine, className)
{
}

QtScriptQVector3D::QtScriptQVector3D(QScriptEngine *engine)
	: QtScriptQVector3D(engine, "Vector3D")
{
}

void QtScriptQVector3D::Register(const QScriptValue &targetNamespace)
{
	auto engine = targetNamespace.engine();
	Q_ASSERT(engine);
	QScriptValue inherit;
	auto ctor = RegisterT<QVector3D, QtScriptQVector3D>(targetNamespace, inherit);
	Q_ASSERT(ctor.isFunction());
	ctor.setProperty("crossProduct", engine->newFunction(
		static_cast<QScriptValue (*)(QScriptContext *, QScriptEngine *)>(
			&QtScriptQVector3D::crossProduct)),
			QScriptValue::ReadOnly | QScriptValue::Undeletable);
	ctor.setProperty("dotProduct", engine->newFunction(
		static_cast<QScriptValue (*)(QScriptContext *, QScriptEngine *)>(
			&QtScriptQVector3D::dotProduct)),
			QScriptValue::ReadOnly | QScriptValue::Undeletable);
	ctor.setProperty("normal", engine->newFunction(
		static_cast<QScriptValue (*)(QScriptContext *, QScriptEngine *)>(
			&QtScriptQVector3D::normal)),
			QScriptValue::ReadOnly | QScriptValue::Undeletable);
}

void QtScriptQVector3D::dec(const QVector3D& vector)
{
	auto __o = this->thiz<QVector3D *>();
	if (__o)
	{
		__o->operator-=(vector);
	}
}

float QtScriptQVector3D::distanceToLine(const QVector3D& point, const QVector3D& direction)
{
	auto __o = this->thiz<QVector3D *>();
	if (__o)
	{
		return __o->distanceToLine(point, direction);
	}
	return static_cast<float>(0);
}

float QtScriptQVector3D::distanceToPlane(const QVector3D& plane, const QVector3D& normal)
{
	auto __o = this->thiz<QVector3D *>();
	if (__o)
	{
		return __o->distanceToPlane(plane, normal);
	}
	return static_cast<float>(0);
}

float QtScriptQVector3D::distanceToPlane(const QVector3D& plane1, const QVector3D& plane2, const QVector3D& plane3)
{
	auto __o = this->thiz<QVector3D *>();
	if (__o)
	{
		return __o->distanceToPlane(plane1, plane2, plane3);
	}
	return static_cast<float>(0);
}

float QtScriptQVector3D::distanceToPoint(const QVector3D& point)
{
	auto __o = this->thiz<QVector3D *>();
	if (__o)
	{
		return __o->distanceToPoint(point);
	}
	return static_cast<float>(0);
}

void QtScriptQVector3D::divideBy(float divisor)
{
	auto __o = this->thiz<QVector3D *>();
	if (__o)
	{
		__o->operator/=(divisor);
	}
}

void QtScriptQVector3D::inc(const QVector3D& vector)
{
	auto __o = this->thiz<QVector3D *>();
	if (__o)
	{
		__o->operator+=(vector);
	}
}

bool QtScriptQVector3D::isNull()
{
	auto __o = this->thiz<QVector3D *>();
	if (__o)
	{
		return __o->isNull();
	}
	return false;
}

float QtScriptQVector3D::length()
{
	auto __o = this->thiz<QVector3D *>();
	if (__o)
	{
		return __o->length();
	}
	return static_cast<float>(0);
}

float QtScriptQVector3D::lengthSquared()
{
	auto __o = this->thiz<QVector3D *>();
	if (__o)
	{
		return __o->lengthSquared();
	}
	return static_cast<float>(0);
}

void QtScriptQVector3D::multiplyBy(float factor)
{
	auto __o = this->thiz<QVector3D *>();
	if (__o)
	{
		__o->operator*=(factor);
	}
}

void QtScriptQVector3D::normalize()
{
	auto __o = this->thiz<QVector3D *>();
	if (__o)
	{
		__o->normalize();
	}
}

QVector3D QtScriptQVector3D::normalized()
{
	auto __o = this->thiz<QVector3D *>();
	if (__o)
	{
		return __o->normalized();
	}
	return QVector3D();
}

QVector3D QtScriptQVector3D::project(const QMatrix4x4& modelView, const QMatrix4x4& projection, const QRect& viewport)
{
	auto __o = this->thiz<QVector3D *>();
	if (__o)
	{
		return __o->project(modelView, projection, viewport);
	}
	return QVector3D();
}

void QtScriptQVector3D::setX(float x)
{
	auto __o = this->thiz<QVector3D *>();
	if (__o)
	{
		__o->setX(x);
	}
}

void QtScriptQVector3D::setY(float y)
{
	auto __o = this->thiz<QVector3D *>();
	if (__o)
	{
		__o->setY(y);
	}
}

void QtScriptQVector3D::setZ(float z)
{
	auto __o = this->thiz<QVector3D *>();
	if (__o)
	{
		__o->setZ(z);
	}
}

QPoint QtScriptQVector3D::toPoint()
{
	auto __o = this->thiz<QVector3D *>();
	if (__o)
	{
		return __o->toPoint();
	}
	return QPoint();
}

QPointF QtScriptQVector3D::toPointF()
{
	auto __o = this->thiz<QVector3D *>();
	if (__o)
	{
		return __o->toPointF();
	}
	return QPointF();
}

QVector2D QtScriptQVector3D::toVector2D()
{
	auto __o = this->thiz<QVector3D *>();
	if (__o)
	{
		return __o->toVector2D();
	}
	return QVector2D();
}

QVector4D QtScriptQVector3D::toVector4D()
{
	auto __o = this->thiz<QVector3D *>();
	if (__o)
	{
		return __o->toVector4D();
	}
	return QVector4D();
}

QVector3D QtScriptQVector3D::unproject(const QMatrix4x4& modelView, const QMatrix4x4& projection, const QRect& viewport)
{
	auto __o = this->thiz<QVector3D *>();
	if (__o)
	{
		return __o->unproject(modelView, projection, viewport);
	}
	return QVector3D();
}

float QtScriptQVector3D::x()
{
	auto __o = this->thiz<QVector3D *>();
	if (__o)
	{
		return __o->x();
	}
	return static_cast<float>(0);
}

float QtScriptQVector3D::y()
{
	auto __o = this->thiz<QVector3D *>();
	if (__o)
	{
		return __o->y();
	}
	return static_cast<float>(0);
}

float QtScriptQVector3D::z()
{
	auto __o = this->thiz<QVector3D *>();
	if (__o)
	{
		return __o->z();
	}
	return static_cast<float>(0);
}

QScriptValue QtScriptQVector3D::crossProduct(QScriptContext *context, QScriptEngine* __e)
{
	if (!QtScriptUtils::checkArgumentCount(context, 2, 2))
	{
		return __e->uncaughtException();
	}

	switch (context->argumentCount())
	{
		case 2:
		{
			auto arg0 = qscriptvalue_cast<QVector3D>(context->argument(0));
			auto arg1 = qscriptvalue_cast<QVector3D>(context->argument(1));
			return __e->toScriptValue(QVector3D::crossProduct(arg0, arg1));
		}
	}

	QtScriptUtils::badArgumentsException(context,
			"QVector3D::crossProduct");
	return __e->uncaughtException();
}

QScriptValue QtScriptQVector3D::dotProduct(QScriptContext *context, QScriptEngine* __e)
{
	if (!QtScriptUtils::checkArgumentCount(context, 2, 2))
	{
		return __e->uncaughtException();
	}

	switch (context->argumentCount())
	{
		case 2:
		{
			auto arg0 = qscriptvalue_cast<QVector3D>(context->argument(0));
			auto arg1 = qscriptvalue_cast<QVector3D>(context->argument(1));
			return __e->toScriptValue(QVector3D::dotProduct(arg0, arg1));
		}
	}

	QtScriptUtils::badArgumentsException(context,
			"QVector3D::dotProduct");
	return __e->uncaughtException();
}

QScriptValue QtScriptQVector3D::normal(QScriptContext *context, QScriptEngine* __e)
{
	if (!QtScriptUtils::checkArgumentCount(context, 2, 3))
	{
		return __e->uncaughtException();
	}

	switch (context->argumentCount())
	{
		case 2:
		{
			auto arg0 = qscriptvalue_cast<QVector3D>(context->argument(0));
			auto arg1 = qscriptvalue_cast<QVector3D>(context->argument(1));
			return __e->toScriptValue(QVector3D::normal(arg0, arg1));
		}
		case 3:
		{
			auto arg0 = qscriptvalue_cast<QVector3D>(context->argument(0));
			auto arg1 = qscriptvalue_cast<QVector3D>(context->argument(1));
			auto arg2 = qscriptvalue_cast<QVector3D>(context->argument(2));
			return __e->toScriptValue(QVector3D::normal(arg0, arg1, arg2));
		}
	}

	QtScriptUtils::badArgumentsException(context,
			"QVector3D::normal");
	return __e->uncaughtException();
}

int QtScriptQVector3D::constructorArgumentCountMin() const
{
	return 0;
}

int QtScriptQVector3D::constructorArgumentCountMax() const
{
	return 3;
}

bool QtScriptQVector3D::constructObject(QScriptContext *context, NativeObjectType &out)
{
	auto __e = context->engine();
	Q_UNUSED(__e);
	bool ok = false;
	switch (context->argumentCount())
	{
		case 0:
		{
			Q_UNUSED(out);
			ok = true;
			break;
		}
		case 1:
		{
			auto tmp_0 = qscriptvalue_cast<int>(context->argument(0));
			auto arg0 = Qt::Initialization(tmp_0);
			out = QVector3D(arg0);
			ok = true;
			break;
		}
		case 2:
		{
			auto arg0 = qscriptvalue_cast<QVector2D>(context->argument(0));
			auto arg1 = qscriptvalue_cast<float>(context->argument(1));
			out = QVector3D(arg0, arg1);
			ok = true;
			break;
		}
		case 3:
		{
			auto arg0 = qscriptvalue_cast<float>(context->argument(0));
			auto arg1 = qscriptvalue_cast<float>(context->argument(1));
			auto arg2 = qscriptvalue_cast<float>(context->argument(2));
			out = QVector3D(arg0, arg1, arg2);
			ok = true;
			break;
		}
	}

	if (!ok)
	{
		QtScriptUtils::badArgumentsException(context,
			"QVector3D constructor");
	}
	return ok;
}

QtScriptQVector4D::QtScriptQVector4D(QScriptEngine *engine, const QByteArray &className)
	: QtScriptBaseClassPrototype<QVector4D, false>(engine, className)
{
}

QtScriptQVector4D::QtScriptQVector4D(QScriptEngine *engine)
	: QtScriptQVector4D(engine, "Vector4D")
{
}

void QtScriptQVector4D::Register(const QScriptValue &targetNamespace)
{
	auto engine = targetNamespace.engine();
	Q_ASSERT(engine);
	QScriptValue inherit;
	auto ctor = RegisterT<QVector4D, QtScriptQVector4D>(targetNamespace, inherit);
	Q_ASSERT(ctor.isFunction());
	ctor.setProperty("dotProduct", engine->newFunction(
		static_cast<QScriptValue (*)(QScriptContext *, QScriptEngine *)>(
			&QtScriptQVector4D::dotProduct)),
			QScriptValue::ReadOnly | QScriptValue::Undeletable);
}

void QtScriptQVector4D::dec(const QVector4D& vector)
{
	auto __o = this->thiz<QVector4D *>();
	if (__o)
	{
		__o->operator-=(vector);
	}
}

void QtScriptQVector4D::divideBy(float divisor)
{
	auto __o = this->thiz<QVector4D *>();
	if (__o)
	{
		__o->operator/=(divisor);
	}
}

void QtScriptQVector4D::inc(const QVector4D& vector)
{
	auto __o = this->thiz<QVector4D *>();
	if (__o)
	{
		__o->operator+=(vector);
	}
}

bool QtScriptQVector4D::isNull()
{
	auto __o = this->thiz<QVector4D *>();
	if (__o)
	{
		return __o->isNull();
	}
	return false;
}

float QtScriptQVector4D::length()
{
	auto __o = this->thiz<QVector4D *>();
	if (__o)
	{
		return __o->length();
	}
	return static_cast<float>(0);
}

float QtScriptQVector4D::lengthSquared()
{
	auto __o = this->thiz<QVector4D *>();
	if (__o)
	{
		return __o->lengthSquared();
	}
	return static_cast<float>(0);
}

void QtScriptQVector4D::multiplyBy(float factor)
{
	auto __o = this->thiz<QVector4D *>();
	if (__o)
	{
		__o->operator*=(factor);
	}
}

void QtScriptQVector4D::normalize()
{
	auto __o = this->thiz<QVector4D *>();
	if (__o)
	{
		__o->normalize();
	}
}

QVector4D QtScriptQVector4D::normalized()
{
	auto __o = this->thiz<QVector4D *>();
	if (__o)
	{
		return __o->normalized();
	}
	return QVector4D();
}

void QtScriptQVector4D::setW(float w)
{
	auto __o = this->thiz<QVector4D *>();
	if (__o)
	{
		__o->setW(w);
	}
}

void QtScriptQVector4D::setX(float x)
{
	auto __o = this->thiz<QVector4D *>();
	if (__o)
	{
		__o->setX(x);
	}
}

void QtScriptQVector4D::setY(float y)
{
	auto __o = this->thiz<QVector4D *>();
	if (__o)
	{
		__o->setY(y);
	}
}

void QtScriptQVector4D::setZ(float z)
{
	auto __o = this->thiz<QVector4D *>();
	if (__o)
	{
		__o->setZ(z);
	}
}

QPoint QtScriptQVector4D::toPoint()
{
	auto __o = this->thiz<QVector4D *>();
	if (__o)
	{
		return __o->toPoint();
	}
	return QPoint();
}

QPointF QtScriptQVector4D::toPointF()
{
	auto __o = this->thiz<QVector4D *>();
	if (__o)
	{
		return __o->toPointF();
	}
	return QPointF();
}

QVector2D QtScriptQVector4D::toVector2D()
{
	auto __o = this->thiz<QVector4D *>();
	if (__o)
	{
		return __o->toVector2D();
	}
	return QVector2D();
}

QVector2D QtScriptQVector4D::toVector2DAffine()
{
	auto __o = this->thiz<QVector4D *>();
	if (__o)
	{
		return __o->toVector2DAffine();
	}
	return QVector2D();
}

QVector3D QtScriptQVector4D::toVector3D()
{
	auto __o = this->thiz<QVector4D *>();
	if (__o)
	{
		return __o->toVector3D();
	}
	return QVector3D();
}

QVector3D QtScriptQVector4D::toVector3DAffine()
{
	auto __o = this->thiz<QVector4D *>();
	if (__o)
	{
		return __o->toVector3DAffine();
	}
	return QVector3D();
}

float QtScriptQVector4D::w()
{
	auto __o = this->thiz<QVector4D *>();
	if (__o)
	{
		return __o->w();
	}
	return static_cast<float>(0);
}

float QtScriptQVector4D::x()
{
	auto __o = this->thiz<QVector4D *>();
	if (__o)
	{
		return __o->x();
	}
	return static_cast<float>(0);
}

float QtScriptQVector4D::y()
{
	auto __o = this->thiz<QVector4D *>();
	if (__o)
	{
		return __o->y();
	}
	return static_cast<float>(0);
}

float QtScriptQVector4D::z()
{
	auto __o = this->thiz<QVector4D *>();
	if (__o)
	{
		return __o->z();
	}
	return static_cast<float>(0);
}

QScriptValue QtScriptQVector4D::dotProduct(QScriptContext *context, QScriptEngine* __e)
{
	if (!QtScriptUtils::checkArgumentCount(context, 2, 2))
	{
		return __e->uncaughtException();
	}

	switch (context->argumentCount())
	{
		case 2:
		{
			auto arg0 = qscriptvalue_cast<QVector4D>(context->argument(0));
			auto arg1 = qscriptvalue_cast<QVector4D>(context->argument(1));
			return __e->toScriptValue(QVector4D::dotProduct(arg0, arg1));
		}
	}

	QtScriptUtils::badArgumentsException(context,
			"QVector4D::dotProduct");
	return __e->uncaughtException();
}

int QtScriptQVector4D::constructorArgumentCountMin() const
{
	return 0;
}

int QtScriptQVector4D::constructorArgumentCountMax() const
{
	return 4;
}

bool QtScriptQVector4D::constructObject(QScriptContext *context, NativeObjectType &out)
{
	auto __e = context->engine();
	Q_UNUSED(__e);
	bool ok = false;
	switch (context->argumentCount())
	{
		case 0:
		{
			Q_UNUSED(out);
			ok = true;
			break;
		}
		case 1:
		{
			auto tmp_0 = qscriptvalue_cast<int>(context->argument(0));
			auto arg0 = Qt::Initialization(tmp_0);
			out = QVector4D(arg0);
			ok = true;
			break;
		}
		case 2:
		{
			auto arg0 = qscriptvalue_cast<QVector3D>(context->argument(0));
			auto arg1 = qscriptvalue_cast<float>(context->argument(1));
			out = QVector4D(arg0, arg1);
			ok = true;
			break;
		}
		case 3:
		{
			auto arg0 = qscriptvalue_cast<QVector2D>(context->argument(0));
			auto arg1 = qscriptvalue_cast<float>(context->argument(1));
			auto arg2 = qscriptvalue_cast<float>(context->argument(2));
			out = QVector4D(arg0, arg1, arg2);
			ok = true;
			break;
		}
		case 4:
		{
			auto arg0 = qscriptvalue_cast<float>(context->argument(0));
			auto arg1 = qscriptvalue_cast<float>(context->argument(1));
			auto arg2 = qscriptvalue_cast<float>(context->argument(2));
			auto arg3 = qscriptvalue_cast<float>(context->argument(3));
			out = QVector4D(arg0, arg1, arg2, arg3);
			ok = true;
			break;
		}
	}

	if (!ok)
	{
		QtScriptUtils::badArgumentsException(context,
			"QVector4D constructor");
	}
	return ok;
}

QtScriptQQuaternion::QtScriptQQuaternion(QScriptEngine *engine, const QByteArray &className)
	: QtScriptBaseClassPrototype<QQuaternion, false>(engine, className)
{
}

QtScriptQQuaternion::QtScriptQQuaternion(QScriptEngine *engine)
	: QtScriptQQuaternion(engine, "Quaternion")
{
}

void QtScriptQQuaternion::Register(const QScriptValue &targetNamespace)
{
	auto engine = targetNamespace.engine();
	Q_ASSERT(engine);
	QScriptValue inherit;
	auto ctor = RegisterT<QQuaternion, QtScriptQQuaternion>(targetNamespace, inherit);
	Q_ASSERT(ctor.isFunction());
	ctor.setProperty("dotProduct", engine->newFunction(
		static_cast<QScriptValue (*)(QScriptContext *, QScriptEngine *)>(
			&QtScriptQQuaternion::dotProduct)),
			QScriptValue::ReadOnly | QScriptValue::Undeletable);
	ctor.setProperty("fromAxes", engine->newFunction(
		static_cast<QScriptValue (*)(QScriptContext *, QScriptEngine *)>(
			&QtScriptQQuaternion::fromAxes)),
			QScriptValue::ReadOnly | QScriptValue::Undeletable);
	ctor.setProperty("fromAxisAndAngle", engine->newFunction(
		static_cast<QScriptValue (*)(QScriptContext *, QScriptEngine *)>(
			&QtScriptQQuaternion::fromAxisAndAngle)),
			QScriptValue::ReadOnly | QScriptValue::Undeletable);
	ctor.setProperty("fromDirection", engine->newFunction(
		static_cast<QScriptValue (*)(QScriptContext *, QScriptEngine *)>(
			&QtScriptQQuaternion::fromDirection)),
			QScriptValue::ReadOnly | QScriptValue::Undeletable);
	ctor.setProperty("fromEulerAngles", engine->newFunction(
		static_cast<QScriptValue (*)(QScriptContext *, QScriptEngine *)>(
			&QtScriptQQuaternion::fromEulerAngles)),
			QScriptValue::ReadOnly | QScriptValue::Undeletable);
	ctor.setProperty("fromRotationMatrix", engine->newFunction(
		static_cast<QScriptValue (*)(QScriptContext *, QScriptEngine *)>(
			&QtScriptQQuaternion::fromRotationMatrix)),
			QScriptValue::ReadOnly | QScriptValue::Undeletable);
	ctor.setProperty("nlerp", engine->newFunction(
		static_cast<QScriptValue (*)(QScriptContext *, QScriptEngine *)>(
			&QtScriptQQuaternion::nlerp)),
			QScriptValue::ReadOnly | QScriptValue::Undeletable);
	ctor.setProperty("rotationTo", engine->newFunction(
		static_cast<QScriptValue (*)(QScriptContext *, QScriptEngine *)>(
			&QtScriptQQuaternion::rotationTo)),
			QScriptValue::ReadOnly | QScriptValue::Undeletable);
	ctor.setProperty("slerp", engine->newFunction(
		static_cast<QScriptValue (*)(QScriptContext *, QScriptEngine *)>(
			&QtScriptQQuaternion::slerp)),
			QScriptValue::ReadOnly | QScriptValue::Undeletable);
}

QQuaternion QtScriptQQuaternion::conjugate()
{
	auto __o = this->thiz<QQuaternion *>();
	if (__o)
	{
		return __o->conjugate();
	}
	return QQuaternion();
}

QQuaternion QtScriptQQuaternion::conjugated()
{
	auto __o = this->thiz<QQuaternion *>();
	if (__o)
	{
		return __o->conjugated();
	}
	return QQuaternion();
}

void QtScriptQQuaternion::dec(const QQuaternion& quaternion)
{
	auto __o = this->thiz<QQuaternion *>();
	if (__o)
	{
		__o->operator-=(quaternion);
	}
}

void QtScriptQQuaternion::divideBy(float divisor)
{
	auto __o = this->thiz<QQuaternion *>();
	if (__o)
	{
		__o->operator/=(divisor);
	}
}

void QtScriptQQuaternion::getAxes(QVector3D* xAxis, QVector3D* yAxis, QVector3D* zAxis)
{
	auto __o = this->thiz<QQuaternion *>();
	if (__o)
	{
		__o->getAxes(xAxis, yAxis, zAxis);
	}
}

void QtScriptQQuaternion::inc(const QQuaternion& quaternion)
{
	auto __o = this->thiz<QQuaternion *>();
	if (__o)
	{
		__o->operator+=(quaternion);
	}
}

QQuaternion QtScriptQQuaternion::inverted()
{
	auto __o = this->thiz<QQuaternion *>();
	if (__o)
	{
		return __o->inverted();
	}
	return QQuaternion();
}

bool QtScriptQQuaternion::isIdentity()
{
	auto __o = this->thiz<QQuaternion *>();
	if (__o)
	{
		return __o->isIdentity();
	}
	return false;
}

bool QtScriptQQuaternion::isNull()
{
	auto __o = this->thiz<QQuaternion *>();
	if (__o)
	{
		return __o->isNull();
	}
	return false;
}

float QtScriptQQuaternion::length()
{
	auto __o = this->thiz<QQuaternion *>();
	if (__o)
	{
		return __o->length();
	}
	return static_cast<float>(0);
}

float QtScriptQQuaternion::lengthSquared()
{
	auto __o = this->thiz<QQuaternion *>();
	if (__o)
	{
		return __o->lengthSquared();
	}
	return static_cast<float>(0);
}

void QtScriptQQuaternion::multiplyBy(float factor)
{
	auto __o = this->thiz<QQuaternion *>();
	if (__o)
	{
		__o->operator*=(factor);
	}
}

void QtScriptQQuaternion::normalize()
{
	auto __o = this->thiz<QQuaternion *>();
	if (__o)
	{
		__o->normalize();
	}
}

QQuaternion QtScriptQQuaternion::normalized()
{
	auto __o = this->thiz<QQuaternion *>();
	if (__o)
	{
		return __o->normalized();
	}
	return QQuaternion();
}

QVector3D QtScriptQQuaternion::rotatedVector(const QVector3D& vector)
{
	auto __o = this->thiz<QQuaternion *>();
	if (__o)
	{
		return __o->rotatedVector(vector);
	}
	return QVector3D();
}

float QtScriptQQuaternion::scalar()
{
	auto __o = this->thiz<QQuaternion *>();
	if (__o)
	{
		return __o->scalar();
	}
	return static_cast<float>(0);
}

void QtScriptQQuaternion::setScalar(float scalar)
{
	auto __o = this->thiz<QQuaternion *>();
	if (__o)
	{
		__o->setScalar(scalar);
	}
}

void QtScriptQQuaternion::setVector(const QVector3D& vector)
{
	auto __o = this->thiz<QQuaternion *>();
	if (__o)
	{
		__o->setVector(vector);
	}
}

void QtScriptQQuaternion::setVector(float x, float y, float z)
{
	auto __o = this->thiz<QQuaternion *>();
	if (__o)
	{
		__o->setVector(x, y, z);
	}
}

void QtScriptQQuaternion::setX(float x)
{
	auto __o = this->thiz<QQuaternion *>();
	if (__o)
	{
		__o->setX(x);
	}
}

void QtScriptQQuaternion::setY(float y)
{
	auto __o = this->thiz<QQuaternion *>();
	if (__o)
	{
		__o->setY(y);
	}
}

void QtScriptQQuaternion::setZ(float z)
{
	auto __o = this->thiz<QQuaternion *>();
	if (__o)
	{
		__o->setZ(z);
	}
}

QVector3D QtScriptQQuaternion::toEulerAngles()
{
	auto __o = this->thiz<QQuaternion *>();
	if (__o)
	{
		return __o->toEulerAngles();
	}
	return QVector3D();
}

QVector4D QtScriptQQuaternion::toVector4D()
{
	auto __o = this->thiz<QQuaternion *>();
	if (__o)
	{
		return __o->toVector4D();
	}
	return QVector4D();
}

QVector3D QtScriptQQuaternion::vector()
{
	auto __o = this->thiz<QQuaternion *>();
	if (__o)
	{
		return __o->vector();
	}
	return QVector3D();
}

float QtScriptQQuaternion::x()
{
	auto __o = this->thiz<QQuaternion *>();
	if (__o)
	{
		return __o->x();
	}
	return static_cast<float>(0);
}

float QtScriptQQuaternion::y()
{
	auto __o = this->thiz<QQuaternion *>();
	if (__o)
	{
		return __o->y();
	}
	return static_cast<float>(0);
}

float QtScriptQQuaternion::z()
{
	auto __o = this->thiz<QQuaternion *>();
	if (__o)
	{
		return __o->z();
	}
	return static_cast<float>(0);
}

QScriptValue QtScriptQQuaternion::dotProduct(QScriptContext *context, QScriptEngine* __e)
{
	if (!QtScriptUtils::checkArgumentCount(context, 2, 2))
	{
		return __e->uncaughtException();
	}

	switch (context->argumentCount())
	{
		case 2:
		{
			auto arg0 = qscriptvalue_cast<QQuaternion>(context->argument(0));
			auto arg1 = qscriptvalue_cast<QQuaternion>(context->argument(1));
			return __e->toScriptValue(QQuaternion::dotProduct(arg0, arg1));
		}
	}

	QtScriptUtils::badArgumentsException(context,
			"QQuaternion::dotProduct");
	return __e->uncaughtException();
}

QScriptValue QtScriptQQuaternion::fromAxes(QScriptContext *context, QScriptEngine* __e)
{
	if (!QtScriptUtils::checkArgumentCount(context, 3, 3))
	{
		return __e->uncaughtException();
	}

	switch (context->argumentCount())
	{
		case 3:
		{
			auto arg0 = qscriptvalue_cast<QVector3D>(context->argument(0));
			auto arg1 = qscriptvalue_cast<QVector3D>(context->argument(1));
			auto arg2 = qscriptvalue_cast<QVector3D>(context->argument(2));
			return __e->toScriptValue(QQuaternion::fromAxes(arg0, arg1, arg2));
		}
	}

	QtScriptUtils::badArgumentsException(context,
			"QQuaternion::fromAxes");
	return __e->uncaughtException();
}

QScriptValue QtScriptQQuaternion::fromAxisAndAngle(QScriptContext *context, QScriptEngine* __e)
{
	if (!QtScriptUtils::checkArgumentCount(context, 2, 4))
	{
		return __e->uncaughtException();
	}

	switch (context->argumentCount())
	{
		case 2:
		{
			auto arg0 = qscriptvalue_cast<QVector3D>(context->argument(0));
			auto arg1 = qscriptvalue_cast<float>(context->argument(1));
			return __e->toScriptValue(QQuaternion::fromAxisAndAngle(arg0, arg1));
		}
		case 3:
		{
			break;
		}
		case 4:
		{
			auto arg0 = qscriptvalue_cast<float>(context->argument(0));
			auto arg1 = qscriptvalue_cast<float>(context->argument(1));
			auto arg2 = qscriptvalue_cast<float>(context->argument(2));
			auto arg3 = qscriptvalue_cast<float>(context->argument(3));
			return __e->toScriptValue(QQuaternion::fromAxisAndAngle(arg0, arg1, arg2, arg3));
		}
	}

	QtScriptUtils::badArgumentsException(context,
			"QQuaternion::fromAxisAndAngle");
	return __e->uncaughtException();
}

QScriptValue QtScriptQQuaternion::fromDirection(QScriptContext *context, QScriptEngine* __e)
{
	if (!QtScriptUtils::checkArgumentCount(context, 2, 2))
	{
		return __e->uncaughtException();
	}

	switch (context->argumentCount())
	{
		case 2:
		{
			auto arg0 = qscriptvalue_cast<QVector3D>(context->argument(0));
			auto arg1 = qscriptvalue_cast<QVector3D>(context->argument(1));
			return __e->toScriptValue(QQuaternion::fromDirection(arg0, arg1));
		}
	}

	QtScriptUtils::badArgumentsException(context,
			"QQuaternion::fromDirection");
	return __e->uncaughtException();
}

QScriptValue QtScriptQQuaternion::fromEulerAngles(QScriptContext *context, QScriptEngine* __e)
{
	if (!QtScriptUtils::checkArgumentCount(context, 1, 3))
	{
		return __e->uncaughtException();
	}

	switch (context->argumentCount())
	{
		case 1:
		{
			auto arg0 = qscriptvalue_cast<QVector3D>(context->argument(0));
			return __e->toScriptValue(QQuaternion::fromEulerAngles(arg0));
		}
		case 2:
		{
			break;
		}
		case 3:
		{
			auto arg0 = qscriptvalue_cast<float>(context->argument(0));
			auto arg1 = qscriptvalue_cast<float>(context->argument(1));
			auto arg2 = qscriptvalue_cast<float>(context->argument(2));
			return __e->toScriptValue(QQuaternion::fromEulerAngles(arg0, arg1, arg2));
		}
	}

	QtScriptUtils::badArgumentsException(context,
			"QQuaternion::fromEulerAngles");
	return __e->uncaughtException();
}

QScriptValue QtScriptQQuaternion::fromRotationMatrix(QScriptContext *context, QScriptEngine* __e)
{
	if (!QtScriptUtils::checkArgumentCount(context, 1, 1))
	{
		return __e->uncaughtException();
	}

	switch (context->argumentCount())
	{
		case 1:
		{
			auto arg0 = qscriptvalue_cast<QMatrix3x3>(context->argument(0));
			return __e->toScriptValue(QQuaternion::fromRotationMatrix(arg0));
		}
	}

	QtScriptUtils::badArgumentsException(context,
			"QQuaternion::fromRotationMatrix");
	return __e->uncaughtException();
}

QScriptValue QtScriptQQuaternion::nlerp(QScriptContext *context, QScriptEngine* __e)
{
	if (!QtScriptUtils::checkArgumentCount(context, 3, 3))
	{
		return __e->uncaughtException();
	}

	switch (context->argumentCount())
	{
		case 3:
		{
			auto arg0 = qscriptvalue_cast<QQuaternion>(context->argument(0));
			auto arg1 = qscriptvalue_cast<QQuaternion>(context->argument(1));
			auto arg2 = qscriptvalue_cast<float>(context->argument(2));
			return __e->toScriptValue(QQuaternion::nlerp(arg0, arg1, arg2));
		}
	}

	QtScriptUtils::badArgumentsException(context,
			"QQuaternion::nlerp");
	return __e->uncaughtException();
}

QScriptValue QtScriptQQuaternion::rotationTo(QScriptContext *context, QScriptEngine* __e)
{
	if (!QtScriptUtils::checkArgumentCount(context, 2, 2))
	{
		return __e->uncaughtException();
	}

	switch (context->argumentCount())
	{
		case 2:
		{
			auto arg0 = qscriptvalue_cast<QVector3D>(context->argument(0));
			auto arg1 = qscriptvalue_cast<QVector3D>(context->argument(1));
			return __e->toScriptValue(QQuaternion::rotationTo(arg0, arg1));
		}
	}

	QtScriptUtils::badArgumentsException(context,
			"QQuaternion::rotationTo");
	return __e->uncaughtException();
}

QScriptValue QtScriptQQuaternion::slerp(QScriptContext *context, QScriptEngine* __e)
{
	if (!QtScriptUtils::checkArgumentCount(context, 3, 3))
	{
		return __e->uncaughtException();
	}

	switch (context->argumentCount())
	{
		case 3:
		{
			auto arg0 = qscriptvalue_cast<QQuaternion>(context->argument(0));
			auto arg1 = qscriptvalue_cast<QQuaternion>(context->argument(1));
			auto arg2 = qscriptvalue_cast<float>(context->argument(2));
			return __e->toScriptValue(QQuaternion::slerp(arg0, arg1, arg2));
		}
	}

	QtScriptUtils::badArgumentsException(context,
			"QQuaternion::slerp");
	return __e->uncaughtException();
}

int QtScriptQQuaternion::constructorArgumentCountMin() const
{
	return 0;
}

int QtScriptQQuaternion::constructorArgumentCountMax() const
{
	return 4;
}

bool QtScriptQQuaternion::constructObject(QScriptContext *context, NativeObjectType &out)
{
	auto __e = context->engine();
	Q_UNUSED(__e);
	bool ok = false;
	switch (context->argumentCount())
	{
		case 0:
		{
			Q_UNUSED(out);
			ok = true;
			break;
		}
		case 1:
		{
			auto tmp_0 = qscriptvalue_cast<int>(context->argument(0));
			auto arg0 = Qt::Initialization(tmp_0);
			out = QQuaternion(arg0);
			ok = true;
			break;
		}
		case 2:
		{
			auto arg0 = qscriptvalue_cast<float>(context->argument(0));
			auto arg1 = qscriptvalue_cast<QVector3D>(context->argument(1));
			out = QQuaternion(arg0, arg1);
			ok = true;
			break;
		}
		case 3:
		{
			break;
		}
		case 4:
		{
			auto arg0 = qscriptvalue_cast<float>(context->argument(0));
			auto arg1 = qscriptvalue_cast<float>(context->argument(1));
			auto arg2 = qscriptvalue_cast<float>(context->argument(2));
			auto arg3 = qscriptvalue_cast<float>(context->argument(3));
			out = QQuaternion(arg0, arg1, arg2, arg3);
			ok = true;
			break;
		}
	}

	if (!ok)
	{
		QtScriptUtils::badArgumentsException(context,
			"QQuaternion constructor");
	}
	return ok;
}

void qtscript_register_all_QtGui(QScriptEngine* engine)
{
	QScriptValue targetNamespace;
	targetNamespace = QtScriptUtils::getNamespaceObject(engine, "qt");
	QtScriptQColor::Register(targetNamespace);
	QtScriptQMatrix::Register(targetNamespace);
	QtScriptQQuaternion::Register(targetNamespace);
	QtScriptQRgba64::Register(targetNamespace);
	QtScriptQTransform::Register(targetNamespace);
	QtScriptQVector2D::Register(targetNamespace);
	QtScriptQVector3D::Register(targetNamespace);
	QtScriptQVector4D::Register(targetNamespace);
}
