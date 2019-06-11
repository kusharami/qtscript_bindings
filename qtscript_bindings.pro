QT += core script

TARGET = qtscript_bindings
TEMPLATE = lib
CONFIG += staticlib

include(qtscript_bindings_depend.pri)

DESTDIR = $$QTSCRIPT_BINDINGS_LIB

HEADERS += \
    manual/QtScriptBool.h \
    manual/QtScriptQByteArray.h \
    manual/QtScriptQDataStream.h \
    manual/QtScriptQObject.h \
    src/QtScriptAbstractClass.h \
    src/QtScriptBaseClassPrototype.h \
    src/QtScriptInstall.h \
    src/QtScriptUtils.h \
    generated/qtscript_core.hpp

SOURCES += \
    manual/QtScriptBool.cpp \
    manual/QtScriptQByteArray.cpp \
    manual/QtScriptQDataStream.cpp \
    manual/QtScriptQObject.cpp \
    src/QtScriptAbstractClass.cpp \
    src/QtScriptInstall.cpp \
    src/QtScriptUtils.cpp \
    generated/qtscript_core.cpp

OTHER_FILES += \
    generated/bindings.ini \
    generated/win32/userconf.ini \
    generated/mac/userconf.ini
