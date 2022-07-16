#include "test.h"

Test::Test(QObject *parent)
  : QObject{parent}
{
 qInfo()<<this<<"Constrcuted";
}
Test::~Test(){
  qInfo()<<this<<"deconstrcuted";
}
