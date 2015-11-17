#include "Machine.h"

Machine::Machine(const int id, const std::string name) : _machine() {
	_machine.set_name(name);
	_machine.set_id(id);
}

Machine::Machine(const Machine& m) : _machine(m._machine) {}

const std::string Machine::getMachineType() const {
	std::string result;

	switch (_machine.type()) {
		case(YogiFit::Machine_MachineType::Machine_MachineType_BENCHPRESS) :
			result = "Benchpress";
			break;
		case(YogiFit::Machine_MachineType::Machine_MachineType_TREADMILL) :
			result = "Treadmill";
			break;
		default:
			result = "";
	}
	return result;
}

const int Machine::getMachineID() const {
	return _machine.id();
}

const std::string Machine::getMachineName() const {
	return _machine.name();
}

YogiFit::Machine Machine::getYogiFitMachine() const {
	return _machine;
}