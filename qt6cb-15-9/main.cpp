#include <QCoreApplication>
#include <QDebug>

int main(int argc, char *argv[])
{
  QCoreApplication a(argc, argv);

  QString data="Hello World, How are you";
  QVector<QString> lst=data.split(" ");

  foreach(QString word,lst)
    {
      qInfo()<<word;
    }

  QVector<int> age{1,2,433,3};
  age.append(99);
  age.remove(2);
  foreach(int a,age){
      qInfo()<<a;
    }
  return a.exec();
}
