#include <QCoreApplication>
#include <QDebug>
#include "car.h"
#include "feline.h"
#include "racecar.h"

void testDrive(Car* obj){
  obj->drive();
  obj->stop();
}

void race(RaceCar* obj){
  obj->drive();
  obj->goFast();
  obj->stop();
}
int main(int argc, char *argv[])
{
  QCoreApplication a(argc, argv);

  RaceCar* player1=new RaceCar(&a);
  testDrive(player1); //Imlicit Conversion

  Car* obj=dynamic_cast<Car*>(player1);
  if(obj) testDrive(obj);

  feline* cat=new feline(&a);
  Car* catcar=dynamic_cast<Car*>(cat);
  qInfo()<<"Memory: "<<catcar;
  if(catcar) testDrive(catcar);
  return a.exec();
}
