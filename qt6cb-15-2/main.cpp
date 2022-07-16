#include <QCoreApplication>
#include <QDebug>

int main(int argc, char *argv[])
{
  QCoreApplication a(argc, argv);

  qint8 value1=0;
  qint16 value2=0;
  qint32 value3=0;
  qint64 value4=0;
  qintptr value5=0;

  qInfo()<<"Value1 : "<<sizeof(value1);
  qInfo()<<"Value2 : "<<sizeof(value2);
  qInfo()<<"Value3 : "<<sizeof(value3);
  qInfo()<<"Value4 : "<<sizeof(value4);
  qInfo()<<"Value5 : "<<sizeof(value5);
  return a.exec();
}
