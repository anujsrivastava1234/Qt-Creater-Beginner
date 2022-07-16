#include <QCoreApplication>
#include <QDebug>

template<class T,class F>
T add(T value1,F value2){

  return value1+value2;
}
int main(int argc, char *argv[])
{
  QCoreApplication a(argc, argv);
  qInfo()<<add<int,double>(1,4.6);
  qInfo()<<add(5,true);
  qInfo()<<add(true,5);
  qInfo()<<add("Anuj",5);
  return a.exec();
}
