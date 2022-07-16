#include <QCoreApplication>
#include "car.h"
#include "feline.h"
#include "racecar.h"
#include <QDebug>

void testDrive(Car* obj){
  obj->drive();
  obj->stop();
}

void race(RaceCar* obj)
{
  obj->drive();
  obj->goFast();
  obj->stop();
}
int main(int argc, char *argv[])
{
  QCoreApplication a(argc, argv);

  //Create a RaceCar
  RaceCar* player1=new RaceCar(&a);

  Car* obj=dynamic_cast<Car*>(player1);
  if(obj) testDrive(obj);

  RaceCar* speedster=static_cast<RaceCar*>(obj);
  if(speedster) race(speedster);

  int* pointer=reinterpret_cast<int*>(speedster);
  qInfo()<<"Pointer "<<pointer;
  qInfo()<<"Speedster "<<speedster;

  RaceCar* myCar=reinterpret_cast<RaceCar*>(pointer);
  qInfo()<<"My car color is "<<myCar->color;
  race(myCar);

  Feline* cat=reinterpret_cast<Feline*>(pointer);
  cat->meow();
  race(myCar);

  return a.exec();
}
