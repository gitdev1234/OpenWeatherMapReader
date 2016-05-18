/*#include <QCoreApplication>
#include <iostream>

using namespace std;
int main()
{
    cout << "Hallo Welt!";
    return 0;
}

*/

#include "include/httpRequest.h"

int main(int argc, char *argv[]) {
    QCoreApplication a(argc, argv);
    QString url = "http://api.openweathermap.org/data/2.5/weather?lat=52.9&lon=9.2&APPID=08854a5d6fe0754f2670f5fa5127a831";
    sendHttpRequest(url);
    return a.exec();
}

