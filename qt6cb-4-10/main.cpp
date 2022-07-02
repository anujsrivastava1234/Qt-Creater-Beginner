#include <QCoreApplication>

int main(int argc, char *argv[])
{
  QCoreApplication a(argc, argv);

  int x=10;

  qInfo()<<"x btw 5 and 20"<<(x>5 && x<20);
  qInfo()<<"x> 8 and x<20"<<(x>8 || x>20);
  qInfo()<<"x btw 5 and 20"<<(x!=10);
  qInfo()<<"Complex : "<<((x>11 && x<20)||x==10);
  return a.exec();
}
