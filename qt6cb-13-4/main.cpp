#include <QCoreApplication>
#include <QDebug>
#include <iostream>

using namespace std;

bool doDiv(int max){

  int value;
  qInfo()<<"Enter a value";
  cin>>value;

  if(value==0){
      qInfo()<<"Cannot be Zero";
      return false;
    }
  if(value>5){
      qInfo()<<99;
      return false;
    }
  if(value==1){
      qInfo()<<"Should be greater than 1";
      return false;
    }

  int result=max/value;
  qInfo()<<"Result: "<<result;

  return true;

}
int main(int argc, char *argv[])
{
  QCoreApplication a(argc, argv);
  int max=44;
  do{
      //Loop
    }while(doDiv(max));
  return a.exec();
}
