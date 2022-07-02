#include <QCoreApplication>
#include <QDebug>

int main(int argc, char *argv[])
{
  QCoreApplication a(argc, argv);

  bool LightSwitch=false;

  qInfo()<<"Is On: "<<LightSwitch;

  LightSwitch=true;
  qInfo()<<"Is on: "<<LightSwitch;
  return a.exec();
}
