#include <QCoreApplication>
#include "test.h"
#include <QDebug>
int main(int argc, char *argv[])
{
  QCoreApplication a(argc, argv);
//  Test t;
//  t.doStuff();
//  t.doOtherStuff();

  Test::doOtherStuff();
  return a.exec();
}
