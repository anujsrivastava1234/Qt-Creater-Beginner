#include "fenine.h"

fenine::fenine(QObject *parent)
  : Mammal{parent}
{
  qInfo()<<this<<"Constructed";
}
