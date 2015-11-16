#include "Treadmill.h"

TreadMill::TreadMill(const int id, const std::string name, YogiFit::Machine_MachineType type) : Machine(id, name) {
	Machine::_machine.set_type(type);
}

TreadMill::TreadMill(TreadMill &tm) : Machine(tm) {}

Machine* TreadMill::clone() {
	return new TreadMill(*this);
}
