#include <QCoreApplication>
#include <QDebug>
int main(int argc, char *argv[])
{
  QCoreApplication a(argc, argv);

   int age=44;
   const int id=215;

   id=12;
   qInfo()<<"Id: "<<id;

  return a.exec();
}
