#pragma once
#include "Train.h"
#include <set>
#include <algorithm>
class RailStation
{
	set<Train> trains;
public:
	RailStation();
	
	void addTrain(const Train& train);
	void showTable() const;

};

