#include "Train.h"

Train::Train()
{
	number = "";
	timedeparture = "";
	station = "";
}

Train::Train(string number, string timedeparture, string station)
{
	this->number = number;
	this->timedeparture = timedeparture;
	this->station = station;
}

void Train::setNumber(string number)
{
	this->number = number;
}

void Train::setTimedaparture(string timedeparture)
{
	this->timedeparture = timedeparture;
}

void Train::setStation(string station)
{
	this->station = station;
}

string Train::getNumber() const
{
	return number;
}

string Train::getTimedaparture() const
{
	return timedeparture;
}

string Train::getStation() const
{
	return station;
}

void Train::showInfo() const
{
	cout << timedeparture << " " << number << " " << station << endl;
}
