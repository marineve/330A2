// YogiFitTest.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "gtest/gtest.h"
#include "MachineFactory.h"

TEST(TestBenchPress, TestCreateBenchPress) {
	int id = 1234;
	std::string name = "Mrs Peacock";

	BenchPress newBenchPress(id, name);

	ASSERT_EQ(id, newBenchPress.getMachineID());
	ASSERT_EQ(name, newBenchPress.getMachineName());
}

TEST(TestTreadmill, TestTreadmillClone) {
	int id = 1234;
	std::string name = "Mr Green";

	Treadmill newTreadmill(id, name);
	Machine* newMachine = newTreadmill.clone();

	ASSERT_EQ(id, newMachine->getMachineID());
	ASSERT_EQ(name, newMachine->getMachineName());
}

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

