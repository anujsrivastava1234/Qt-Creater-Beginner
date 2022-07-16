#include <QCoreApplication>
#include <QDebug>
#include <iostream>

using namespace std;

void test(int age){
  try {
    if(age<=0) throw std::invalid_argument("Not a valid age");
    if(age>21) throw std::out_of_range("Out of range");
  } catch (std::exception &e) {
    qCritical()<<e.what();
    return ;
  }
  catch (...) {
      qCritical()<<"Unknow error";
      return ;
    }
  qInfo()<<"You are "<<age<<" Years old";
}
int main(int argc, char *argv[])
{
  QCoreApplication a(argc, argv);
  test(13);
  test(45);
  test(-3);
  return a.exec();
}
