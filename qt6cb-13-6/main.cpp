#include <QCoreApplication>
#include <QDebug>
#include <iostream>

using namespace std;


struct MyIssue:public exception{
  const char* description;
  const char* what() const throw(){
    return "My Issue";
  }
};

bool doDiv(int max){
  try {
    int value;
    qInfo()<<"enter a value";
    cin>>value;

    if(value==0) throw std::invalid_argument("Cannot be dived by Zero");
    if(value>5) throw std::out_of_range("Should be less than 5");

    //Custome Exception
    if(value==1)
      {
        MyIssue e;
        e.description="User didn't read the manual";
        throw e;
      }
      int result=max/value;
     qInfo()<<"Result"<<result;

    return true;

  }
  catch (MyIssue &e) {
    qInfo()<<e.what()<<" "<<e.description;
    return false;
  }

  catch (std::exception &e) {
    qInfo()<<e.what();
    return false;
  }

  return true;

}
int main(int argc, char *argv[])
{
  QCoreApplication a(argc, argv);
  int max=44;
  do{
      //loop
    }while(doDiv(max));

  return a.exec();
}
