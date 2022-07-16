#include <QCoreApplication>
#include <QDebug>

int main(int argc, char *argv[])
{
  QCoreApplication a(argc, argv);
  QString greeting="Hello World!";
  QByteArray buffer(greeting.toUtf8());
  buffer.append("!");
  qInfo()<<buffer;

  qInfo()<<buffer.rightJustified(20,'.');
  qInfo()<<buffer.at(buffer.length()-1);

  QString modified(buffer);
  qInfo()<<buffer;

  qInfo()<<buffer.toHex();
  qInfo()<<buffer.toBase64();
  return a.exec();
}
