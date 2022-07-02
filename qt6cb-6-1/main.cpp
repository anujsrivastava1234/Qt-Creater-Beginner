#include <QCoreApplication>
#include <iostream>
#include <QDebug>

using namespace std;

int main(int argc, char *argv[])
{
  QCoreApplication a(argc, argv);

  int age=0;
  qInfo()<<"Enter Your Age :";
  cin>>age;

  if(age==0){
      qFatal("Not a Valid Age!");
    }
  qInfo()<<"You Entered "<<age;

  if(age<18){
      qWarning()<<"You are not an adult!";
      qInfo()<<"Come back when you are older!!! ";
    }

  if(age<21 && age>=18) qInfo()<<"You are not Really an adult";
  if(age>=21) qInfo()<<"You are adult";
  if(age>120) qCritical()<<"How can you be that old!!!";
  cout<<endl;

  //Here Regardless!
//  qInfo()<<"Done!"
  qFatal("Done!!!");
  return a.exec();
}
