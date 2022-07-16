#include <QCoreApplication>
#include <QDebug>
#include <iostream>

using namespace std;

int calc(int offset,int age){

  if(offset==0) qFatal("Qffset cannot be zero");

  if(age<=0 || age>=120){
      qFatal("Invalid age");
    }
  return offset*age;
}

int catYears(int age)
{
  return calc(9,age);
}

int dogYears(int age){
  return calc(7,age);
}

int main(int argc, char *argv[])
{
  QCoreApplication a(argc, argv);
  int age;
  qInfo()<<"Please enter your age";
  cin>>age;

  qInfo()<<"dogYears : "<<dogYears(age);
  qInfo()<<"cat : "<<catYears(age);
  qFatal("");
  return a.exec();
}
