#include <QCoreApplication>
#include <iostream>
#include <QDebug>

using namespace std;

int main(int argc, char *argv[])
{
  QCoreApplication a(argc, argv);
  cout << "Hello "<<endl;
  qInfo()<<"Hello";

  int age=44;
  qInfo()<<age;

  return a.exec();
}
