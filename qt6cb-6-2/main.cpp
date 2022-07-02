#include <QCoreApplication>
#include <iostream>
#include <QDebug>

using namespace std;
int main(int argc, char *argv[])
{
  QCoreApplication a(argc, argv);

  int age=0;
  qInfo()<<"Please Entered your age :";
  cin>>age;

  if(age>17){
      //True
        qInfo()<<"You are over "<<age<<" years old";
    }else if(age<=12){
      qInfo()<<"You are not not evenm a Teen Yet!!";
  }else{
      //False
      qInfo()<<"You are not 17 years old";

    }
  return a.exec();
}
