#ifndef FENINE_H
#define FENINE_H

#include <QObject>
#include <QDebug>
#include "mammal.h"

class fenine : public Mammal
{
  Q_OBJECT
public:
  explicit fenine(QObject *parent = nullptr);
  void meow(){qInfo()<<"meow!!";}
signals:

};

#endif // FENINE_H
