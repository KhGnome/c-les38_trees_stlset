#pragma once
#include <iostream>
#include <string>
using namespace std;
class Train
{
	string number;
	string timedeparture;
	string station;
public:
	Train();
	Train(string number, string timedeparture, string station);

	bool operator<(const Train& obj) const;

	void setNumber(string number);
	void setTimedaparture(string timedeparture);
	void setStation(string station);

	string getNumber() const;
	string getTimedaparture() const;
	string getStation() const;

	void showInfo() const;
};

