#include <QCoreApplication>
#include <QDebug>

template<class T>
void display(T value){
  qInfo()<<value;
}
int main(int argc, char *argv[])
{
  QCoreApplication a(argc, argv);
  display<int>(1);

  display<double>(123.456);

  display<QString>(QString("Hello World"));

  QObject obj;
  display<QObject*>(&obj);
  return a.exec();
}
