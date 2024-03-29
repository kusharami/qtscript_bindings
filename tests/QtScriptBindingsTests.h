#pragma once

#include <QObject>

class QScriptValue;
class QtScriptBindingsTests : public QObject
{
	Q_OBJECT

private slots:
	void testScriptValueToVariant_data();
	void testScriptValueToVariant();

	void testConstructorThisObject_data();
	void testConstructorThisObject();

	void testFailConstructorWithoutNew_data();
	void testFailConstructorWithoutNew();

	void testCastDescendant_data();
	void testCastDescendant();

private:
	void printException(const QScriptValue &exception);
};
