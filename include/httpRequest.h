#ifndef HTTPREQUEST_H
#define HTTPREQUEST_H

#include <QCoreApplication>
#include <QDebug>
#include <QNetworkAccessManager>
#include <QNetworkRequest>
#include <QNetworkReply>
#include <QUrl>
#include <QUrlQuery>

#include <string.h>

using namespace std;

void sendHttpRequest(const QString url_);

#endif // HTTPREQUEST_H
