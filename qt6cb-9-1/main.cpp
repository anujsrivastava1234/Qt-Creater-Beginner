#include <QCoreApplication>
#include <QDebug>

void test(int number){
  number=50;
  qInfo()<<"2 - Number: "<<&number<<" = "<<number;
}
int main(int argc, char *argv[])
{
  QCoreApplication a(argc, argv);
  int number=75;
  qInfo()<<"1 - Number: "<<&number<<" = "<<number;
  test(number);
  qInfo()<<"3 - Number: "<<&number<<" = "<<number;

  bool ok=true;
  if(ok){
      int number=1000;
      qInfo()<<"4 - Number: "<<&number<<" = "<<number;
    }
  qInfo()<<"5 - Number: "<<&number<<" = "<<number;
  return a.exec();
}
