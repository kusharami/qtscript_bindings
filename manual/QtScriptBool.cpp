#include "QtScriptBool.h"

QtScriptBool::QtScriptBool(QScriptEngine *engine)
	: QtScriptBaseClassPrototype(engine, "Bool")
{
}

void QtScriptBool::Register(const QScriptValue &targetNamespace)
{
	auto engine = targetNamespace.engine();
	Q_ASSERT(engine);
	RegisterT<QtScriptBoolContainer, QtScriptBool>(
		targetNamespace, QScriptValue());

	qScriptRegisterMetaType<bool *>(engine, QtScriptBool::ptrToScriptValue,
		QtScriptBool::ptrFromScriptValue);
}

void QtScriptBool::setValue(bool v)
{
	auto obj = thisContainer();
	if (obj)
		obj->value = v;
}

QString QtScriptBool::toString() const
{
	return valueOf() ? QStringLiteral("true") : QStringLiteral("false");
}

bool QtScriptBool::valueOf() const
{
	auto obj = thisContainer();
	if (obj)
		return obj->value;

	return false;
}

int QtScriptBool::constructorArgumentCountMin() const
{
	return 0;
}

int QtScriptBool::constructorArgumentCountMax() const
{
	return 1;
}

bool QtScriptBool::constructObject(
	QScriptContext *context, QtScriptBoolContainer &out)
{
	switch (context->argumentCount())
	{
		case 0:
			out.value = false;
			return true;

		case 1:
		{
			auto arg = context->argument(0);
			auto container = getContainer(arg);
			out.value = container ? container->value : arg.toBool();
			return true;
		}
	}
	Q_UNREACHABLE();
	return false;
}

void QtScriptBool::ptrFromScriptValue(const QScriptValue &value, bool *&out)
{
	auto container = getContainer(value);
	out = container ? &container->value : nullptr;
}

QScriptValue QtScriptBool::ptrToScriptValue(
	QScriptEngine *engine, bool *const &object)
{
	if (!object)
		return engine->nullValue();

	QtScriptBoolContainer container;
	container.value = *object;
	return toScriptValue<QtScriptBool, QtScriptBoolContainer>(
		engine, container);
}

QtScriptBoolContainer *QtScriptBool::getContainer(const QScriptValue &value)
{
	auto data = value.data();
	if (!data.isVariant())
		return nullptr;

	return data.toVariant().value<QtScriptBoolContainer *>();
}

QtScriptBoolContainer *QtScriptBool::thisContainer() const
{
	return getContainer(thisObject());
}
