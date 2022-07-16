#include <QCoreApplication>
#include <QDebug>
#include <iostream>

using namespace std;

void testVal(int x){
  x=x*10;
  qInfo()<<"Test Val"<<x;
}

//Pass byy ref
void testRef(int &y){
  y=y*10;
  qInfo()<<"Test Val: "<<y;
}
int main(int argc, char *argv[])
{
  QCoreApplication a(argc, argv);

  int x=5;
  qInfo()<<"Main x: "<<x;
  testVal(x);
  qInfo()<<"Main x: "<<x;


  int y=5;
  qInfo()<<"Main y: "<<y;
  testRef(y);
  qInfo()<<"Main x: "<<y;
  return a.exec();
}
