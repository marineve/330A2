#pragma once

#include <string>
#include <map>

using namespace std;
static const string enumStrings[] = { "BenchPress", "TreadMill" };

class Machine {
	friend class MachineFactory;
public:

	enum MachineTypes { BenchPress, TreadMill };

	Machine(const int id, const string name);
	Machine(Machine &m);
	~Machine() {}

	virtual Machine* clone() = 0;
	const int getMachineID() const;
	const string getMachineName() const;

private:

	int _machineID;
	string _machineName;
};