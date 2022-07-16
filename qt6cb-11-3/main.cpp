#include <QCoreApplication>
#include <QDebug>
#include "test.h"
#include "watcher.h"

#include <QVariant>

int main(int argc, char *argv[])
{
  QCoreApplication a(argc, argv);
  Test tester;
  Watcher destination;

  QObject::connect(&tester,&Test::messageChanged,&destination,&Watcher::messageChanged);

  tester.setProperty("message",QVariant("Hellow World"));
  tester.setMessage("Testing");
  return a.exec();
}
