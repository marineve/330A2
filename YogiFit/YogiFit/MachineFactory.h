#pragma once

#include "Machine.h"
#include "BenchPress.h"
#include "Treadmill.h"

class MachineFactory {

public:
	
	MachineFactory();
	~MachineFactory();

	Machine* GenerateMachine(const int &id, const string &name, const string &type);

private:

	Machine* _benchPress;
	Machine* _treadMill;
};