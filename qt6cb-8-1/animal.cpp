#include "animal.h"
#include "qdebug.h"

Animal::Animal(QObject *parent)
  : QObject{parent}
{
  qInfo()<<this<<"Constructed";
}

void Animal::speak(QString message)
{
  qInfo()<<this<<message;
}
