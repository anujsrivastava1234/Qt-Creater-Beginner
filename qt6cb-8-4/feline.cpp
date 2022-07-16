#include "feline.h"

feline::feline(QObject *parent)
  : QObject{parent}
{
  qInfo()<<this<<"Constructed";
}

void feline::speak()
{
  qInfo()<<"meow!";
}
