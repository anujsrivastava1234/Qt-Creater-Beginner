#include "laptop.h"

laptop::laptop(QObject *parent, QString name) : QObject{parent}
{
  this->name=name;
  qInfo()<<this<<" Constructor "<<name;

}

laptop::~laptop()
{
   qInfo()<<this<<" Deconstructor "<<name;
}

double laptop::askilo()
{
  return this->weight*0.453592;
}

void laptop::test()
{
   qInfo()<<this<<" This "<<name<<" Kilo: "<<askilo();
}
