#pragma once

#include "Machine.h"

class BenchPress : public Machine {

public: 
	
	BenchPress(const int &id, const std::string &name);
	BenchPress(BenchPress &bp);
	~BenchPress(){}
	
	Machine* clone() override;
};