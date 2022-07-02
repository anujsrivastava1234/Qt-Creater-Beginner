#include <QCoreApplication>
#include <iostream>
#include <QDebug>

using namespace std;
int main(int argc, char *argv[])
{
  QCoreApplication a(argc, argv);

  int age;
  qInfo()<<"Please Enter an Age: ";
  cin>>age;
  qInfo()<<"You Entered :"<<age;
  return a.exec();
}
