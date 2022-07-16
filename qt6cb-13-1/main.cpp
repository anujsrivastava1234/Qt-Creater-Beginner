#include <QCoreApplication>
#include <QDebug>
#include <iostream>

using namespace std;
int main(int argc, char *argv[])
{
  QCoreApplication a(argc, argv);
  int number=100;
  int div=0;
  do{
      qInfo()<<"Enter the number :";
      cin>>div;

      cout<<"Answer: "<<number/div;

    }while(true);
  return a.exec();
}
