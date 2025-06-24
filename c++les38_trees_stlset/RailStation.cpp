#include "RailStation.h"

RailStation::RailStation()
{
	trains.insert(Train("123", "12:20", "Zhytomyr"));
	trains.insert(Train("997", "02:50", "Kharkiv"));
	trains.insert(Train("003", "19:25", "Kyiv"));
	trains.insert(Train("662", "07:00", "Lviv"));
	trains.insert(Train("148", "07:00", "Kharkiv"));
}

void RailStation::addTrain(const Train& train)
{
	trains.insert(train);
}

void RailStation::showTable() const
{
	for (auto p = trains.begin(); p != trains.end(); ++p) {
		p->showInfo();
	}
}
