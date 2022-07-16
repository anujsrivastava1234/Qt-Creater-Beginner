#ifndef MONSTER_H
#define MONSTER_H

#include <QObject>
#include "fenine.h"
#include "canine.h"
#include <QDebug>

class Monster : public QObject,fenine,Canine
{
  Q_OBJECT
public:
  explicit Monster(QObject *parent = nullptr);

signals:

};

#endif // MONSTER_H
