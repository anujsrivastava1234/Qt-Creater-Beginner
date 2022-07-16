#include <QCoreApplication>
#include <QDebug>
#include "animal.h"
int main(int argc, char *argv[])
{
  QCoreApplication a(argc, argv);
  QString name="Anuj";
  qInfo()<<"My name is at "<<&name<<" = "<<name;

//  Animal cat(&a,"Fluffy");
//  Animal dog(&a,"Fido");
  Animal person(&a,name);
  person.sayHello("Hola");
  return a.exec();
}
