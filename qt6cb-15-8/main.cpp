#include <QCoreApplication>

int main(int argc, char *argv[])
{
  QCoreApplication a(argc, argv);
  QString data="Hello World, how are you";
  QList<QString> list=data.split(" ");

  foreach(QString word,list)
    {
      qInfo()<<word;
    }

  QList<int> age{1,2,3,4,5};
  age.append(99);
  age.remove(1);
  qInfo()<<age;

  foreach(int age,age)
    {
      qInfo()<<age;
    }



  return a.exec();
}
