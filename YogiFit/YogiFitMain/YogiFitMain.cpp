// YogiFitMain.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "tchar.h"
#include "MachineFactory.h"
#include <iostream>
#include <list>
#include <vector>


using namespace std;

int _tmain() {
	string machineType;
	string machineID;
	int resultID;
	string machineName;
	string continueInput;
	bool enterData = true;
	MachineFactory* machineFactory = new MachineFactory;
	Machine* newMachine = nullptr;

	cout << "Welcome to YogiFit Tracking Software.\n";
	cout << "Please type answers to the following questions after the prompts.\n\n";

	while (enterData) {
		cout << "Enter the machine type.\n";
		cin >> machineType;
		cout << "Enter the machine's identification number.\n";
		cin >> machineID;
		resultID = stoi(machineID);
		cout << "Enter the machine's name.\n";
		cin >> machineName;
		cout << "Would you like to enter another machine? Enter 'yes' or 'no'.\n";
		cin >> continueInput;
		if (continueInput.compare("no") == 0) {
			enterData = false;
		}
	
		newMachine = machineFactory->GenerateMachine(resultID, machineName, machineType);
		
		if (newMachine == nullptr) {
			cout << "Incorrect machine type; please try again.";
		}
		cout << "\n";
	}

	return 0;
}

