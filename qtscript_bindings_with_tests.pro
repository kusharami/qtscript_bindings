TEMPLATE   = subdirs
SUBDIRS   += \
	qtscript_bindings \
	qtscript_bindings_tests

qtscript_bindings.file = qtscript_bindings.pro
qtscript_bindings_tests.file = qtscript_bindings_tests.pro

cocos_qtscript_bindings.depends = qtscript_bindings

