#include "Machine.h"

Machine::Machine(const int id, const std::string name) : _machineID(id), _machineName(name) {}

const int Machine::getMachineID() const {
	return _machineID;
}

const std::string Machine::getMachineName() const {
	return _machineName;
}