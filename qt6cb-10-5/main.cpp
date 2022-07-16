#include <QCoreApplication>
#include <QDebug>

void testPtr(QObject* object){
  qInfo()<<object<<Q_FUNC_INFO;
}

QObject* getobject(){
  QObject* o=new QObject();
  return o;
}
int main(int argc, char *argv[])
{
  QCoreApplication a(argc, argv);
  QObject* p=getobject();
  testPtr(p);
  delete p;
  return a.exec();
}
