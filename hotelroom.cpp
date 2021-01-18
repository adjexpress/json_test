#include "hotelroom.h"

HotelRoom::HotelRoom()
{

}

int HotelRoom::getId() const
{
	return id;
}

void HotelRoom::setId(int value)
{
	id = value;
}

bool HotelRoom::getStatus() const
{
	return status;
}

void HotelRoom::setStatus(bool value)
{
	status = value;
}

void HotelRoom::read(QJsonObject &json)
{
	id = json["id"].toInt();
	status =json["status"].toBool();
}

void HotelRoom::write(QJsonObject &json)
{
//	QJsonObject HotelData;
	json["id"] = id;
	json["status"] = status;

}
