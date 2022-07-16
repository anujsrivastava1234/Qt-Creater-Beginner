#include <QCoreApplication>
#include "calc.h"
#include <QDebug>
#include <iostream>

using namespace std;

Calc* getcalc(QObject *parent){
  Calc *c=new Calc(parent);
  return c;
}

int dogYears(int age,Calc* calc){
  return calc->dogYears(age);
}

int catYears(int age,Calc* calc){
  return calc->catYears(age);
}

int main(int argc, char *argv[])
{
  QCoreApplication a(argc, argv);
  Calc *c=getcalc(&a);
  int age;
  qInfo()<<"Enter your age";
  cin>>age;
  qInfo()<<"Dog Years: "<<dogYears(age,c);
  qInfo()<<"Cat Years: "<<catYears(age,c);

  delete c;
  return a.exec();
}
