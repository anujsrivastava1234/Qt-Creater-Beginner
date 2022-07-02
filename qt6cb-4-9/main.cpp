#include <QCoreApplication>

int main(int argc, char *argv[])
{
  QCoreApplication a(argc, argv);

  int x=10;
  int y=15;

  qInfo()<<(x==y);
  qInfo()<<(x!=y);
  qInfo()<<(x<=y);
  qInfo()<<(x>=y);
  qInfo()<<(x< y);
  qInfo()<<(x> y);
  return a.exec();
}
