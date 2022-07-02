#include <QCoreApplication>
#include <QDebug>
int main(int argc, char *argv[])
{
  QCoreApplication a(argc, argv);
  enum Color{red=100,green=55,blue=256};
  Color mycolor=Color::red;
//  Color mycolor=Color::green;

  qInfo()<<"Color: "<<mycolor;
  return a.exec();
}
