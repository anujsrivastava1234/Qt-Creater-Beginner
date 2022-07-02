#include <QCoreApplication>
#include <QDebug>
#include <array>
using namespace std;
int main(int argc, char *argv[])
{
  QCoreApplication a(argc, argv);

  //zero based index array
  int ages[4]={1,2,3,4};
  ages[2]=99;
  qInfo()<<ages[0];
  qInfo()<<ages[1];
  qInfo()<<ages[2];
  qInfo()<<ages[3];
  qInfo()<<ages;

  array<int,5> cars;
  cars[0]=99;
  cars[1]=99;
  cars[2]=99;
  cars[3]=99;
  cars[4]=45;
  qInfo()<<cars[0];
  qInfo()<<cars[1];
  qInfo()<<cars[2];
  qInfo()<<cars[3];
  qInfo()<<cars[4];
  qInfo()<<cars.size();
  qInfo()<<sizeof(cars);
  qInfo()<<cars[cars.size()-1];
  return a.exec();
}
