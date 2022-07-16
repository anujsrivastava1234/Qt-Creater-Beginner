#include <QCoreApplication>
#include "test.h"

int main(int argc, char *argv[])
{
  QCoreApplication a(argc, argv);

  Test test;
  test.timeout();
  return a.exec();
}
