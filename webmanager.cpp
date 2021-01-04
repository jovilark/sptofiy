#include "webmanager.h"
#include "apputilities.h"

WebManager::WebManager()
{
}

void WebManager::onManagerFinished(QNetworkReply *reply)
{
    qDebug() << reply->readAll();
}

void WebManager::authorize()
{

}

void WebManager::generateToken()
{

}
