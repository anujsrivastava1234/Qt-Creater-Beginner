#include <QCoreApplication>
#include <QDebug>

QObject& get_ref(QString name){
  QObject o; //stored in stack by c++
  o.setObjectName(name);
  return o; //will be deleted
}

QObject* get_ptr(QString name){
  QObject *o=new QObject(); //stored in heap by user
  o->setObjectName(name);
  return o; //will be deleted
}
int main(int argc, char *argv[])
{
  QCoreApplication a(argc, argv);

  QObject *o=get_ptr("By Pointer");
  qInfo()<<o;

  delete o;

  return a.exec();
}
