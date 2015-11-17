#include "stdafx.h"
#include "Treadmill.h"

Treadmill::Treadmill(const int &id, const std::string &name) : Machine(id, name) {
	_machine.set_type(YogiFit::Machine_MachineType::Machine_MachineType_TREADMILL);
}

Treadmill::Treadmill(Treadmill &tm) : Machine(tm) {}

Machine* Treadmill::clone() {
	return new Treadmill(*this);
}
