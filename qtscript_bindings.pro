QT += core script gui

TARGET = qtscript_bindings
TEMPLATE = lib
CONFIG += staticlib

DEFINES += QT_NO_DEPRECATED_WARNINGS

emscripten {
    DEFINES += QT_FORCE_ASSERTS
}

include(qtscript_bindings_target.pri)

!msvc:clang|gcc:QMAKE_CXXFLAGS_WARN_ON += \
    -Wno-unknown-warning-option \
    -Wno-unknown-warning \
    -Wno-overloaded-virtual \
    -Wno-unused-command-line-argument
    
DESTDIR = $$QTSCRIPT_BINDINGS_LIB

INCLUDEPATH += \
    manual \
    generated \
    src

HEADERS += \
    manual/QtScriptBool.h \
    manual/QtScriptQByteArray.h \
    manual/QtScriptQDataStream.h \
    manual/QtScriptQObject.h \
    src/QtScriptAbstractClass.h \
    src/QtScriptBaseClassPrototype.h \
    src/QtScriptInstall.h \
    src/QtScriptUtils.h \
    generated/qtscript_core.hpp \
    generated/qtscript_gui.hpp \
    generated/qtscript_network.hpp

SOURCES += \
    manual/QtScriptBool.cpp \
    manual/QtScriptQByteArray.cpp \
    manual/QtScriptQDataStream.cpp \
    manual/QtScriptQObject.cpp \
    src/QtScriptAbstractClass.cpp \
    src/QtScriptInstall.cpp \
    src/QtScriptUtils.cpp \
    generated/qtscript_core.cpp \
    generated/qtscript_gui.cpp \
    generated/qtscript_network.cpp

OTHER_FILES += \
    generated/core_bindings.ini \
    generated/gui_bindings.ini \
    generated/network_bindings.ini \
    generated/win32/userconf.ini \
    generated/mac/userconf.ini
