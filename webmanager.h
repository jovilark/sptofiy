#ifndef WEBMANAGER_H
#define WEBMANAGER_H

#include <QNetworkAccessManager>
#include <QNetworkReply>
#include <string>

using namespace std;

class WebManager : public QNetworkAccessManager
{
public:
    WebManager();

private slots:
    void onManagerFinished(QNetworkReply *);

private:
    void authorize();
    void generateToken();
};

#endif // WEBMANAGER_H
