#include <QCoreApplication>
#include "pet.h"

//typedef
typedef QMap<QString,Pet*> petList;

petList createPets(int max)
{
  petList map;
  for(int i=0;i<max;i++)
    {
      QString id=QString::number(i);
      Pet* pet=new Pet();
      pet->setAge(i*3);
      pet->setName("Pet: " + id);
      map.insert(id,pet);

    }
  return map;
}

void lsitPets(petList pets)
{
  foreach(QString key,pets.keys())
    {
      Pet* pet=pets.value(key);
      qInfo()<<key<<pet->name()<<" Age is "<<pet->age();
    }
}
int main(int argc, char *argv[])
{
  QCoreApplication a(argc, argv);

  petList pets=createPets(5);
  qInfo()<<"Count"<<pets.count();
//  lsitPets(pets);

  Pet* pet=new Pet();
  pet->setAge(99);
  pet->setName("Kat");
  pets.insert("1",pet);

  lsitPets(pets);

  return a.exec();
}
