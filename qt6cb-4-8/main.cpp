#include <QCoreApplication>

int main(int argc, char *argv[])
{
  QCoreApplication a(argc, argv);

  int value=15;
  qInfo()<<value;

  value+=10;
  qInfo()<<value;

  value-=30;
  qInfo()<<value;

  value*=20;
  qInfo()<<value;

  value/=25;
  qInfo()<<value;

  return a.exec();
}
