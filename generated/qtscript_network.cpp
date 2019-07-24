#include "qtscript_network.hpp"
#include "QtScriptUtils.h"
#include "QtScriptQByteArray.h"

QtScriptQNetworkRequest::QtScriptQNetworkRequest(QScriptEngine *engine, const QByteArray &className)
	: QtScriptBaseClassPrototype<QNetworkRequest, false>(engine, className)
{
}

QtScriptQNetworkRequest::QtScriptQNetworkRequest(QScriptEngine *engine)
	: QtScriptQNetworkRequest(engine, "NetworkRequest")
{
}

void QtScriptQNetworkRequest::Register(const QScriptValue &targetNamespace)
{
	QScriptValue inherit;
	auto ctor = RegisterT<QNetworkRequest, QtScriptQNetworkRequest>(targetNamespace, inherit);
	Q_ASSERT(ctor.isFunction());
}

int QtScriptQNetworkRequest::maximumRedirectsAllowed()
{
	auto __o = this->thiz<QNetworkRequest *>();
	if (__o)
	{
		return __o->maximumRedirectsAllowed();
	}
	return 0;
}

bool QtScriptQNetworkRequest::notEquals(const QNetworkRequest& other)
{
	auto __o = this->thiz<QNetworkRequest *>();
	if (__o)
	{
		return __o->operator!=(other);
	}
	return false;
}

void QtScriptQNetworkRequest::set(const QNetworkRequest& other)
{
	auto __o = this->thiz<QNetworkRequest *>();
	if (__o)
	{
		__o->operator=(other);
	}
}

QByteArray QtScriptQNetworkRequest::rawHeader(const QByteArray& headerName)
{
	auto __o = this->thiz<QNetworkRequest *>();
	if (__o)
	{
		return __o->rawHeader(headerName);
	}
	return QByteArray();
}

void QtScriptQNetworkRequest::setRawHeader(const QByteArray& headerName, const QByteArray& value)
{
	auto __o = this->thiz<QNetworkRequest *>();
	if (__o)
	{
		__o->setRawHeader(headerName, value);
	}
}

QUrl QtScriptQNetworkRequest::url()
{
	auto __o = this->thiz<QNetworkRequest *>();
	if (__o)
	{
		return __o->url();
	}
	return QUrl();
}

bool QtScriptQNetworkRequest::hasRawHeader(const QByteArray& headerName)
{
	auto __o = this->thiz<QNetworkRequest *>();
	if (__o)
	{
		return __o->hasRawHeader(headerName);
	}
	return false;
}

QObject* QtScriptQNetworkRequest::originatingObject()
{
	auto __o = this->thiz<QNetworkRequest *>();
	if (__o)
	{
		return __o->originatingObject();
	}
	return nullptr;
}

void QtScriptQNetworkRequest::setAttribute(int code, const QVariant& value)
{
	auto __o = this->thiz<QNetworkRequest *>();
	if (__o)
	{
		__o->setAttribute(QNetworkRequest::Attribute(code), value);
	}
}

bool QtScriptQNetworkRequest::equals(const QNetworkRequest& other)
{
	auto __o = this->thiz<QNetworkRequest *>();
	if (__o)
	{
		return __o->operator==(other);
	}
	return false;
}

void QtScriptQNetworkRequest::setOriginatingObject(QObject* object)
{
	auto __o = this->thiz<QNetworkRequest *>();
	if (__o)
	{
		__o->setOriginatingObject(object);
	}
}

void QtScriptQNetworkRequest::setUrl(const QUrl& url)
{
	auto __o = this->thiz<QNetworkRequest *>();
	if (__o)
	{
		__o->setUrl(url);
	}
}

int QtScriptQNetworkRequest::priority()
{
	auto __o = this->thiz<QNetworkRequest *>();
	if (__o)
	{
		return int(__o->priority());
	}
	return 0;
}

QVariant QtScriptQNetworkRequest::header(int header)
{
	auto __o = this->thiz<QNetworkRequest *>();
	if (__o)
	{
		return __o->header(QNetworkRequest::KnownHeaders(header));
	}
	return QVariant();
}

void QtScriptQNetworkRequest::setPriority(int priority)
{
	auto __o = this->thiz<QNetworkRequest *>();
	if (__o)
	{
		__o->setPriority(QNetworkRequest::Priority(priority));
	}
}

QVariant QtScriptQNetworkRequest::attribute(int code)
{
	auto __o = this->thiz<QNetworkRequest *>();
	if (__o)
	{
		return __o->attribute(QNetworkRequest::Attribute(code));
	}
	return QVariant();
}

QVariant QtScriptQNetworkRequest::attribute(int code, const QVariant& defaultValue)
{
	auto __o = this->thiz<QNetworkRequest *>();
	if (__o)
	{
		return __o->attribute(QNetworkRequest::Attribute(code), defaultValue);
	}
	return QVariant();
}

QList<QByteArray> QtScriptQNetworkRequest::rawHeaderList()
{
	auto __o = this->thiz<QNetworkRequest *>();
	if (__o)
	{
		return __o->rawHeaderList();
	}
	return QList<QByteArray>();
}

void QtScriptQNetworkRequest::setMaximumRedirectsAllowed(int maximumRedirectsAllowed)
{
	auto __o = this->thiz<QNetworkRequest *>();
	if (__o)
	{
		__o->setMaximumRedirectsAllowed(maximumRedirectsAllowed);
	}
}

void QtScriptQNetworkRequest::setHeader(int header, const QVariant& value)
{
	auto __o = this->thiz<QNetworkRequest *>();
	if (__o)
	{
		__o->setHeader(QNetworkRequest::KnownHeaders(header), value);
	}
}

int QtScriptQNetworkRequest::constructorArgumentCountMin() const
{
	return 0;
}

int QtScriptQNetworkRequest::constructorArgumentCountMax() const
{
	return 1;
}

bool QtScriptQNetworkRequest::constructObject(QScriptContext *context, NativeObjectType &out)
{
	auto __e = context->engine();
	Q_UNUSED(__e);
	bool ok = false;
	switch (context->argumentCount())
	{
		case 0:
		{
			Q_UNUSED(out);
			ok = true;
			break;
		}
		case 1:
		{
			auto arg0 = qscriptvalue_cast<QUrl>(context->argument(0));
			out = QNetworkRequest(arg0);
			ok = true;
			break;
		}
	}
	
	if (!ok)
	{
		QtScriptUtils::badArgumentsException(context,
			"QNetworkRequest constructor");
	}
	return ok;
}

QtScriptQNetworkAccessManager::QtScriptQNetworkAccessManager(QScriptEngine *engine, const QByteArray &className)
	: QtScriptQObject(engine, className)
{
}

QtScriptQNetworkAccessManager::QtScriptQNetworkAccessManager(QScriptEngine *engine)
	: QtScriptQNetworkAccessManager(engine, "NetworkAccessManager")
{
}

void QtScriptQNetworkAccessManager::Register(const QScriptValue &targetNamespace)
{
	auto engine = targetNamespace.engine();
	Q_ASSERT(engine);
	auto inherit = engine->defaultPrototype(qMetaTypeId<QObject *>());
	auto ctor = RegisterT<QNetworkAccessManager, QtScriptQNetworkAccessManager>(targetNamespace, inherit);
	Q_ASSERT(ctor.isFunction());
}

QNetworkReply* QtScriptQNetworkAccessManager::head(const QNetworkRequest& request)
{
	auto __o = this->thiz<QNetworkAccessManager *>();
	if (__o)
	{
		return __o->head(request);
	}
	return nullptr;
}

bool QtScriptQNetworkAccessManager::isStrictTransportSecurityEnabled()
{
	auto __o = this->thiz<QNetworkAccessManager *>();
	if (__o)
	{
		return __o->isStrictTransportSecurityEnabled();
	}
	return false;
}

int QtScriptQNetworkAccessManager::redirectPolicy()
{
	auto __o = this->thiz<QNetworkAccessManager *>();
	if (__o)
	{
		return int(__o->redirectPolicy());
	}
	return 0;
}

QNetworkReply* QtScriptQNetworkAccessManager::postBytes(const QNetworkRequest& request, const QByteArray& data)
{
	auto __o = this->thiz<QNetworkAccessManager *>();
	if (__o)
	{
		return __o->post(request, data);
	}
	return nullptr;
}

QNetworkReply* QtScriptQNetworkAccessManager::get(const QNetworkRequest& request)
{
	auto __o = this->thiz<QNetworkAccessManager *>();
	if (__o)
	{
		return __o->get(request);
	}
	return nullptr;
}

void QtScriptQNetworkAccessManager::clearAccessCache()
{
	auto __o = this->thiz<QNetworkAccessManager *>();
	if (__o)
	{
		__o->clearAccessCache();
	}
}

void QtScriptQNetworkAccessManager::setStrictTransportSecurityEnabled(bool enabled)
{
	auto __o = this->thiz<QNetworkAccessManager *>();
	if (__o)
	{
		__o->setStrictTransportSecurityEnabled(enabled);
	}
}

QNetworkReply* QtScriptQNetworkAccessManager::putBytes(const QNetworkRequest& request, const QByteArray& data)
{
	auto __o = this->thiz<QNetworkAccessManager *>();
	if (__o)
	{
		return __o->put(request, data);
	}
	return nullptr;
}

QNetworkReply* QtScriptQNetworkAccessManager::deleteResource(const QNetworkRequest& request)
{
	auto __o = this->thiz<QNetworkAccessManager *>();
	if (__o)
	{
		return __o->deleteResource(request);
	}
	return nullptr;
}

void QtScriptQNetworkAccessManager::setRedirectPolicy(int policy)
{
	auto __o = this->thiz<QNetworkAccessManager *>();
	if (__o)
	{
		__o->setRedirectPolicy(QNetworkRequest::RedirectPolicy(policy));
	}
}

QNetworkReply* QtScriptQNetworkAccessManager::sendCustomRequest(const QNetworkRequest& request, const QByteArray& verb)
{
	auto __o = this->thiz<QNetworkAccessManager *>();
	if (__o)
	{
		return __o->sendCustomRequest(request, verb);
	}
	return nullptr;
}

QNetworkReply* QtScriptQNetworkAccessManager::sendCustomRequest(const QNetworkRequest& request, const QByteArray& verb, QIODevice* data)
{
	auto __o = this->thiz<QNetworkAccessManager *>();
	if (__o)
	{
		return __o->sendCustomRequest(request, verb, data);
	}
	return nullptr;
}

QNetworkReply* QtScriptQNetworkAccessManager::put(const QNetworkRequest& request, QIODevice* data)
{
	auto __o = this->thiz<QNetworkAccessManager *>();
	if (__o)
	{
		return __o->put(request, data);
	}
	return nullptr;
}

QNetworkReply* QtScriptQNetworkAccessManager::post(const QNetworkRequest& request, QIODevice* data)
{
	auto __o = this->thiz<QNetworkAccessManager *>();
	if (__o)
	{
		return __o->post(request, data);
	}
	return nullptr;
}

void QtScriptQNetworkAccessManager::connectToHost(const QString& hostName)
{
	auto __o = this->thiz<QNetworkAccessManager *>();
	if (__o)
	{
		__o->connectToHost(hostName);
	}
}

void QtScriptQNetworkAccessManager::connectToHost(const QString& hostName, unsigned short port)
{
	auto __o = this->thiz<QNetworkAccessManager *>();
	if (__o)
	{
		__o->connectToHost(hostName, port);
	}
}

QStringList QtScriptQNetworkAccessManager::supportedSchemes()
{
	auto __o = this->thiz<QNetworkAccessManager *>();
	if (__o)
	{
		return __o->supportedSchemes();
	}
	return QStringList();
}

void QtScriptQNetworkAccessManager::clearConnectionCache()
{
	auto __o = this->thiz<QNetworkAccessManager *>();
	if (__o)
	{
		__o->clearConnectionCache();
	}
}

int QtScriptQNetworkAccessManager::constructorArgumentCountMin() const
{
	return 0;
}

int QtScriptQNetworkAccessManager::constructorArgumentCountMax() const
{
	return 1;
}

bool QtScriptQNetworkAccessManager::constructObject(QScriptContext *context, NativeObjectType &out)
{
	auto __e = context->engine();
	Q_UNUSED(__e);
	bool ok = false;
	switch (context->argumentCount())
	{
		case 0:
		{
			out = new QNetworkAccessManager();
			ok = true;
			break;
		}
		case 1:
		{
			auto arg0 = qscriptvalue_cast<QObject*>(context->argument(0));
			out = new QNetworkAccessManager(arg0);
			ok = true;
			break;
		}
	}
	
	if (!ok)
	{
		QtScriptUtils::badArgumentsException(context,
			"QNetworkAccessManager constructor");
	}
	return ok;
}

QtScriptQNetworkReply::QtScriptQNetworkReply(QScriptEngine *engine, const QByteArray &className)
	: QtScriptQIODevice(engine, className)
{
}

QtScriptQNetworkReply::QtScriptQNetworkReply(QScriptEngine *engine)
	: QtScriptQNetworkReply(engine, "NetworkReply")
{
}

void QtScriptQNetworkReply::Register(const QScriptValue &targetNamespace)
{
	auto engine = targetNamespace.engine();
	Q_ASSERT(engine);
	auto inherit = engine->defaultPrototype(qMetaTypeId<QIODevice *>());
	auto ctor = RegisterT<QNetworkReply, QtScriptQNetworkReply>(targetNamespace, inherit);
	Q_ASSERT(ctor.isFunction());
}

int QtScriptQNetworkReply::constructorArgumentCountMin() const
{
	return 0;
}

int QtScriptQNetworkReply::constructorArgumentCountMax() const
{
	return 0;
}

bool QtScriptQNetworkReply::constructObject(QScriptContext *context, NativeObjectType &)
{
	QtScriptUtils::noPublicConstructorException(context,
		"QNetworkReply");
	return false;
}

QVariant QtScriptQNetworkReply::attribute(int code)
{
	auto __o = this->thiz<QNetworkReply *>();
	if (__o)
	{
		return __o->attribute(QNetworkRequest::Attribute(code));
	}
	return QVariant();
}

bool QtScriptQNetworkReply::isRunning()
{
	auto __o = this->thiz<QNetworkReply *>();
	if (__o)
	{
		return __o->isRunning();
	}
	return false;
}

QVariant QtScriptQNetworkReply::header(int header)
{
	auto __o = this->thiz<QNetworkReply *>();
	if (__o)
	{
		return __o->header(QNetworkRequest::KnownHeaders(header));
	}
	return QVariant();
}

bool QtScriptQNetworkReply::isFinished()
{
	auto __o = this->thiz<QNetworkReply *>();
	if (__o)
	{
		return __o->isFinished();
	}
	return false;
}

bool QtScriptQNetworkReply::hasRawHeader(const QByteArray& headerName)
{
	auto __o = this->thiz<QNetworkReply *>();
	if (__o)
	{
		return __o->hasRawHeader(headerName);
	}
	return false;
}

qint64 QtScriptQNetworkReply::readBufferSize()
{
	auto __o = this->thiz<QNetworkReply *>();
	if (__o)
	{
		return __o->readBufferSize();
	}
	return static_cast<qint64>(0);
}

QNetworkRequest QtScriptQNetworkReply::request()
{
	auto __o = this->thiz<QNetworkReply *>();
	if (__o)
	{
		return __o->request();
	}
	return QNetworkRequest();
}

QUrl QtScriptQNetworkReply::url()
{
	auto __o = this->thiz<QNetworkReply *>();
	if (__o)
	{
		return __o->url();
	}
	return QUrl();
}

QNetworkAccessManager* QtScriptQNetworkReply::manager()
{
	auto __o = this->thiz<QNetworkReply *>();
	if (__o)
	{
		return __o->manager();
	}
	return nullptr;
}

void QtScriptQNetworkReply::setReadBufferSize(qint64 size)
{
	auto __o = this->thiz<QNetworkReply *>();
	if (__o)
	{
		__o->setReadBufferSize(size);
	}
}

int QtScriptQNetworkReply::error()
{
	auto __o = this->thiz<QNetworkReply *>();
	if (__o)
	{
		return int(__o->error());
	}
	return 0;
}

QList<QByteArray> QtScriptQNetworkReply::rawHeaderList()
{
	auto __o = this->thiz<QNetworkReply *>();
	if (__o)
	{
		return __o->rawHeaderList();
	}
	return QList<QByteArray>();
}

QByteArray QtScriptQNetworkReply::rawHeader(const QByteArray& headerName)
{
	auto __o = this->thiz<QNetworkReply *>();
	if (__o)
	{
		return __o->rawHeader(headerName);
	}
	return QByteArray();
}

int QtScriptQNetworkReply::operation()
{
	auto __o = this->thiz<QNetworkReply *>();
	if (__o)
	{
		return int(__o->operation());
	}
	return 0;
}

void QtScriptQNetworkReply::ignoreSslErrors()
{
	auto __o = this->thiz<QNetworkReply *>();
	if (__o)
	{
		__o->ignoreSslErrors();
	}
}

void qtscript_register_all_QtNetwork(QScriptEngine* engine)
{
	QScriptValue targetNamespace;
	targetNamespace = QtScriptUtils::getNamespaceObject(engine, "qt");
	QtScriptQNetworkRequest::Register(targetNamespace);
	QtScriptQNetworkAccessManager::Register(targetNamespace);
	QtScriptQNetworkReply::Register(targetNamespace);
}
