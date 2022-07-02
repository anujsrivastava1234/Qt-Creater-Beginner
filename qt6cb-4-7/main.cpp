#include <QCoreApplication>

int main(int argc, char *argv[])
{
  QCoreApplication a(argc, argv);

  int age;


  age=21;
  qInfo()<<age;

  age++;
  qInfo()<<age;

  age--;
  qInfo()<<age;

  int older=age*5;
  qInfo()<<older;

  int younger=older/3;
  qInfo()<<younger;
  return a.exec();
}
