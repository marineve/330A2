#pragma once

#include "Machine.h"

/**
* Used to create objects of type benchpress.
* This class creates BenchPress objects and clones BenchPress objects using the prototype design
* pattern to create a Machine object. Objects created with this class represent benchpress types
* of gym equipment.
*/
class BenchPress : public Machine {

public: 

	/**
	* Constructor for the BenchPress class which accepts a machine ID and a name.
	* This method implements the constructor for the BenchPress class. It accepts an
	* identification number and a name, then it creates a Machine object, and sets the
	* type of the google protocol buffer object to be a benchpress.
	* @param id - a constant reference to the identification number of the machine
	* @param name - a constant reference to the name of the machine
	*/
	BenchPress(const int &id, const std::string &name);
	/**
	* Copy constructor for the BenchPress class which accepts a prototype BenchPress object.
	* This method implements the constructor for the BenchPress class. It accepts a
	* BenchPress object, then it creates a Machine object.
	* @param tm - a reference to a BenchPress object.
	*/
	BenchPress(BenchPress &bp);
	/** Deconstructor for the BenchPress class; not implemented. */
	~BenchPress(){}
	
	/**
	* Clone method.
	* This method is inherited from the Machine class and works to implement the prototype
	* design pattern. It returns a clone of the BenchPress object that called it.
	* @return a pointer to a Machine object
	*/
	Machine* clone() override;
};