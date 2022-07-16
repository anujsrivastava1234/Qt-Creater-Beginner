#include <QCoreApplication>

int main(int argc, char *argv[])
{
  QCoreApplication a(argc, argv);

  double value=5.75;
  qInfo()<<"Value: "<<value;

  int age=value;
  qInfo()<<"Age: "<<age; //implicit conversion

   age=(int)value;
  qInfo()<<"Age: "<<age; //Explicit conversion

  return a.exec();
}
