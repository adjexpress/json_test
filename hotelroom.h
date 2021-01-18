#ifndef HOTELROOM_H
#define HOTELROOM_H

#include <QJsonObject>

class HotelRoom
{
public:
	HotelRoom();

	int getId() const;
	void setId(int value);

	bool getStatus() const;
	void setStatus(bool value);

	////
	/// \brief read  read from json
	/// \param json
	///
	void read(QJsonObject &json);

	////
	/// \brief write to json object
	/// \param json
	///
	void write(QJsonObject &json);

private:
	int id = 0;
	bool status =false;

};

#endif // HOTELROOM_H
