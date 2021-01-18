#ifndef HOTEL_H
#define HOTEL_H
#include <QObject>
#include <QString>
#include <QVector>
#include <QJsonDocument>
#include <QJsonObject>
#include <QJsonArray>
#include <QList>

#include "hotelroom.h"

class Hotel // : public QObject
{
public:
	Hotel();

	QString getHName() const;
	void setHName(const QString &value);



	QVector<HotelRoom *> getHRooms() const;
	void setHRooms(const QVector<HotelRoom *> &value);

//public slots:
	void write(QJsonObject &Jarray);
	void read(QJsonObject &Jarray);
	void newRoom();
	void resrveroom(int id);


private:
	QString hName;
	QVector<HotelRoom *> hRooms;
};

#endif // HOTEL_H
