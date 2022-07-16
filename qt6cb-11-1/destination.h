#ifndef DESTINATION_H
#define DESTINATION_H

#include <QObject>
#include <QDebug>

class Destination : public QObject
{
  Q_OBJECT
public:
  explicit Destination(QObject *parent = nullptr);
  void test1();
signals:
  void arrived(QString message1);
public slots:
  void mySignal(QString message);
};

#endif // DESTINATION_H
