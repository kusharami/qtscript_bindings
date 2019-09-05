#include "QtScriptBaseClassPrototype.h"

struct QtScriptBoolContainer
{
	bool value;
};

Q_DECLARE_METATYPE(QtScriptBoolContainer)
Q_DECLARE_METATYPE(QtScriptBoolContainer *)
Q_DECLARE_METATYPE(const QtScriptBoolContainer *)
Q_DECLARE_METATYPE(bool *)

class QtScriptBool final
	: public QtScriptBaseClassPrototype<QtScriptBoolContainer>
{
	Q_OBJECT

	Q_PROPERTY(bool value READ valueOf WRITE setValue)

public:
	explicit QtScriptBool(QScriptEngine *engine);
	static void Register(const QScriptValue &targetNamespace);

	void setValue(bool v);

	Q_INVOKABLE QString toString() const;
	Q_INVOKABLE bool valueOf() const;

protected:
	virtual int constructorArgumentCountMin() const override;
	virtual int constructorArgumentCountMax() const override;
	virtual bool constructObject(
		QScriptContext *context, QtScriptBoolContainer &out) override;

	static void ptrFromScriptValue(const QScriptValue &value, bool *&out);

	static QScriptValue ptrToScriptValue(
		QScriptEngine *engine, bool *const &object);

	static QtScriptBoolContainer *getContainer(const QScriptValue &value);

private:
	QtScriptBoolContainer *thisContainer() const;
};
