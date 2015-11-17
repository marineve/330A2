/** @file YogiFitTest.cpp This file contains the test functionality for this console application. */

#include "stdafx.h"
#include "gtest/gtest.h"
#include "MachineFactory.h"

/**
* This test validates a BenchPress object created by directly calling the 
* BenchPress class constructor.
*/
TEST(TestBenchPress, TestCreateBenchPress) {
	int id = 1234;
	std::string name = "Mrs Peacock";

	BenchPress newBenchPress(id, name);

	ASSERT_EQ(id, newBenchPress.getMachineID());
	ASSERT_EQ(name, newBenchPress.getMachineName());
}

/**
* The following test ensures that a Treadmill object created by cloning an 
* existing Treadmill object has the same values. 
*/
TEST(TestTreadmill, TestTreadmillClone) {
	int id = 1234;
	std::string name = "Mr Green";

	Treadmill newTreadmill(id, name);
	Machine* newMachine = newTreadmill.clone();

	ASSERT_EQ(id, newMachine->getMachineID());
	ASSERT_EQ(name, newMachine->getMachineName());
}

/**
* This test ensures that an object created with the MachineFactory has the 
* correct values after initialization.
*/
TEST(TestMachineFactory, VerifyResultingMachine) {
	MachineFactory* machineFactory = new MachineFactory;

	std::string type = "Treadmill";
	int id = 1234;
	std::string name = "Curious George";

	Machine* newMachine = machineFactory->GenerateMachine(id, name, type);

	EXPECT_EQ(type, newMachine->getMachineType());
	EXPECT_EQ(id, newMachine->getMachineID());
	EXPECT_EQ(name, newMachine->getMachineName());
}

/**
* The following test validates that an object created by a cloned prototype in the
* MachineFactory class contains the correct values. 
*/
TEST(TestMachineFactory, TestMachineFactoryClone) {
	MachineFactory* machineFactory = new MachineFactory;
	Machine* newMachine = nullptr;

	std::string type = "Benchpress";
	int id = 1234;
	std::string name = "Miss Scarlet";

	newMachine = machineFactory->GenerateMachine(id, name, type);

	type = "Treadmill";
	id = 5678;
	name = "Prof Plum";

	newMachine = machineFactory->GenerateMachine(id, name, type);
	EXPECT_EQ(type, newMachine->getMachineType());
	EXPECT_EQ(id, newMachine->getMachineID());
	EXPECT_EQ(name, newMachine->getMachineName());
}

/**
* This test demonstrates that a Machine object created by the MachineFactory with an
* invalid type will return a nullptr. 
*/
TEST(TestMachineFactory, FailWithIncorrectType) {
	MachineFactory* machineFactory = new MachineFactory;
	std::string type = "MonkeyBars";
	int id = 1234;
	std::string name = "Monkey Puzzle";

	Machine* newMachine = machineFactory->GenerateMachine(id, name, type);
	EXPECT_EQ(nullptr, newMachine);
}

int _tmain(int argc, _TCHAR* argv[])
{
	::testing::InitGoogleTest(&argc, argv);
	RUN_ALL_TESTS();
	system("PAUSE");
	return 0;
}

