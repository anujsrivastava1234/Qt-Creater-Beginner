#include <QCoreApplication>
#include <QDebug>
#include <iostream>
using namespace std;

void test(){

  qInfo()<<"This is a test";
}

void test(QString name){

  qInfo()<<"Name : "<<name;
}

void test(int age){

  qInfo()<<"Age: "<<age;
}

void test(bool isActive){

  qInfo()<<"Testing for Active";

  if(isActive){
      qInfo()<<"Test is Active";
    }else{
      qInfo()<<"Test is not Active";
    }
}

int main(int argc, char *argv[])
{
  QCoreApplication a(argc, argv);
  test();
  test(42);
  test(QString("Anuj"));
  test(true);
  return a.exec();
}
