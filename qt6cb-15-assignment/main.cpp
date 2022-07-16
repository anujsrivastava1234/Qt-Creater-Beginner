#include <QCoreApplication>
#include <QDebug>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
  QCoreApplication a(argc, argv);

  QList<int> ages;

  do{
      int age;
      qInfo()<<"Enter a age";
      cin>>age;
      ages.append(age);
      if(!age) break;

    } while(true);

    foreach(int nums,ages)
      {
        qInfo()<<nums;
      }



  return a.exec();
}
