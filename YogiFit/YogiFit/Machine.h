#pragma once

#include <string>

class Machine {

public:

	Machine(const int id, const std::string name) {}
	~Machine() {}

	virtual Machine* clone() = 0;
	const int getMachineID() const;
	const std::string getMachineName() const;

private:

	int _machineID;
	std::string _machineName;
};