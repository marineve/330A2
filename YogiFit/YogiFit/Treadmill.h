#pragma once

#include "Machine.h"

class TreadMill : public Machine {

public:
	
	TreadMill(const int id, const std::string name);
	TreadMill(TreadMill &tm);
	~TreadMill(){}

	Machine* clone() override;
};