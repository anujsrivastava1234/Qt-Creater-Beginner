#ifndef APPLICANCE_H
#define APPLICANCE_H

#include <QObject>
#include <QDebug>
#include "Freezer.h"
#include "Microwave.h"
#include "Toaster.h"

class Applicance : public QObject,public freezer,public toaster,public microwave
{
  Q_OBJECT
public:
  explicit Applicance(QObject *parent = nullptr);

  // microwave interface

  bool cook();

  // toaster interface

  bool grill();

  // freezer interface

  bool freeze();

signals:


};

#endif // APPLICANCE_H
