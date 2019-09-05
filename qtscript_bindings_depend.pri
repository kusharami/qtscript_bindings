include($$PWD/qtscript_bindings_target.pri)

msvc:PRE_TARGETDEPS += $$QTSCRIPT_BINDINGS_LIB/qtscript_bindings.lib
else:PRE_TARGETDEPS += $$QTSCRIPT_BINDINGS_LIB/libqtscript_bindings.a

LIBS += -L$$QTSCRIPT_BINDINGS_LIB
LIBS += -lqtscript_bindings

INCLUDEPATH += \
    $$PWD/manual \
    $$PWD/generated \
    $$PWD/src
