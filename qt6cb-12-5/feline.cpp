#include "feline.h"

Feline::Feline(QObject *parent)
  : QObject{parent}
{

}

void Feline::meow()
{
  qInfo()<<"Meow";
}
