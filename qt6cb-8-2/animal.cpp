#include "animal.h"
#include <QDebug>
Animal::Animal(QObject *parent)
  : QObject{parent}
{
  qInfo()<<this<<"Constructed";
}

