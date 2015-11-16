// YogiFitMain.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

using namespace std;

static const string MachineListFileName = "MachineList.txt";

void AddMachineToList(YogiFit::Machine* machine) {
	string machineType;
	string machineID;
	int resultID;
	string machineName;
	MachineFactory* machineFactory = new MachineFactory;
	Machine* newMachine = nullptr;
	
	cout << "Enter the machine type.\n";
	cin >> machineType;
	cout << "Enter the machine's identification number.\n";
	cin >> machineID;
	resultID = stoi(machineID);
	cout << "Enter the machine's name.\n";
	cin >> machineName;	
	
	newMachine = machineFactory->GenerateMachine(resultID, machineName, machineType);

	if (newMachine == nullptr) {
		cout << "Incorrect machine type; please try again.";
	}

	machine->MergeFrom(newMachine->getYogiFitMachine());
	cout << "\n";
}

int _tmain(int argc, _TCHAR* argv[]) {
	GOOGLE_PROTOBUF_VERIFY_VERSION;

	cout << "Welcome to YogiFit Tracking Software.\n";
	cout << "Please type answers to the following questions after the prompts.\n\n";

	YogiFit::MachineList machineList;

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
	bool moreData = true;
	string continueInput;

	while (moreData) {
		AddMachineToList(machineList.add_machine());
	
		cout << "Would you like to add another machine? Reply with 'yes' or 'no'.\n";
		cin >> continueInput;
		if (continueInput.compare("no") == 0) {
			moreData = false;
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

