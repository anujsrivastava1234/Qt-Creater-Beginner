#include "car.h"

Car::Car(QObject *parent)
  : QObject{parent}
{
  qInfo()<<this<<"Constructed";
}

void Car::drive()
{
  qInfo()<<"driving";
}

void Car::stop()
{
  qInfo()<<"stoping";
}
