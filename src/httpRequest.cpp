#include "../include/httpRequest.h"

void sendHttpRequest(const QString url_) {

    // create custom temporary event loop on stack
    QEventLoop eventLoop;

    // "quit()" the event-loop, when the network request "finished()"
    QNetworkAccessManager mgr;
    QObject::connect(&mgr, SIGNAL(finished(QNetworkReply*)), &eventLoop, SLOT(quit()));

    // the HTTP request
    QUrl url = QUrl( url_ );             // create url
    QNetworkRequest req( url );          // create network request
    QNetworkReply *reply = mgr.get(req); // get reply
    eventLoop.exec(); // blocks stack until "finished()" has been called

    if (reply->error() == QNetworkReply::NoError) {
        //success
        qDebug() << "Success" <<reply->readAll();
        //reply->pos()
        delete reply;
    }
    else {
        //failure
        qDebug() << "Failure" <<reply->errorString();
        delete reply;
    }
}

