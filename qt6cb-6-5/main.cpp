#include <QCoreApplication>
#include <iostream>
#include <QDebug>
int main(int argc, char *argv[])
{
  QCoreApplication a(argc, argv);

  int start=80;
  int max=100;

  int i=start;
  while (i<max) {
    qInfo()<<"While = "<<i;
    i++;
    }

  qInfo()<<"-----------------------";
   i=start;
  do{
      qInfo()<<"DO ="<<i;
      i++;
    }while(i<max);

  qInfo()<<"Done";
  return a.exec();
}
