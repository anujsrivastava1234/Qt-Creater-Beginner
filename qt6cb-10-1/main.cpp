#include <QCoreApplication>
#include <QDebug>

//Stack -COPY
void test(QString value){
  qInfo()<<&value<<"Size: "<<value.length();
}//Destory

void testPtr(QString *value){
  qInfo()<<"P "<<value<<"Size: "<<value->length();
  qInfo()<<"A "<<&value<<"Size: "<<value->length(); //stack Memory
}
int main(int argc, char *argv[])
{
  QCoreApplication a(argc, argv);
  QString name="Anuj";//Stack
  qInfo()<<&name<<"Size: "<<name.length();

  test(name);
  testPtr(&name);
  testPtr(&name);
  return a.exec();
}
