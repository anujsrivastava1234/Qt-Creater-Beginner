#include <QCoreApplication>
#include <iostream>
#include <QDebug>
#include <array>

using namespace  std;
int main(int argc, char *argv[])
{
  QCoreApplication a(argc, argv);

    int max=0;
    qInfo()<<"Please enter a max";
    cin>>max;

    if(max<=0){
        qFatal("Please enter a valid number next time!!!");
      }

    for(int i=0 ; i<max ; i++){
         qInfo()<<"i = "<<i;
      }

    array<int,4> ages={44,56,23,67};
    for(int i=0;i<ages.size();i++){
        qInfo()<<"Ages["<<i<<"] = "<<ages.at(i);
      }
  return a.exec();
}
