#include "BenchPress.h"

BenchPress::BenchPress(const int id, const std::string name, YogiFit::Machine_MachineType type) : Machine(id, name) {
	Machine::_machine.set_type(type);
}
BenchPress::BenchPress(BenchPress &bp) : Machine(bp) {}

Machine* BenchPress::clone() {
	return new BenchPress(*this);
}