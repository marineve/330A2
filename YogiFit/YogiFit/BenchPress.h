#pragma once

#include "Machine.h"

class BenchPress : public Machine {

public: 
	
	BenchPress(const int id, const std::string name, YogiFit::Machine_MachineType type);
	BenchPress(BenchPress &bp);
	~BenchPress(){}
	
	Machine* clone() override;
};