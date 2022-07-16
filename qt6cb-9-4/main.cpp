#include <QCoreApplication>
#include <QDebug>
#include "animal.h"

int Animal::count=0;
QString Animal::name="";
void test(){
  Animal cat;
  Animal dog;
  Animal fish;
  qInfo()<<dog.count;

  cat.name="Gammer";
  dog.name="Pie";

  qInfo()<<"Cat: "<<cat.name;

}
int main(int argc, char *argv[])
{
  QCoreApplication a(argc, argv);
  test();
  qInfo()<<Animal::count;
  return a.exec();
}

