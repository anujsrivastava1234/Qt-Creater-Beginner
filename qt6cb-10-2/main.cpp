#include <QCoreApplication>
#include <QDebug>

void display(QString *value){
  qInfo()<<"The pointer "<<value;
  qInfo()<<"The address "<<&value;
  qInfo()<<"The value "<<*value;
}
int main(int argc, char *argv[])
{
  QCoreApplication a(argc, argv);
//  QString name="Anuj";
  QString *description=new QString("Hello World!");

//  qInfo()<<description;
    display(description);
  delete description;
  display(description);
  return a.exec();
}
