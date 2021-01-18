#include <QCoreApplication>
#include <qjsondocument.h>
#include <QtDebug>
#include <QFile>
#include "hotel.h"

int main(int argc, char *argv[])
{
	QCoreApplication a(argc, argv);

	Hotel h ;

	QFile JsonFile("Save.json");
	JsonFile.open(QIODevice::ReadWrite);


	QJsonObject obj;

	//h.write(obj);

	h.read(obj);
	QJsonDocument TopDoc(obj);
	JsonFile.write(TopDoc.toJson());


//	for(int i = 0; i< 10; i++){
//		h.newRoom();
//	}


//	h.getHRooms().at(8)->setStatus(true);

	for (int j=0;j< h.getHRooms().size();j++) {
		qDebug()<<"room at: "<< j+1 <<" status: "<< (h.getHRooms().at(j)->getStatus()  ? "full" :  "empty") ;
	}


	JsonFile.close();
	return a.exec();
}
