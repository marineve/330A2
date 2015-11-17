#include "BenchPress.h"

BenchPress::BenchPress(const int &id, const std::string &name) : Machine(id, name) {
	_machine.set_type(YogiFit::Machine_MachineType::Machine_MachineType_BENCHPRESS);
}
BenchPress::BenchPress(BenchPress &bp) : Machine(bp) {}

Machine* BenchPress::clone() {
	return new BenchPress(*this);
}