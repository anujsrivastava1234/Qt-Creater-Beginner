#include <QCoreApplication>
#include <QDebug>
#include "animal.h"


int main(int argc, char *argv[])
{
  QCoreApplication a(argc, argv);

  Animal cat;
  Animal dog;
  Animal fish;

  cat.setObjectName("Kitty");
  dog.setObjectName("Fido");
  fish.setObjectName("Fish");
  cat.speak("Meow");
  dog.speak("Bark");
  fish.speak("blahblahblah");
  return a.exec();
}
