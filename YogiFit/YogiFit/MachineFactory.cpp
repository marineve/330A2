#include "MachineFactory.h"

MachineFactory::MachineFactory(Machine* prototype) : _prototype(prototype) {}

Machine* MachineFactory::DuplicateMachine() {
	return _prototype->clone();
}