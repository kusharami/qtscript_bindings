#include "QtScriptBindingsTests.h"

#include "QtScriptInstall.h"
#include "QtScriptUtils.h"
#include "QtScriptBool.h"

#include <QScriptEngine>
#include <QtTest>
#include <QVariant>

#define QTEST_ADD_COLUMN(type, name) QTest::addColumn<type>(#name);

void QtScriptBindingsTests::testScriptValueToVariant_data()
{
	QTEST_ADD_COLUMN(QString, program);
	QTEST_ADD_COLUMN(QVariant, value);

	QTest::newRow("QPoint")
		<< QStringLiteral("new qt.Point(1,2)") << QVariant(QPoint(1, 2));

	QTest::newRow("qt.Bool")
		<< QStringLiteral("new qt.Bool(true)")
		<< QVariant::fromValue(QtScriptBoolContainer{ true });
}

void QtScriptBindingsTests::testScriptValueToVariant()
{
	QFETCH(QString, program);
	QFETCH(QVariant, value);

	QScriptEngine engine;
	QtScriptInstallQtCore(&engine);

	auto result = engine.evaluate(program);
	if (engine.hasUncaughtException())
	{
		printException(engine.uncaughtException());
	}
	QVERIFY(!engine.hasUncaughtException());
	QCOMPARE(QtScriptUtils::scriptValueToVariant(result), value);
}

void QtScriptBindingsTests::testConstructorThisObject_data()
{
	QTEST_ADD_COLUMN(QString, program);
	QTEST_ADD_COLUMN(QString, key1);
	QTEST_ADD_COLUMN(QVariant, value1);
	QTEST_ADD_COLUMN(QString, key2);
	QTEST_ADD_COLUMN(QVariant, value2);

	QTest::newRow("QBuffer")
		<< QStringLiteral("\
var result = new qt.Buffer();\n\
result.data = new qt.ByteArray('xyz');\n\
result.__defineGetter__('buf', function() {\n\
	return this.buffer();\n\
});") //
		<< QStringLiteral("data") << QVariant(QByteArray("xyz"))
		<< QStringLiteral("buf") << QVariant(QByteArray("xyz"));

	QTest::newRow("QPoint") //
		<< QStringLiteral("\
var result = new qt.Point(112, 455);\n\
result.__defineGetter__('xx', function() {\n\
	return this.x;\n\
});") //
		<< QStringLiteral("xx") << QVariant(112) //
		<< QStringLiteral("y") << QVariant(455);

	QTest::newRow("Buffer")
		<< QStringLiteral("\
function Buffer(data)\n\
{\n\
    qt.Buffer.call(this, data, null);\n\
    this._bytes = data;\n\
    this._str = 'temp';\n\
}\n\
Buffer.prototype = Object.create(qt.Buffer.prototype);\n\
Buffer.prototype.__defineGetter__('str', function() {\n\
	return this._str;\n\
});\n\
var result = new Buffer(new qt.ByteArray('abc'));")
		<< QStringLiteral("data") << QVariant(QByteArray("abc"))
		<< QStringLiteral("str") << QVariant(QStringLiteral("temp"));

	QTest::newRow("Point") //
		<< QStringLiteral("\
function Point(x, y)\n\
{\n\
    qt.Point.call(this, x, y);\n\
    this._yy = this.y;\n\
}\n\
Point.prototype = Object.create(qt.Point.prototype);\n\
Point.prototype.__defineGetter__('yy', function() {\n\
	return this._yy;\n\
});\n\
var result = new Point(15, 25);")
		<< QStringLiteral("x") << QVariant(15) //
		<< QStringLiteral("yy") << QVariant(25);
}

void QtScriptBindingsTests::testConstructorThisObject()
{
	QFETCH(QString, program);
	QFETCH(QString, key1);
	QFETCH(QVariant, value1);
	QFETCH(QString, key2);
	QFETCH(QVariant, value2);

	QScriptEngine engine;
	QtScriptInstallQtCore(&engine);

	engine.evaluate(program);
	if (engine.hasUncaughtException())
	{
		printException(engine.uncaughtException());
	}
	QVERIFY(!engine.hasUncaughtException());
	auto go = engine.globalObject();
	auto result = go.property("result");
	QVERIFY(result.isObject());
	auto v1 = QtScriptUtils::scriptValueToVariant(
		result.property(key1), value1.userType());
	QCOMPARE(v1, value1);
	auto v2 = QtScriptUtils::scriptValueToVariant(
		result.property(key2), value2.userType());
	QCOMPARE(v2, value2);
}

void QtScriptBindingsTests::testFailConstructorWithoutNew_data()
{
	QTEST_ADD_COLUMN(QString, program);

	QTest::newRow("QBuffer") << QStringLiteral("qt.Buffer();");
	QTest::newRow("QPoint") << QStringLiteral("qt.Point(112, 455);");
}

void QtScriptBindingsTests::testFailConstructorWithoutNew()
{
	QFETCH(QString, program);

	QScriptEngine engine;
	QtScriptInstallQtCore(&engine);

	engine.evaluate(program);
	QVERIFY(engine.hasUncaughtException());
	printException(engine.uncaughtException());
}

void QtScriptBindingsTests::printException(const QScriptValue &exception)
{
	qDebug() << QString("%1 at %2")
					.arg(exception.toString())
					.arg(exception.property("lineNumber").toInt32());
}
