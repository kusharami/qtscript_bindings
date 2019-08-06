#pragma once

#include "QtScriptQObject.h"
#include "qtscript_core.hpp"
#include <QtNetwork/QtNetwork>

void qtscript_register_all_QtNetwork(QScriptEngine *engine);

class QtScriptQNetworkRequest final : public QtScriptBaseClassPrototype<QNetworkRequest, false>
{
	Q_OBJECT

protected:
	explicit QtScriptQNetworkRequest(QScriptEngine *engine, const QByteArray &className);

	virtual int constructorArgumentCountMin() const override;
	virtual int constructorArgumentCountMax() const override;
	virtual bool constructObject(QScriptContext *, NativeObjectType &out) override;

public:
	explicit QtScriptQNetworkRequest(QScriptEngine *engine);
	static void Register(const QScriptValue &targetNamespace);

	Q_PROPERTY(QObject* originatingObject READ originatingObject WRITE setOriginatingObject)
	Q_PROPERTY(QUrl url READ url WRITE setUrl)
	Q_PROPERTY(int priority READ priority WRITE setPriority)
	Q_PROPERTY(int maximumRedirectsAllowed READ maximumRedirectsAllowed WRITE setMaximumRedirectsAllowed)
	int maximumRedirectsAllowed();
	Q_INVOKABLE bool notEquals(const QNetworkRequest& other);
	Q_INVOKABLE void set(const QNetworkRequest& other);
	Q_INVOKABLE QByteArray rawHeader(const QByteArray& headerName);
	Q_INVOKABLE void setRawHeader(const QByteArray& headerName, const QByteArray& value);
	QUrl url();
	Q_INVOKABLE bool hasRawHeader(const QByteArray& headerName);
	QObject* originatingObject();
	Q_INVOKABLE void setAttribute(int code, const QVariant& value);
	Q_INVOKABLE bool equals(const QNetworkRequest& other);
	void setOriginatingObject(QObject* object);
	void setUrl(const QUrl& url);
	int priority();
	Q_INVOKABLE QVariant header(int header);
	void setPriority(int priority);
	Q_INVOKABLE QVariant attribute(int code);
	Q_INVOKABLE QVariant attribute(int code, const QVariant& defaultValue);
	Q_INVOKABLE QList<QByteArray> rawHeaderList();
	void setMaximumRedirectsAllowed(int maximumRedirectsAllowed);
	Q_INVOKABLE void setHeader(int header, const QVariant& value);
};

Q_DECLARE_METATYPE(QNetworkRequest *)
Q_DECLARE_METATYPE(const QNetworkRequest *)

class QtScriptQNetworkAccessManager : public QtScriptQObject
{
	Q_OBJECT

protected:
	explicit QtScriptQNetworkAccessManager(QScriptEngine *engine, const QByteArray &className);

	virtual int constructorArgumentCountMin() const override;
	virtual int constructorArgumentCountMax() const override;
	virtual bool constructObject(QScriptContext *, NativeObjectType &out) override;

public:
	explicit QtScriptQNetworkAccessManager(QScriptEngine *engine);
	static void Register(const QScriptValue &targetNamespace);

	Q_PROPERTY(bool strictTransportSecurityEnabled READ isStrictTransportSecurityEnabled WRITE setStrictTransportSecurityEnabled)
	Q_PROPERTY(int redirectPolicy READ redirectPolicy WRITE setRedirectPolicy)
	Q_INVOKABLE QNetworkReply* head(const QNetworkRequest& request);
	bool isStrictTransportSecurityEnabled();
	int redirectPolicy();
	Q_INVOKABLE QNetworkReply* postBytes(const QNetworkRequest& request, const QByteArray& data);
	Q_INVOKABLE QNetworkReply* get(const QNetworkRequest& request);
	Q_INVOKABLE void clearAccessCache();
	void setStrictTransportSecurityEnabled(bool enabled);
	Q_INVOKABLE QNetworkReply* putBytes(const QNetworkRequest& request, const QByteArray& data);
	Q_INVOKABLE QNetworkReply* deleteResource(const QNetworkRequest& request);
	void setRedirectPolicy(int policy);
	Q_INVOKABLE QNetworkReply* sendCustomRequest(const QNetworkRequest& request, const QByteArray& verb);
	Q_INVOKABLE QNetworkReply* sendCustomRequest(const QNetworkRequest& request, const QByteArray& verb, QIODevice* data);
	Q_INVOKABLE QNetworkReply* put(const QNetworkRequest& request, QIODevice* data);
	Q_INVOKABLE QNetworkReply* post(const QNetworkRequest& request, QIODevice* data);
	Q_INVOKABLE void connectToHost(const QString& hostName);
	Q_INVOKABLE void connectToHost(const QString& hostName, quint16 port);
	Q_INVOKABLE QStringList supportedSchemes();
	Q_INVOKABLE void clearConnectionCache();
};

Q_DECLARE_METATYPE(QNetworkAccessManager *)
Q_DECLARE_METATYPE(const QNetworkAccessManager *)

class QtScriptQNetworkReply : public QtScriptQIODevice
{
	Q_OBJECT

protected:
	explicit QtScriptQNetworkReply(QScriptEngine *engine, const QByteArray &className);

	virtual int constructorArgumentCountMin() const override;
	virtual int constructorArgumentCountMax() const override;
	virtual bool constructObject(QScriptContext *, NativeObjectType &out) override;

public:
	explicit QtScriptQNetworkReply(QScriptEngine *engine);
	static void Register(const QScriptValue &targetNamespace);

	Q_PROPERTY(qint64 readBufferSize READ readBufferSize WRITE setReadBufferSize)
	Q_INVOKABLE QVariant attribute(int code);
	Q_INVOKABLE bool isRunning();
	Q_INVOKABLE QVariant header(int header);
	Q_INVOKABLE bool isFinished();
	Q_INVOKABLE bool hasRawHeader(const QByteArray& headerName);
	qint64 readBufferSize();
	Q_INVOKABLE QNetworkRequest request();
	Q_INVOKABLE QUrl url();
	Q_INVOKABLE QNetworkAccessManager* manager();
	void setReadBufferSize(qint64 size);
	Q_INVOKABLE int error();
	Q_INVOKABLE QList<QByteArray> rawHeaderList();
	Q_INVOKABLE QByteArray rawHeader(const QByteArray& headerName);
	Q_INVOKABLE int operation();
	Q_INVOKABLE void ignoreSslErrors();
};

Q_DECLARE_METATYPE(QNetworkReply *)
Q_DECLARE_METATYPE(const QNetworkReply *)

