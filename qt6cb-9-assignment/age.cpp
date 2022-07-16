#include "age.h"

Age::Age(QObject *parent)
  : QObject{parent}
{

}

void Age::addTen(int age)
{
  qInfo()<<"Ten: "<<age+10;
}

void Age::dogYears(int value)
{
  value=this->age;
  qInfo()<<"Age in dog Years"<<(value*7);
}


