QT += core script network testlib

TARGET = qtscript_bindings_tests
TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle

DEFINES += QT_NO_DEPRECATED_WARNINGS

emscripten {
    DEFINES += QT_FORCE_ASSERTS
}

include(qtscript_bindings_depend.pri)

!msvc {
    clang|gcc {
        CONFIG += warn_off
        QMAKE_CXXFLAGS_WARN_OFF -= -w
        QMAKE_CXXFLAGS += -Wall
        QMAKE_CXXFLAGS += -Wno-overloaded-virtual
    }
}

HEADERS += \
    tests/QtScriptBindingsTests.h

SOURCES += \
    tests/Main.cpp \
    tests/QtScriptBindingsTests.cpp

