#include "Treadmill.h"

TreadMill::TreadMill(const int id, const std::string name) : Machine(id, name) {}
TreadMill::TreadMill(TreadMill &tm) : Machine(tm) {}

Machine* TreadMill::clone() {
	return new TreadMill(*this);
}
