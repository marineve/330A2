#include "BenchPress.h"

BenchPress::BenchPress(const int id, const std::string name) : Machine(id, name) {}
BenchPress::BenchPress(BenchPress &bp) : Machine(bp) {}

Machine* BenchPress::clone() {
	return new BenchPress(*this);
}