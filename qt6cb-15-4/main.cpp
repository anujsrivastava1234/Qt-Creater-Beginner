#include <QCoreApplication>
#include <QDebug>

void Test(QString name)
{
  qInfo()<<name;
}

int main(int argc, char *argv[])
{
  QCoreApplication a(argc, argv);
  QString name="chandler bing";
  qInfo()<<name;
  qInfo()<<name.mid(1,3);
  qInfo()<<name.insert(0,"Ms. ");
  qInfo()<<name.split(" ");

  int index=name.indexOf(" ");
  if(index>-1){
      qInfo()<<name.remove(0,index).trimmed();
    }

  QString title="Actor";
  QString full=name.trimmed()+" "+title;
  qInfo()<<full;

  qInfo()<<full.toUtf8();

  Test(full);
  return a.exec();
}
