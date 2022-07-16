#include "test.h"

Test::Test(QObject *parent)
  : QObject{parent}
{
  qInfo()<<this<<"Constructed";
}

void Test::doStuff()
{
  qInfo()<<this<<"to Stuff";
  Test::doOtherStuff();
}

void Test::doOtherStuff()
{
  //"this does not exist
//  qInfo()<<this<<"to Other Stuff";
  qInfo()<<"to Other Stuff";
//  doStuff();
}
