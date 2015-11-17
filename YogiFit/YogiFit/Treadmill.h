#pragma once

#include "Machine.h"

class Treadmill : public Machine {

public:
	
	Treadmill(const int &id, const std::string &name);
	Treadmill(Treadmill &tm);
	~Treadmill(){}

	Machine* clone() override;
};