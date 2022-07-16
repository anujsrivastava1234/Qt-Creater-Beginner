#include <QCoreApplication>
#include <QDebug>
#include "applicance.h"

int main(int argc, char *argv[])
{
  QCoreApplication a(argc, argv);

  Applicance machine3000;

  qInfo()<<"Cook: "<<machine3000.cook();
  qInfo()<<"Freeze: "<<machine3000.freeze();
  qInfo()<<"Toaster: "<<machine3000.grill();
  return a.exec();
}
