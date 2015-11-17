/*! \mainpage SEng 330 Assignment 2 Documentation
* 
* Author:		Marin Evergreen\n
* StudentID:	V00748829\n
* Date:			November 16, 2015\n
*
*
* This console application tracks machines for YogiFit gym. It accepts input from the user, 
* allowing them to save a new machine to a list a of machines stored in "MachineList.bin". 
* They may also load and view the list of machines stored in the binary file. 
*/

/** @file YogiFitMain.cpp This file contains the main functionality for this console application. */

#include "stdafx.h"

using namespace std;

/** The name of the binary file in which the machine list is stored. */
static const string MachineListFileName = "MachineList.bin";
/** A list of google protocol buffer machines. */
YogiFit::MachineList machineList;

/** 
* This method saves individual machines by adding them to the machineList global variable. 
* It accepts a machine type, identification number, and name from the user and creates a new
* Machine object. It then converts the Machine object to a google protocol buffer Machine 
* object and adds it to the list of machine objects, machineList.
*/
void AddMachineToList() {
	string machineType;
	string machineID;
	int resultID;
	string machineName;
	MachineFactory* machineFactory = new MachineFactory;
	Machine* newMachine = nullptr;
	
	cout << "\nEnter the machine type.\n";
	cin >> machineType;
	if (machineType.compare("Benchpress") != 0 && machineType.compare("Treadmill") != 0) {
		cout << "Incorrect machine type; please try again.\n";
		return;
	}
	cout << "Enter the machine's identification number.\n";
	cin >> machineID;
	if (!cin) {
		cin.clear(); 
		cout << "The ID must be an integer; please try again.\n";
		return;
	}
	resultID = stoi(machineID);
	cout << "Enter the machine's name.\n";
	cin >> machineName;	
	
	newMachine = machineFactory->GenerateMachine(resultID, machineName, machineType);

	if (newMachine == nullptr) {
		cout << "Incorrect machine type; please try again.";
	}

	machineList.add_machine()->MergeFrom(newMachine->getYogiFitMachine());
}

/**
* The following method prints the type, identfication number, and name of the machines in
* machineList, which includes the machines loaded from the file, and any added by the user
* in the same session. 
*/
void PrintMachineList() {
	if (machineList.machine_size() != 0) {
		cout << "\nType, ID, Name\n";
		for (int i = 0; i < machineList.machine_size(); i++) {
			if (machineList.machine(i).type() == 0) {
				cout << "Benchpress, ";
			}
			else if (machineList.machine(i).type() == 1){
				cout << "Treadmill, ";
			}
			cout << machineList.machine(i).id() << ", ";
			cout << machineList.machine(i).name() << "\n";
		}
	}
	else {
		cout << "No machines have been saved.\n";
	}
	cout << "\n";
}

/**
* The main() method allows the user to choose between three options: 'save', 'load' or 'exit'. The 'save' option
* allows the user to add a new machine to the system, the 'load' option prints all machines in the system, and 
* the 'exit' options allows the user to leave the application. 
*/
int _tmain() {
	GOOGLE_PROTOBUF_VERIFY_VERSION;
	string answer = "";
	bool exit = false;

	cout << "Welcome to YogiFit Tracking Software.\n";
	cout << "This software supports saving and loading of machines to the file 'MachineList.bin'.\n";

	{
		// Read the existing address book.
		fstream input(MachineListFileName, ios::in | ios::binary);
		if (!input) {
			cout << MachineListFileName << ": File not found.  Creating a new file." << endl;
		}
		else if (!machineList.ParseFromIstream(&input)) {
			cerr << "Failed to parse address book." << endl;
			return -1;
		}
	}
	cout << "\n";

	while (!exit) {
		cout << "Enter 'save' to save a new machine.\n";
		cout << "Enter 'load' to load and view the current list of machines.\n";
		cout << "Enter 'exit' to leave the application.\n";
		cin >> answer;
		if (answer.compare("save") == 0) {
			bool moreData = true;
			string continueInput;

			while (moreData) {
				AddMachineToList();

				cout << "Would you like to add another machine? Reply with 'yes' or 'no'.\n";
				cin >> continueInput;
				if (continueInput.compare("no") == 0) {
					moreData = false;
				}
			}
		}
		else if (answer.compare("load") == 0) {
			PrintMachineList();
		}
		else if (answer.compare("exit") == 0) {
			exit = true;
		}
		else {
			cout << "Unable to discern input; please try again.";
		}
	}
	{
		// Write the new address book back to disk.
		fstream output(MachineListFileName, ios::out | ios::trunc | ios::binary);
		if (!machineList.SerializeToOstream(&output)) {
			cerr << "Failed to write address book." << endl;
			return -1;
		}
	}
	return 0;
}

