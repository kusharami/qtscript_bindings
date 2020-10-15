#include "QtScriptBindingsTests.h"

#include <QDebug>
#include <QtTest>
#include <QGuiApplication>

int main(int argc, char *argv[])
{
	qDebug() << "Init tests...";
	QCoreApplication app(argc, argv);

	QTEST_SET_MAIN_SOURCE_PATH

	QtScriptBindingsTests tests;

	return QTest::qExec(&tests, argc, argv);
}
