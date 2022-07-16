#include <QCoreApplication>
#include "test.h"

int main(int argc, char *argv[])
{
  QCoreApplication a(argc, argv);
  Test<int> intCalc;
  qInfo()<<intCalc.add(1,5);

  Test<double> dCalc;
  qInfo()<<dCalc.add(1.09,5.87);

  Test<QString> sCalc;
  qInfo()<<sCalc.add(QString("Hello"),QString("World"));
  return a.exec();
}
