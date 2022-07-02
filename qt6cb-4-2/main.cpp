#include <QCoreApplication>
#include <QDebug>
int main(int argc, char *argv[])
{
  QCoreApplication a(argc, argv);

  int age=44;
  double height=6.62;

  qInfo()<<"Age : "<<age;
  qInfo()<<"Height :"<<height;

  age=44.09;
  qInfo()<<"Age : "<<age;

  signed int dogs=-1;
  qInfo()<<"Dogs: "<<dogs;
  dogs=14;
  qInfo()<<"Dogs: "<<dogs;

  unsigned int cats=-1;
  qInfo()<<"Cats: "<<cats;
  cats=14;
  qInfo()<<"Cats: "<<cats;

  qInfo()<<sizeof(dogs);
  qInfo()<<sizeof(cats);
  qInfo()<<sizeof(height);

  return a.exec();
}
