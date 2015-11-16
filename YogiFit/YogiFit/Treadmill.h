#pragma once

#include "Machine.h"

class TreadMill : public Machine {

public:
	
	TreadMill();
	~TreadMill(){}

	Machine* clone() override;
};