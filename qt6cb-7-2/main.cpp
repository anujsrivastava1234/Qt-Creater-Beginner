#include <QCoreApplication>
#include <QDebug>
#include <iostream>

using namespace std;

int calc(int offset,int age){
  int x=offset*age;
//  qInfo()<<"Calc:"<<x;
  return x;
}

int cat_years(int age){
  qInfo()<<"Performing math for cat years....";
  return calc(9,age);
}

int dog_years(int age){
  qInfo()<<"Performing math for Dog years....";
  return calc(7,age);
}

int main(int argc, char *argv[])
{
  QCoreApplication a(argc, argv);

  int age=0;
  qInfo()<<"Please enter your age :";
  cin>>age;
  qInfo()<<"Age :"<<age;

  qInfo()<<"Cat Years:"<<cat_years(age);
  qInfo()<<"Dog Years:"<<dog_years(age);

  int value=calc(2,age);
  qInfo()<<"Double Human age :"<<value;

  qFatal("Done");
  return a.exec();
}
