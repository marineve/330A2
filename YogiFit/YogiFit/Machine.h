#pragma once

#include <string>
#include <map>
#include "MachineList.pb.h"

using namespace std;

/** Array used to match a string with the YogiFit enum that determines a machine's type. */
static const string enumStrings[] = { "Benchpress", "Treadmill" };

/**
* Abstract class used for creating Machine objects. 
* The Machine class creates representations of gym machine equipment. It communicates with 
* google protocol buffers to store and load information for particular gym equipment. It uses
* the prototype design pattern to create different types of Machine objects. 
*/
class Machine {
	friend class MachineFactory;
public:
	
	/** 
	* Constructor for the Machine class.
	* Implementation of the constructor for the machine class. It accepts the identification
	* number for the machine and the name of the machine and sets them to the ID and name of the
	* corresponding google protocol buffer object.
	* @param id - the identification number for the machine
	* @param name - the name of the machine
	*/
	Machine(const int id, const string name);
	/** 
	* Copy constructor for the Machine class.
	* Used for implementing the prototype design patter, this constructor accepts a Machine object
	* and in turn calls the copy constructor on the google protocol buffer object.
	* @param m - a constant reference to a Machine object
	*/
	Machine(const Machine &m);
	/** Deconstructor for the Machine class; not implemented. */
	~Machine() {}

	/** Clone method which is implemented by subclasses of Machine. */
	virtual Machine* clone() = 0;
	/** 
	* Method which obtains the type of the Machine object. It returns a string 
	* representation of its type.
	* @return a constant string representing the machine type.
	*/
	const std::string getMachineType() const;
	/** 
	* Method which obtains the identification number of the Machine object.
	* @return a constant integer representing the identification number of the machine.
	*/
	const int getMachineID() const;
	/**
	* Method which returns the name of the Machine object.
	* @return a constant string representing the name of the machine.
	*/
	const string getMachineName() const;
	/**
	* Method which returns the google prototype buffer object that corresponds to the 
	* Machine object. 
	* @return the google prototype buffer machine ojbect.
	*/
	YogiFit::Machine Machine::getYogiFitMachine() const;

protected:

	/** A google prototype buffer machine object which represents an instance of the Machine class. */
	YogiFit::Machine _machine;
};