#include "animal.h"

Animal::Animal(QObject *parent)
  : QObject{parent}
{
  qInfo()<<this<<"Constrcuted";
}

Animal::~Animal()
{
  qInfo()<<this<<"deconstrcuted";
}
