#pragma once

#include "Machine.h"

/**
* Used to create objects of type treadmill.
* This class creates Treadmill objects and clones Treadmill objects using the prototype design 
* pattern to create a Machine object. Objects created with this class represent treadmill types
* of gym equipment.
*/
class Treadmill : public Machine {

public:
	
	/**
	* Constructor for the Treadmill class which accepts a machine ID and a name.
	* This method implements the constructor for the Treadmill class. It accepts an 
	* identification number and a name, then it creates a Machine object, and sets the
	* type of the google protocol buffer object to be a treadmill.
	* @param id - a constant reference to the identification number of the machine
	* @param name - a constant reference to the name of the machine
	*/
	Treadmill(const int &id, const std::string &name);
	/**
	* Copy constructor for the Treadmill class.
	* This method implements the constructor for the Treadmill class. It accepts a
	* Treadmill object, then it creates a Machine object.
	* @param tm - a reference to a Treadmill object.
	*/
	Treadmill(Treadmill &tm);
	/** Deconstructor for the Treadmill class; not implemented. */
	~Treadmill(){}

	/** 
	* Clone method. 
	* This method is inherited from the Machine class and works to implement the prototype
	* design pattern. It returns a clone of the Treadmill object that called it.
	* @return a pointer to a Machine object. 
	*/
	Machine* clone() override;
};