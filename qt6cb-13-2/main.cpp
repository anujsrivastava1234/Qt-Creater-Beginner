#include <QCoreApplication>
#include <QDebug>
#include <iostream>

using namespace std;

bool doDiv(int max){
  int value;
  qInfo()<<"Enter a number";
  cin>>value;

  if(value==1) return false ;

  if(value==0)
    {
      qInfo()<<"Goodbye - godbye world!";
      throw QString("Nope");
    }

  int answer=max/value;
  qInfo()<<"Result="<<answer;

  return true;

}
int main(int argc, char *argv[])
{
  QCoreApplication a(argc, argv);

  int max=44;
  do{

    }while(doDiv(max));

  qInfo()<<"Finshed";
  return a.exec();
}
