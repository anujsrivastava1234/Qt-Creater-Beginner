#include <QCoreApplication>
#include <QDebug>

enum Colors{black,blue,green,red};

//Precursor to classes

struct Product
{
  int weight;
  double value;
  Colors color;
};

int main(int argc, char *argv[])
{
  QCoreApplication a(argc, argv);
  Product laptop;
  qInfo()<<"Size :"<<sizeof(laptop);

  laptop.color=Colors::red;
  laptop.value=800.64;
  laptop.weight=3;

  qInfo()<<"Color :"<<laptop.color;
  qInfo()<<"Weight :"<<laptop.weight;
  qInfo()<<"Value :"<<laptop.value;

  return a.exec();
}
