QT += core script

TARGET = qtscript_bindings
TEMPLATE = lib
CONFIG += staticlib

INCLUDEPATH += \
    manual \
    generated \
    src

HEADERS += \
    manual/QtScriptQByteArray.h \
    src/QtScriptAbstractClass.h \
    src/QtScriptBaseClassPrototype.h \
    src/QtScriptUtils.h \
    generated/qtscript_core.hpp
SOURCES += \
    manual/QtScriptQByteArray.cpp \
    src/QtScriptAbstractClass.cpp \
    src/QtScriptUtils.cpp \
    generated/qtscript_core.cpp

OTHER_FILES += \
    generated/bindings.ini \
    generated/win32/userconf.ini \
    generated/mac/userconf.ini
