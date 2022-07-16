#include "destination.h"

Destination::Destination(QObject *parent)
  : QObject{parent}
{

}

void Destination::test1()
{
  emit arrived("Hello World!");
}

void Destination::mySignal(QString message)
{
  qInfo()<<message;
}
