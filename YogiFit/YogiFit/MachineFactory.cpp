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
	if (type.compare(enumStrings[0]) == 0) {
		if (_benchPress){
			result = _benchPress->clone();
			result->_machineID = id;
			result->_machineName = name;
		} else {
			_benchPress = new BenchPress(id, name);
			result = _benchPress;
		}
	}
	else if (type.compare(enumStrings[1]) == 0) {
		if (_treadMill){
			result = _treadMill->clone();
			result->_machineID = id;
			result->_machineName = name;
		} else {
			_treadMill = new TreadMill(id, name);
			result = _treadMill;
		}
	}
	return result;
}