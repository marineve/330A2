#include "MachineFactory.h"

/** 
* This method sets the MachineFactory prototype variables to nullptr so that they may be set to prototype objects 
* when they are created in other methods. 
*/
MachineFactory::MachineFactory() {
	_benchPress = nullptr;
	_treadMill = nullptr;
}

/**
* This method deletes the MachineFactory prototype variables when the MachineFactory object goes out of scope.
*/
MachineFactory::~MachineFactory() {
	delete _benchPress;
	delete _treadMill;
}

/**
* This method generates Machine objects given a machine's identification number, name, and type. 
* If the prototype for the type points to an object, it clones it and sets the resulting clone's 
* name and id to the input parameters. If the prototype is set to nullptr, then this method creates a 
* new object of the specified type and assigns it to the prototype. The method returns the new object. 
*/
Machine* MachineFactory::GenerateMachine(const int &id, const string &name, const string &type) {
	Machine* result = nullptr;

	if (type.compare(enumStrings[0]) == 0) {
		if (_benchPress){
			result = _benchPress->clone();
			result->_machine.set_id(id);
			result->_machine.set_name(name);
		} else {
			_benchPress = new BenchPress(id, name);
			result = _benchPress;
		}
	} else if (type.compare(enumStrings[1]) == 0) {
		if (_treadMill){
			result = _treadMill->clone();
			result->_machine.set_id(id);
			result->_machine.set_name(name);
		} else {
			_treadMill = new Treadmill(id, name);
			result = _treadMill;
		}
	}
	return result;
}