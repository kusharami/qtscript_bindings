#pragma once

#include "QtScriptQObject.h"
#include <QtGui/QtGui>

void qtscript_register_all_QtGui(QScriptEngine *engine);

class QtScriptQRgba64 final : public QtScriptBaseClassPrototype<QRgba64, false>
{
	Q_OBJECT

protected:
	explicit QtScriptQRgba64(QScriptEngine *engine, const QByteArray &className);

	virtual int constructorArgumentCountMin() const override;
	virtual int constructorArgumentCountMax() const override;
	virtual bool constructObject(QScriptContext *, NativeObjectType &out) override;

public:
	explicit QtScriptQRgba64(QScriptEngine *engine);
	static void Register(const QScriptValue &targetNamespace);

	Q_PROPERTY(quint16 alpha READ alpha WRITE setAlpha)
	Q_PROPERTY(quint16 blue READ blue WRITE setBlue)
	Q_PROPERTY(quint16 green READ green WRITE setGreen)
	Q_PROPERTY(quint16 red READ red WRITE setRed)
	quint16 alpha();
	Q_INVOKABLE quint8 alpha8();
	quint16 blue();
	Q_INVOKABLE quint8 blue8();
	quint16 green();
	Q_INVOKABLE quint8 green8();
	Q_INVOKABLE bool isOpaque();
	Q_INVOKABLE bool isTransparent();
	Q_INVOKABLE QRgba64 premultiplied();
	quint16 red();
	Q_INVOKABLE quint8 red8();
	Q_INVOKABLE void set(quint64 _rgba);
	void setAlpha(quint16 _alpha);
	void setBlue(quint16 _blue);
	void setGreen(quint16 _green);
	void setRed(quint16 _red);
	Q_INVOKABLE uint toArgb32();
	Q_INVOKABLE ushort toRgb16();
	Q_INVOKABLE QRgba64 unpremultiplied();
	static QScriptValue fromArgb32(QScriptContext *context, QScriptEngine* engine);
	static QScriptValue fromRgba(QScriptContext *context, QScriptEngine* engine);
	static QScriptValue fromRgba64(QScriptContext *context, QScriptEngine* engine);
};

Q_DECLARE_METATYPE(QRgba64)
Q_DECLARE_METATYPE(QRgba64 *)
Q_DECLARE_METATYPE(const QRgba64 *)

class QtScriptQColor final : public QtScriptBaseClassPrototype<QColor, false>
{
	Q_OBJECT

protected:
	explicit QtScriptQColor(QScriptEngine *engine, const QByteArray &className);

	virtual int constructorArgumentCountMin() const override;
	virtual int constructorArgumentCountMax() const override;
	virtual bool constructObject(QScriptContext *, NativeObjectType &out) override;

public:
	explicit QtScriptQColor(QScriptEngine *engine);
	static void Register(const QScriptValue &targetNamespace);

	Q_PROPERTY(int alpha READ alpha WRITE setAlpha)
	Q_PROPERTY(qreal alphaF READ alphaF WRITE setAlphaF)
	Q_PROPERTY(int blue READ blue WRITE setBlue)
	Q_PROPERTY(qreal blueF READ blueF WRITE setBlueF)
	Q_PROPERTY(int green READ green WRITE setGreen)
	Q_PROPERTY(qreal greenF READ greenF WRITE setGreenF)
	Q_PROPERTY(int red READ red WRITE setRed)
	Q_PROPERTY(qreal redF READ redF WRITE setRedF)
	Q_PROPERTY(unsigned int rgb READ rgb WRITE setRgb)
	Q_PROPERTY(unsigned int rgba READ rgba WRITE setRgba)
	Q_PROPERTY(QRgba64 rgba64 READ rgba64 WRITE setRgba64)
	int alpha();
	qreal alphaF();
	Q_INVOKABLE int black();
	Q_INVOKABLE qreal blackF();
	int blue();
	qreal blueF();
	Q_INVOKABLE QColor convertTo(int colorSpec);
	Q_INVOKABLE int cyan();
	Q_INVOKABLE qreal cyanF();
	Q_INVOKABLE QColor dark();
	Q_INVOKABLE QColor dark(int f);
	Q_INVOKABLE QColor darker();
	Q_INVOKABLE QColor darker(int f);
	Q_INVOKABLE bool equals(const QColor& c);
	int green();
	qreal greenF();
	Q_INVOKABLE int hslHue();
	Q_INVOKABLE qreal hslHueF();
	Q_INVOKABLE int hslSaturation();
	Q_INVOKABLE qreal hslSaturationF();
	Q_INVOKABLE int hsvHue();
	Q_INVOKABLE qreal hsvHueF();
	Q_INVOKABLE int hsvSaturation();
	Q_INVOKABLE qreal hsvSaturationF();
	Q_INVOKABLE int hue();
	Q_INVOKABLE qreal hueF();
	Q_INVOKABLE bool isValid();
	Q_INVOKABLE QColor light();
	Q_INVOKABLE QColor light(int f);
	Q_INVOKABLE QColor lighter();
	Q_INVOKABLE QColor lighter(int f);
	Q_INVOKABLE int lightness();
	Q_INVOKABLE qreal lightnessF();
	Q_INVOKABLE int magenta();
	Q_INVOKABLE qreal magentaF();
	Q_INVOKABLE QString name();
	Q_INVOKABLE QString name(int format);
	Q_INVOKABLE bool notEquals(const QColor& c);
	int red();
	qreal redF();
	unsigned int rgb();
	unsigned int rgba();
	QRgba64 rgba64();
	Q_INVOKABLE int saturation();
	Q_INVOKABLE qreal saturationF();
	Q_INVOKABLE void set(const QColor& arg0);
	void setAlpha(int alpha);
	void setAlphaF(qreal alpha);
	void setBlue(int blue);
	void setBlueF(qreal blue);
	Q_INVOKABLE void setCmyk(int c, int m, int y, int k);
	Q_INVOKABLE void setCmyk(int c, int m, int y, int k, int a);
	Q_INVOKABLE void setCmykF(qreal c, qreal m, qreal y, qreal k);
	Q_INVOKABLE void setCmykF(qreal c, qreal m, qreal y, qreal k, qreal a);
	void setGreen(int green);
	void setGreenF(qreal green);
	Q_INVOKABLE void setHsl(int h, int s, int l);
	Q_INVOKABLE void setHsl(int h, int s, int l, int a);
	Q_INVOKABLE void setHslF(qreal h, qreal s, qreal l);
	Q_INVOKABLE void setHslF(qreal h, qreal s, qreal l, qreal a);
	Q_INVOKABLE void setHsv(int h, int s, int v);
	Q_INVOKABLE void setHsv(int h, int s, int v, int a);
	Q_INVOKABLE void setHsvF(qreal h, qreal s, qreal v);
	Q_INVOKABLE void setHsvF(qreal h, qreal s, qreal v, qreal a);
	Q_INVOKABLE void setNamedColor(const QString& name);
	void setRed(int red);
	void setRedF(qreal red);
	void setRgb(unsigned int rgb);
	Q_INVOKABLE void setRgb(int r, int g, int b);
	Q_INVOKABLE void setRgb(int r, int g, int b, int a);
	Q_INVOKABLE void setRgbF(qreal r, qreal g, qreal b);
	Q_INVOKABLE void setRgbF(qreal r, qreal g, qreal b, qreal a);
	void setRgba(unsigned int rgba);
	void setRgba64(QRgba64 rgba);
	Q_INVOKABLE int spec();
	Q_INVOKABLE QColor toCmyk();
	Q_INVOKABLE QColor toHsl();
	Q_INVOKABLE QColor toHsv();
	Q_INVOKABLE QColor toRgb();
	Q_INVOKABLE int value();
	Q_INVOKABLE qreal valueF();
	Q_INVOKABLE int yellow();
	Q_INVOKABLE qreal yellowF();
	static QScriptValue colorNames(QScriptContext *context, QScriptEngine* engine);
	static QScriptValue fromCmyk(QScriptContext *context, QScriptEngine* engine);
	static QScriptValue fromCmykF(QScriptContext *context, QScriptEngine* engine);
	static QScriptValue fromHsl(QScriptContext *context, QScriptEngine* engine);
	static QScriptValue fromHslF(QScriptContext *context, QScriptEngine* engine);
	static QScriptValue fromHsv(QScriptContext *context, QScriptEngine* engine);
	static QScriptValue fromHsvF(QScriptContext *context, QScriptEngine* engine);
	static QScriptValue fromRgb(QScriptContext *context, QScriptEngine* engine);
	static QScriptValue fromRgbF(QScriptContext *context, QScriptEngine* engine);
	static QScriptValue fromRgba(QScriptContext *context, QScriptEngine* engine);
	static QScriptValue fromRgba64(QScriptContext *context, QScriptEngine* engine);
	static QScriptValue isValidColor(QScriptContext *context, QScriptEngine* engine);
};

Q_DECLARE_METATYPE(QColor)
Q_DECLARE_METATYPE(QColor *)
Q_DECLARE_METATYPE(const QColor *)

class QtScriptQVector2D final : public QtScriptBaseClassPrototype<QVector2D, false>
{
	Q_OBJECT

protected:
	explicit QtScriptQVector2D(QScriptEngine *engine, const QByteArray &className);

	virtual int constructorArgumentCountMin() const override;
	virtual int constructorArgumentCountMax() const override;
	virtual bool constructObject(QScriptContext *, NativeObjectType &out) override;

public:
	explicit QtScriptQVector2D(QScriptEngine *engine);
	static void Register(const QScriptValue &targetNamespace);

	Q_PROPERTY(float x READ x WRITE setX)
	Q_PROPERTY(float y READ y WRITE setY)
	Q_INVOKABLE void dec(const QVector2D& vector);
	Q_INVOKABLE float distanceToLine(const QVector2D& point, const QVector2D& direction);
	Q_INVOKABLE float distanceToPoint(const QVector2D& point);
	Q_INVOKABLE void divideBy(float divisor);
	Q_INVOKABLE void inc(const QVector2D& vector);
	Q_INVOKABLE bool isNull();
	Q_INVOKABLE float length();
	Q_INVOKABLE float lengthSquared();
	Q_INVOKABLE void multiplyBy(float factor);
	Q_INVOKABLE void normalize();
	Q_INVOKABLE QVector2D normalized();
	void setX(float x);
	void setY(float y);
	Q_INVOKABLE QPoint toPoint();
	Q_INVOKABLE QPointF toPointF();
	Q_INVOKABLE QVector3D toVector3D();
	Q_INVOKABLE QVector4D toVector4D();
	float x();
	float y();
	static QScriptValue dotProduct(QScriptContext *context, QScriptEngine* engine);
};

Q_DECLARE_METATYPE(QVector2D)
Q_DECLARE_METATYPE(QVector2D *)
Q_DECLARE_METATYPE(const QVector2D *)

class QtScriptQMatrix final : public QtScriptBaseClassPrototype<QMatrix, false>
{
	Q_OBJECT

protected:
	explicit QtScriptQMatrix(QScriptEngine *engine, const QByteArray &className);

	virtual int constructorArgumentCountMin() const override;
	virtual int constructorArgumentCountMax() const override;
	virtual bool constructObject(QScriptContext *, NativeObjectType &out) override;

public:
	explicit QtScriptQMatrix(QScriptEngine *engine);
	static void Register(const QScriptValue &targetNamespace);

	Q_INVOKABLE qreal determinant();
	Q_INVOKABLE qreal dx();
	Q_INVOKABLE qreal dy();
	Q_INVOKABLE bool equals(const QMatrix& arg0);
	Q_INVOKABLE QMatrix inverted();
	Q_INVOKABLE QMatrix inverted(bool* invertible);
	Q_INVOKABLE bool isIdentity();
	Q_INVOKABLE bool isInvertible();
	Q_INVOKABLE qreal m11();
	Q_INVOKABLE qreal m12();
	Q_INVOKABLE qreal m21();
	Q_INVOKABLE qreal m22();
	Q_INVOKABLE QPoint map(const QPoint& p);
	Q_INVOKABLE QRect mapRect(const QRect& arg0);
	Q_INVOKABLE QPolygon mapToPolygon(const QRect& r);
	Q_INVOKABLE QMatrix mul(const QMatrix& o);
	Q_INVOKABLE void multiplyBy(const QMatrix& arg0);
	Q_INVOKABLE bool notEquals(const QMatrix& arg0);
	Q_INVOKABLE void reset();
	Q_INVOKABLE QMatrix* rotate(qreal a);
	Q_INVOKABLE QMatrix* scale(qreal sx, qreal sy);
	Q_INVOKABLE void set(const QMatrix& arg0);
	Q_INVOKABLE void setMatrix(qreal m11, qreal m12, qreal m21, qreal m22, qreal dx, qreal dy);
	Q_INVOKABLE QMatrix* shear(qreal sh, qreal sv);
	Q_INVOKABLE QMatrix* translate(qreal dx, qreal dy);
};

Q_DECLARE_METATYPE(QMatrix)
Q_DECLARE_METATYPE(QMatrix *)
Q_DECLARE_METATYPE(const QMatrix *)

class QtScriptQTransform final : public QtScriptBaseClassPrototype<QTransform, false>
{
	Q_OBJECT

protected:
	explicit QtScriptQTransform(QScriptEngine *engine, const QByteArray &className);

	virtual int constructorArgumentCountMin() const override;
	virtual int constructorArgumentCountMax() const override;
	virtual bool constructObject(QScriptContext *, NativeObjectType &out) override;

public:
	explicit QtScriptQTransform(QScriptEngine *engine);
	static void Register(const QScriptValue &targetNamespace);

	Q_INVOKABLE QTransform adjoint();
	Q_INVOKABLE void dec(qreal div);
	Q_INVOKABLE qreal det();
	Q_INVOKABLE qreal determinant();
	Q_INVOKABLE void divideBy(qreal div);
	Q_INVOKABLE qreal dx();
	Q_INVOKABLE qreal dy();
	Q_INVOKABLE bool equals(const QTransform& arg0);
	Q_INVOKABLE void inc(qreal div);
	Q_INVOKABLE QTransform inverted();
	Q_INVOKABLE QTransform inverted(bool* invertible);
	Q_INVOKABLE bool isAffine();
	Q_INVOKABLE bool isIdentity();
	Q_INVOKABLE bool isInvertible();
	Q_INVOKABLE bool isRotating();
	Q_INVOKABLE bool isScaling();
	Q_INVOKABLE bool isTranslating();
	Q_INVOKABLE qreal m11();
	Q_INVOKABLE qreal m12();
	Q_INVOKABLE qreal m13();
	Q_INVOKABLE qreal m21();
	Q_INVOKABLE qreal m22();
	Q_INVOKABLE qreal m23();
	Q_INVOKABLE qreal m31();
	Q_INVOKABLE qreal m32();
	Q_INVOKABLE qreal m33();
	Q_INVOKABLE QPoint map(const QPoint& p);
	Q_INVOKABLE QRect mapRect(const QRect& arg0);
	Q_INVOKABLE QPolygon mapToPolygon(const QRect& r);
	Q_INVOKABLE QTransform mul(const QTransform& o);
	Q_INVOKABLE void multiplyBy(const QTransform& arg0);
	Q_INVOKABLE bool notEquals(const QTransform& arg0);
	Q_INVOKABLE void reset();
	Q_INVOKABLE QTransform* rotate(qreal a);
	Q_INVOKABLE QTransform* rotate(qreal a, int axis);
	Q_INVOKABLE QTransform* rotateRadians(qreal a);
	Q_INVOKABLE QTransform* rotateRadians(qreal a, int axis);
	Q_INVOKABLE QTransform* scale(qreal sx, qreal sy);
	Q_INVOKABLE void set(const QTransform& arg0);
	Q_INVOKABLE void setMatrix(qreal m11, qreal m12, qreal m13, qreal m21, qreal m22, qreal m23, qreal m31, qreal m32, qreal m33);
	Q_INVOKABLE QTransform* shear(qreal sh, qreal sv);
	Q_INVOKABLE QMatrix toAffine();
	Q_INVOKABLE QTransform* translate(qreal dx, qreal dy);
	Q_INVOKABLE QTransform transposed();
	Q_INVOKABLE int type();
	static QScriptValue fromScale(QScriptContext *context, QScriptEngine* engine);
	static QScriptValue fromTranslate(QScriptContext *context, QScriptEngine* engine);
	static QScriptValue quadToQuad(QScriptContext *context, QScriptEngine* engine);
	static QScriptValue quadToSquare(QScriptContext *context, QScriptEngine* engine);
	static QScriptValue squareToQuad(QScriptContext *context, QScriptEngine* engine);
};

Q_DECLARE_METATYPE(QTransform)
Q_DECLARE_METATYPE(QTransform *)
Q_DECLARE_METATYPE(const QTransform *)

class QtScriptQVector3D final : public QtScriptBaseClassPrototype<QVector3D, false>
{
	Q_OBJECT

protected:
	explicit QtScriptQVector3D(QScriptEngine *engine, const QByteArray &className);

	virtual int constructorArgumentCountMin() const override;
	virtual int constructorArgumentCountMax() const override;
	virtual bool constructObject(QScriptContext *, NativeObjectType &out) override;

public:
	explicit QtScriptQVector3D(QScriptEngine *engine);
	static void Register(const QScriptValue &targetNamespace);

	Q_PROPERTY(float x READ x WRITE setX)
	Q_PROPERTY(float y READ y WRITE setY)
	Q_PROPERTY(float z READ z WRITE setZ)
	Q_INVOKABLE void dec(const QVector3D& vector);
	Q_INVOKABLE float distanceToLine(const QVector3D& point, const QVector3D& direction);
	Q_INVOKABLE float distanceToPlane(const QVector3D& plane, const QVector3D& normal);
	Q_INVOKABLE float distanceToPlane(const QVector3D& plane1, const QVector3D& plane2, const QVector3D& plane3);
	Q_INVOKABLE float distanceToPoint(const QVector3D& point);
	Q_INVOKABLE void divideBy(float divisor);
	Q_INVOKABLE void inc(const QVector3D& vector);
	Q_INVOKABLE bool isNull();
	Q_INVOKABLE float length();
	Q_INVOKABLE float lengthSquared();
	Q_INVOKABLE void multiplyBy(float factor);
	Q_INVOKABLE void normalize();
	Q_INVOKABLE QVector3D normalized();
	Q_INVOKABLE QVector3D project(const QMatrix4x4& modelView, const QMatrix4x4& projection, const QRect& viewport);
	void setX(float x);
	void setY(float y);
	void setZ(float z);
	Q_INVOKABLE QPoint toPoint();
	Q_INVOKABLE QPointF toPointF();
	Q_INVOKABLE QVector2D toVector2D();
	Q_INVOKABLE QVector4D toVector4D();
	Q_INVOKABLE QVector3D unproject(const QMatrix4x4& modelView, const QMatrix4x4& projection, const QRect& viewport);
	float x();
	float y();
	float z();
	static QScriptValue crossProduct(QScriptContext *context, QScriptEngine* engine);
	static QScriptValue dotProduct(QScriptContext *context, QScriptEngine* engine);
	static QScriptValue normal(QScriptContext *context, QScriptEngine* engine);
};

Q_DECLARE_METATYPE(QVector3D)
Q_DECLARE_METATYPE(QVector3D *)
Q_DECLARE_METATYPE(const QVector3D *)

class QtScriptQVector4D final : public QtScriptBaseClassPrototype<QVector4D, false>
{
	Q_OBJECT

protected:
	explicit QtScriptQVector4D(QScriptEngine *engine, const QByteArray &className);

	virtual int constructorArgumentCountMin() const override;
	virtual int constructorArgumentCountMax() const override;
	virtual bool constructObject(QScriptContext *, NativeObjectType &out) override;

public:
	explicit QtScriptQVector4D(QScriptEngine *engine);
	static void Register(const QScriptValue &targetNamespace);

	Q_PROPERTY(float w READ w WRITE setW)
	Q_PROPERTY(float x READ x WRITE setX)
	Q_PROPERTY(float y READ y WRITE setY)
	Q_PROPERTY(float z READ z WRITE setZ)
	Q_INVOKABLE void dec(const QVector4D& vector);
	Q_INVOKABLE void divideBy(float divisor);
	Q_INVOKABLE void inc(const QVector4D& vector);
	Q_INVOKABLE bool isNull();
	Q_INVOKABLE float length();
	Q_INVOKABLE float lengthSquared();
	Q_INVOKABLE void multiplyBy(float factor);
	Q_INVOKABLE void normalize();
	Q_INVOKABLE QVector4D normalized();
	void setW(float w);
	void setX(float x);
	void setY(float y);
	void setZ(float z);
	Q_INVOKABLE QPoint toPoint();
	Q_INVOKABLE QPointF toPointF();
	Q_INVOKABLE QVector2D toVector2D();
	Q_INVOKABLE QVector2D toVector2DAffine();
	Q_INVOKABLE QVector3D toVector3D();
	Q_INVOKABLE QVector3D toVector3DAffine();
	float w();
	float x();
	float y();
	float z();
	static QScriptValue dotProduct(QScriptContext *context, QScriptEngine* engine);
};

Q_DECLARE_METATYPE(QVector4D)
Q_DECLARE_METATYPE(QVector4D *)
Q_DECLARE_METATYPE(const QVector4D *)

class QtScriptQQuaternion final : public QtScriptBaseClassPrototype<QQuaternion, false>
{
	Q_OBJECT

protected:
	explicit QtScriptQQuaternion(QScriptEngine *engine, const QByteArray &className);

	virtual int constructorArgumentCountMin() const override;
	virtual int constructorArgumentCountMax() const override;
	virtual bool constructObject(QScriptContext *, NativeObjectType &out) override;

public:
	explicit QtScriptQQuaternion(QScriptEngine *engine);
	static void Register(const QScriptValue &targetNamespace);

	Q_PROPERTY(float scalar READ scalar WRITE setScalar)
	Q_PROPERTY(QVector3D vector READ vector WRITE setVector)
	Q_PROPERTY(float x READ x WRITE setX)
	Q_PROPERTY(float y READ y WRITE setY)
	Q_PROPERTY(float z READ z WRITE setZ)
	Q_INVOKABLE QQuaternion conjugate();
	Q_INVOKABLE QQuaternion conjugated();
	Q_INVOKABLE void dec(const QQuaternion& quaternion);
	Q_INVOKABLE void divideBy(float divisor);
	Q_INVOKABLE void getAxes(QVector3D* xAxis, QVector3D* yAxis, QVector3D* zAxis);
	Q_INVOKABLE void inc(const QQuaternion& quaternion);
	Q_INVOKABLE QQuaternion inverted();
	Q_INVOKABLE bool isIdentity();
	Q_INVOKABLE bool isNull();
	Q_INVOKABLE float length();
	Q_INVOKABLE float lengthSquared();
	Q_INVOKABLE void multiplyBy(float factor);
	Q_INVOKABLE void normalize();
	Q_INVOKABLE QQuaternion normalized();
	Q_INVOKABLE QVector3D rotatedVector(const QVector3D& vector);
	float scalar();
	void setScalar(float scalar);
	void setVector(const QVector3D& vector);
	Q_INVOKABLE void setVector(float x, float y, float z);
	void setX(float x);
	void setY(float y);
	void setZ(float z);
	Q_INVOKABLE QVector3D toEulerAngles();
	Q_INVOKABLE QVector4D toVector4D();
	QVector3D vector();
	float x();
	float y();
	float z();
	static QScriptValue dotProduct(QScriptContext *context, QScriptEngine* engine);
	static QScriptValue fromAxes(QScriptContext *context, QScriptEngine* engine);
	static QScriptValue fromAxisAndAngle(QScriptContext *context, QScriptEngine* engine);
	static QScriptValue fromDirection(QScriptContext *context, QScriptEngine* engine);
	static QScriptValue fromEulerAngles(QScriptContext *context, QScriptEngine* engine);
	static QScriptValue fromRotationMatrix(QScriptContext *context, QScriptEngine* engine);
	static QScriptValue nlerp(QScriptContext *context, QScriptEngine* engine);
	static QScriptValue rotationTo(QScriptContext *context, QScriptEngine* engine);
	static QScriptValue slerp(QScriptContext *context, QScriptEngine* engine);
};

Q_DECLARE_METATYPE(QQuaternion)
Q_DECLARE_METATYPE(QQuaternion *)
Q_DECLARE_METATYPE(const QQuaternion *)

