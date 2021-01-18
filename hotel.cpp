#include "hotel.h"

Hotel::Hotel()
{

}

QString Hotel::getHName() const
{
	return hName;
}

void Hotel::setHName(const QString &value)
{
	hName = value;
}

QVector<HotelRoom *> Hotel::getHRooms() const
{
	return hRooms;
}

void Hotel::setHRooms(const QVector<HotelRoom *> &value)
{
	hRooms = value;
}

void Hotel::write(QJsonObject &Jarray)
{
	Jarray["name"] = hName;

	QJsonArray jar;

	for (int i =0; i< hRooms.count(); i++) {
		QJsonObject j;
		HotelRoom * hr = hRooms.at(i);
		hr->write(j);
		jar.append(j);
	}
	Jarray["Rooms"] = jar;

}

void Hotel::read(QJsonObject &Jarray)
{

}

void Hotel::newRoom()
{
	HotelRoom * hr = new HotelRoom();
	hRooms.append( hr);
}

