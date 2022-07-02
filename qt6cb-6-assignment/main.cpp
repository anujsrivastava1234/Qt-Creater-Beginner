#include <QCoreApplication>
#include <iostream>
#include <QDebug>

using namespace std;

int main(int argc, char *argv[])
{
  QCoreApplication a(argc, argv);

  int max=5;
  QString task="Please take out the trash !";

  for(int i=1;i<50;i++){
      if(i<max){
          qInfo()<<"Wife:"<<task;
          qInfo()<<"I have asked "<<i<<" times";
        }else if(i==max){
          qInfo()<<"Are u going ?";
        }else{
          qInfo()<<"Husband : OK ok !! I am going ";
          break;
        }
    }
  return a.exec();
}
