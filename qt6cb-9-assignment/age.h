#ifndef AGE_H
#define AGE_H

#include <QObject>
#include <qdebug.h>
#include <QDebug>
class Age : public QObject
{
  Q_OBJECT
public:
  explicit Age(QObject *parent = nullptr);

  int age;
  void addTen(int age);
  void dogYears(int value);
signals:

};

#endif // AGE_H
