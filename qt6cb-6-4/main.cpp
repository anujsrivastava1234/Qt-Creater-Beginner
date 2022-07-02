#include <QCoreApplication>
#include <iostream>
#include <QDebug>

using namespace std;

int main(int argc, char *argv[])
{
  QCoreApplication a(argc, argv);

  int age=0;
  qInfo()<<"Plesae Enter your age :";
  cin>>age;

  switch (age) {
    case 0:
      qFatal("You did not enter valid  age");
      break;
    case 16:
      qInfo()<<"You can drive ";
      break;
    case 18:
      qInfo()<<"You can Vote ";
      break;
    case 21:
      qInfo()<<"You can drink ";
      break;
    case 67:
      qInfo()<<"You can retire ";
      break;
    default:
      qInfo()<<"The default here";
      break;
    }

  qFatal("Finsihed");
  return a.exec();
}
