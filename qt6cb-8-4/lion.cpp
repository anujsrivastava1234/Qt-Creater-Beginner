#include "lion.h"

lion::lion(QObject *parent)
  : feline{parent}
{
  qInfo()<<this<<"Construcuesd";
}

void lion::speak()
{
  qInfo()<<this<<"Roar";
  feline::speak();
}
