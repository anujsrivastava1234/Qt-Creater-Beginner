#include "pet.h"
Pet::Pet(QObject *parent)
  : QObject{parent}
{

}

int Pet::age() const
{
  return m_age;
}

void Pet::setAge(int newAge)
{
  m_age = newAge;
}

const QString &Pet::name() const
{
  return m_name;
}

void Pet::setName(const QString &newName)
{
  m_name = newName;
}

