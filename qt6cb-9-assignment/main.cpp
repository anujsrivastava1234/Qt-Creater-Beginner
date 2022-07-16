#include <QCoreApplication>
#include <QDebug>
#include "age.h"
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
  QCoreApplication a(argc, argv);

  Age age;
  qInfo()<<"Enter your age in years";
  cin>>age.age;

  age.addTen(age.age);
  age.dogYears(age.age);

  return a.exec();
}
