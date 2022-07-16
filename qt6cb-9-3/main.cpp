#include <QCoreApplication>
#include <QDebug>

QString name="Anuj";

void testing(){
  qInfo()<<name;
}

int main(int argc, char *argv[])
{
  QCoreApplication a(argc, argv);
  name="Bob";

  bool test=true;
  if(test){
      QString name="Tammy";
      qInfo()<<name;
      qInfo()<<::name;
    }
  qInfo()<<name;
  testing();
  return a.exec();
}
