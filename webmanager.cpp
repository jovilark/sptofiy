#include "webmanager.h"

WebManager::WebManager()
{
}

void WebManager::onManagerFinished(QNetworkReply *reply)
{
    qDebug() << reply->readAll();
}
