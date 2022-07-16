#include <QCoreApplication>
#include <QDebug>
#include <iostream>

using namespace std;

bool doDiv(int max){

  try {
    int value;
    qInfo()<<"Enter a number";
    cin>>value;

    if(value==0) throw std::invalid_argument("Cannot divide by Zero");
    if(value>5) throw std::out_of_range("Cannot be greater than 5");
    if(value==1) throw std::runtime_error("Should be greater than 1");
    int result=max/value;
    qInfo()<<"Result"<<result;
    return true;

  } catch (std::exception &e) {
    qInfo()<<e.what();
    return false;
  }

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
