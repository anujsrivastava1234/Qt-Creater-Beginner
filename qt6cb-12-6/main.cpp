#include <QCoreApplication>
#include <QDebug>
#include "car.h"
#include "feline.h"
#include "racecar.h"
#include "dog.h"
void testDrive(Car* obj){
  obj->drive();
  obj->stop();
}

void race(RaceCar* obj){
  obj->drive();
  obj->gofast();
  obj->stop();
}
int main(int argc, char *argv[])
{
  QCoreApplication a(argc, argv);

  RaceCar* racer=new RaceCar(&a);
  Car* car=qobject_cast<Car*>(racer);
  if(car) car->drive();

  RaceCar* fastcar=qobject_cast<RaceCar*>(car);
  fastcar->gofast();

//  Dog* fido=qobject_cast<Dog*>(fastcar);

  return a.exec();
}
