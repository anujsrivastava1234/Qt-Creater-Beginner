#include <QCoreApplication>
#include <QDebug>
#include <iostream>

using namespace std;

int get_size(){
  qInfo()<<"Enter measurement in feet: ";
  int value;
  cin>>value;
  return value;
}

double calc_paint(int w,int h){
  double sqrt=w*h;
  double paint=sqrt/325;
  return paint;
}
int main(int argc, char *argv[])
{
  QCoreApplication a(argc, argv);
  qInfo()<<"Enter the ceiling height in feet: ";
  int height=get_size();
  if(height<0) qFatal("Invalid valie");

  double paint=0;
  do{
      qInfo()<<"Add a wall by entering a number or 0 to stop: ";
      int value=get_size();
      if(value<=0) break;
      double g=calc_paint(value,height);
      paint+=g;

    }while(true);
  qInfo()<<"Total Paint needed :"<<paint;
  return a.exec();
}
