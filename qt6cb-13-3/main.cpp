#include <QCoreApplication>
#include <QDebug>
#include <iostream>

using namespace std;

bool doDiv(int max){

  try {
    int value;
    qInfo()<<"Enter a number";
    cin>>value;

    if(value==0)  throw QString("Can not divide by Zero!!");
    if(value>5) throw 99;
    if(value==1) throw std::runtime_error("Should be greater than 1");

    int result=max/value;
    qInfo()<<"Result: "<<result;

  }catch (std::exception const& e) {
    qWarning()<<"We caught the STD excpetion:"<<e.what();
    return false;
  }
  catch (QString e) {
    qWarning()<<"We caught the error:"<<e;
    return false;
  }
  catch (int e) {
      qWarning()<<"We caught the  int :"<<e;
      return false;
    }
  catch (...) {
    qWarning()<<"Unknown error";
    return false;
  }
    return true;
}
int main(int argc, char *argv[])
{
  QCoreApplication a(argc, argv);
  int max=44;
  do{
      //loop
    }while(doDiv(max));
  return a.exec();
}
