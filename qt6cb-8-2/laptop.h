#ifndef LAPTOP_H
#define LAPTOP_H

#include <QObject>
#include <QDebug>
class laptop : public QObject
{
  Q_OBJECT
public:
  //Constructor
  explicit laptop(QObject *parent = nullptr,QString name="");

  //Destructor
  ~laptop();

  int weight;
  QString name;
  double askilo();
  void test();
signals:

};

#endif // LAPTOP_H
