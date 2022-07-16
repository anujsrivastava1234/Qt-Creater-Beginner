#include <QCoreApplication>
#include <QDebug>
#include "canine.h"
#include "fenine.h"

int main(int argc, char *argv[])
{
  QCoreApplication a(argc, argv);
  Canine dog;
  dog.bark();
  qInfo()<<dog.hasBackBone();
  qInfo()<<dog.isAlive();

    fenine cat;
  return a.exec();
}
