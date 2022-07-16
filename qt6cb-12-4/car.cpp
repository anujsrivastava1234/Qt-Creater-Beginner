#include "car.h"

Car::Car(QObject *parent)
  : QObject{parent}
{

}
void Car::drive()
{
  qInfo()<<"Driving";
}

void Car::stop(){
  qInfo()<<"Stopping";
}
