#include <QCoreApplication>
#include <QDebug>

template<class T,class F>
void display(T value1,F value2){
  qInfo()<<value1+value2;
}
int main(int argc, char *argv[])
{
  QCoreApplication a(argc, argv);
  display<int,int>(1,2);
  display<QString,QString>(QString("Hello "),QString("World"));
  display<int,bool>(1,true);
  display("true",1);
//  QObject obj;
//  display<QObject*,QObject*>(&obj,&obj);
  return a.exec();
}
