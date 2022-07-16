#include <QCoreApplication>
#include <QDebug>
#include<QVariant>

void test(QVariant value)
{
  qInfo()<<value;

  int i=0;
  bool ok=false;
  i=value.toInt(&ok);

  if(ok)
    {
      qInfo()<<"INT!";
    }
  else{
      qInfo()<<"Not a Number!";
    }
}
int main(int argc, char *argv[])
{
  QCoreApplication a(argc, argv);
  QVariant value1=1;
  QVariant value2="Hello World!";

  test(value1);
  test(value2);
  return a.exec();
}
