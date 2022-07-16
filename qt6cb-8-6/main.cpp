#include <QCoreApplication>
#include <QDebug>
#include "agecalc.h"

void print(AgeCalc &calc){
  qInfo()<<calc.name()<<"Human Year: "<<calc.humanYears();
  qInfo()<<calc.name()<<"Dog Year: "<<calc.dogYears();
  qInfo()<<calc.name()<<"Cat Year: "<<calc.catYears();
}
int main(int argc, char *argv[])
{
  QCoreApplication a(argc, argv);

  AgeCalc anuj;
  anuj.setAge(20);
  anuj.setName("Anuj");
  print(anuj);
  return a.exec();
}
