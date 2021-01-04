#ifndef WEBMANAGER_H
#define WEBMANAGER_H

#include <QNetworkAccessManager>
#include <QNetworkReply>
#include <string>

class WebManager : public QNetworkAccessManager
{
public:
    WebManager();

private slots:
    void onManagerFinished(QNetworkReply *reply);

private:
    // void put(std::string url);
};

#endif // WEBMANAGER_H
