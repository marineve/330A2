#pragma once

#include "Machine.h"

class TreadMill : public Machine {

public:
	
	TreadMill(const int id, const std::string name, YogiFit::Machine_MachineType type);
	TreadMill(TreadMill &tm);
	~TreadMill(){}

	Machine* clone() override;
};