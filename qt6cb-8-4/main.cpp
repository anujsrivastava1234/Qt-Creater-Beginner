#include <QCoreApplication>
#include <QDebug>
#include "lion.h"

int main(int argc, char *argv[])
{
  QCoreApplication a(argc, argv);
  lion leo;
  leo.speak();
  return a.exec();
}
