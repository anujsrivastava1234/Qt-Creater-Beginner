#include <QCoreApplication>
#include <iostream>
#include <QDebug>

using namespace std;
int main(int argc, char *argv[])
{
  QCoreApplication a(argc, argv);

  int age=0;
  qInfo()<<"Please enter your age : ";
  cin>>age;
  if(age==0) qFatal("Not a valid age,Please enter a valid age next time!!!");
  if(age>=1 && age<=120){
      //True
      int dog_years=age*7;
      qInfo()<<"Your age in Dog years are :"<<dog_years;
    }else{
      qWarning()<<"Warning :Not a valid age";
    }
  return a.exec();
}
