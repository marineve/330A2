#pragma once

#include <string>
#include <map>
#include "MachineList.pb.h"

using namespace std;
static const string enumStrings[] = { "BenchPress", "TreadMill" };

class Machine {
	friend class MachineFactory;
public:

	Machine(const int id, const string name);
	Machine(const Machine &m);
	~Machine() {}

	virtual Machine* clone() = 0;
	const std::string getMachineType() const;
	const int getMachineID() const;
	const string getMachineName() const;
	YogiFit::Machine Machine::getYogiFitMachine() const;

protected:

	YogiFit::Machine _machine;
};