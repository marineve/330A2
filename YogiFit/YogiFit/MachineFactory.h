#pragma once

#include "Machine.h"
#include "BenchPress.h"
#include "Treadmill.h"

/**
* Used for generating Machine objects. 
* The MachineFactory class contains functionality to accept machine information and create a
* Machine object. The first time that the class is called it will create a new type of Machine 
* object. When it is subsequently called, it will use a prototype of the machine type to create 
* a new object by cloning it. 
*/
class MachineFactory {

public:
	/** Constructor for the MachineFactory class. */
	MachineFactory();
	/** Deconstructor for the MachineFactory class. */
	~MachineFactory();

	/**
	*  Machine object generation method.
	* @param id - a constant reference to the identification number of the machine
	* @param name - a constant reference to the name of the machine
	* @param type - a constant reference to teh type of the machine
	* @return a pointer to a Machine object
	*/
	Machine* GenerateMachine(const int &id, const string &name, const string &type);

private:

	/** A prototype of BenchPress object which can be cloned and used to create a new object. */
	Machine* _benchPress;
	/** A prototype of Treadmill object which can be cloned and used to create a new object. */
	Machine* _treadMill;
};