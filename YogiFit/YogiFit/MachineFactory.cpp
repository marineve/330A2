#include "MachineFactory.h"

MachineFactory::MachineFactory() {
	_benchPress = nullptr;
	_treadMill = nullptr;
}

MachineFactory::~MachineFactory() {
	delete _benchPress;
	delete _treadMill;
}

Machine* MachineFactory::GenerateMachine(const int &id, const string &name, const string &type) {
	Machine* result = nullptr;
	YogiFit::Machine_MachineType enumType;

	if (type.compare(enumStrings[0]) == 0) {
		enumType = YogiFit::Machine_MachineType::Machine_MachineType_BENCHPRESS;
		if (_benchPress){
			result = _benchPress->clone();
			result->_machine.set_id(id);
			result->_machine.set_name(name);
			result->_machine.set_type(YogiFit::Machine_MachineType::Machine_MachineType_BENCHPRESS);
		} else {
			_benchPress = new BenchPress(id, name, enumType);
			result = _benchPress;
		}
	}
	else if (type.compare(enumStrings[1]) == 0) {
		enumType = YogiFit::Machine_MachineType::Machine_MachineType_TREADMILL;
		if (_treadMill){
			result = _treadMill->clone();
			result->_machine.set_id(id);
			result->_machine.set_name(name);
			result->_machine.set_type(YogiFit::Machine_MachineType::Machine_MachineType_TREADMILL);
		} else {
			_treadMill = new TreadMill(id, name, enumType);
			result = _treadMill;
		}
	}
	return result;
}