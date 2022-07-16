#include <QCoreApplication>
#include <QDebug>
#include <QTextStream>
#include <iostream>
#include "radio.h"
#include "station.h"

int main(int argc, char *argv[])
{
  QCoreApplication a(argc, argv);

  Radio boombox;
  Station* channels[3];

  //create station
  channels[0]=new Station(&boombox,94,"Rock and Roll station");
  channels[1]=new Station(&boombox,87,"Hip Hop station");
  channels[2]=new Station(&boombox,104,"News  station");

  boombox.connect(&boombox,&Radio::quit,&a,&QCoreApplication::quit,Qt::QueuedConnection); //flaw

  for(int i=0;i<3;i++){
      Station* channel=channels[i];
      boombox.connect(channel,&Station::send,&boombox,&Radio::listen);
    }

  do{
      qInfo()<<"Enter on, off, test or Quit";
      QTextStream qtin(stdin);
      QString line=qtin.readLine().trimmed().toUpper();
      if(line=="ON")
        {
          qInfo()<<"Turing the radio ON";
          for(int i=0;i<3;i++){
              Station* channel=channels[i];
              boombox.connect(channel,&Station::send,&boombox,&Radio::listen);
            }
          qInfo()<<"Radio is Turing ON";
        }
      if(line=="OFF")
        {
          qInfo()<<"Turing the radio off";
          for(int i=0;i<3;i++){
              Station* channel=channels[i];
              boombox.disconnect(channel,&Station::send,&boombox,&Radio::listen);
            }
          qInfo()<<"Radio is Turing OFF";
        }
      if(line=="TEST")
        {
          qInfo()<<"Testing";

          for(int i=0;i<3;i++)
            {
              Station* channel=channels[i];
              channel->broadcast("Bradcasting Live !");
            }
          qInfo()<<"Test Complete";
        }
      if(line=="QUIT")
        {
          qInfo()<<"Quiting ";
          emit boombox.quit();
          break;
        }
    }while(true);
  return a.exec();
}
