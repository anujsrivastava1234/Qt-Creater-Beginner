#include <QCoreApplication>
#include <iostream>
#include <QDebug>

using namespace std;
int main(int argc, char *argv[])
{
  QCoreApplication a(argc, argv);
  int age=0;
  qInfo()<<"Enter Your age :";
  cin>>age;
  qInfo()<<"You are "<<age<<" years old.";

  //cerr
  qInfo()<<"Information";
  qDebug()<<"Debugging";
  qCritical()<<"Critical";
  qWarning()<<"Warning";
  qFatal("Test Crash !!!");
  return a.exec();
}
