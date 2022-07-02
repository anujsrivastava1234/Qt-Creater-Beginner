#include <QCoreApplication>
#include <QDebug>

using namespace std;

void test(){
  qInfo()<<"Hello From test!!";
}

void test1(){
  test();
  qInfo()<<"Hello From test1!!";
}

int main(int argc, char *argv[])
{
  QCoreApplication a(argc, argv);
    test();
    test1();
  return a.exec();
}
