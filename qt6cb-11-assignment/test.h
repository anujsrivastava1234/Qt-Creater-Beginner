#ifndef TEST_H
#define TEST_H

#include <QObject>

class Test : public QObject
{
  Q_OBJECT
public:
  explicit Test(QObject *parent = nullptr);

  void kill();
signals:
  void close();

};

#endif // TEST_H
