#include "QtScriptInstall.h"

#include "QtScriptUtils.h"
#include "QtScriptBool.h"
#include "QtScriptQObject.h"
#include "QtScriptQByteArray.h"
#include "QtScriptQDataStream.h"
#include "qtscript_core.hpp"

Q_DECLARE_METATYPE(QVector<QPointF>)
Q_DECLARE_METATYPE(QList<Qt::DayOfWeek>)
Q_DECLARE_METATYPE(QList<QByteArray>)
Q_DECLARE_METATYPE(QList<QFileInfo>)

void QtScriptInstallQtCore(QScriptEngine *engine)
{
	qScriptRegisterMetaType<Qt::DayOfWeek>(engine,
		QtScriptUtils::enumToScriptValue, QtScriptUtils::enumFromScriptValue);

	qScriptRegisterSequenceMetaType<QVector<QPointF>>(engine);
	qScriptRegisterSequenceMetaType<QList<Qt::DayOfWeek>>(engine);
	qScriptRegisterSequenceMetaType<QList<QFileInfo>>(engine);
	qScriptRegisterSequenceMetaType<QList<QByteArray>>(engine);

	auto targetNamespace = QtScriptUtils::getNamespaceObject(engine, "qt");
	QtScriptBool::Register(targetNamespace);
	QtScriptQObject::Register(targetNamespace);
	QtScriptQByteArray::Register(targetNamespace);
	QtScriptQDataStream::Register(targetNamespace);
	qtscript_register_all_QtCore(engine);
}
