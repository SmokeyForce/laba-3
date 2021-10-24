#include <iostream>
#include <string>
#include <fstream>
#include <Windows.h>
#include <time.h>
#include "Monitor.h"
#include "SystemUnit.h"
#include "Driver.h"
using namespace std;

int main() 
{
	srand(time(NULL));
	//task 5 static and dynamic objects
	Monitor monitor1, monitor2, monitor3, monitor4, monitor5;
	SystemUnit unit1, unit2, unit3, unit4, unit5;
	Monitor* dynamicMonitor1 = new Monitor();
	Monitor* dynamicMonitor2 = new Monitor();
	Monitor* dynamicMonitor3 = new Monitor();
	Monitor* dynamicMonitor4 = new Monitor();
	Monitor* dynamicMonitor5 = new Monitor();
	SystemUnit* dynamicUnit1 = new SystemUnit();
	SystemUnit* dynamicUnit2 = new SystemUnit();
	SystemUnit* dynamicUnit3 = new SystemUnit();
	SystemUnit* dynamicUnit4 = new SystemUnit();
	SystemUnit* dynamicUnit5 = new SystemUnit();
	//task 6 2 mass of objects
	Monitor monitors[5];
	SystemUnit units[5];
	monitors[0] = monitor1; monitors[1] = monitor2;
	monitors[2] = monitor3; monitors[3] = monitor4;
	monitors[4] = monitor5;
	units[0] = unit1; units[1] = unit2;
	units[2] = unit3; units[3] = unit4;
	units[4] = unit5;
	Monitor* dynamicMonitors[5];
	SystemUnit* dynamicUnits[5];
	dynamicMonitors[0] = dynamicMonitor1; dynamicMonitors[1] = dynamicMonitor2;
	dynamicMonitors[2] = dynamicMonitor3; dynamicMonitors[3] = dynamicMonitor4;
	dynamicMonitors[4] = dynamicMonitor5;
	dynamicUnits[0] = dynamicUnit1; dynamicUnits[1] = dynamicUnit2;
	dynamicUnits[2] = dynamicUnit3; dynamicUnits[3] = dynamicUnit4;
	dynamicUnits[4] = dynamicUnit5;
	//task 7-8 demonstr of work
	for (int i = 0; i < 5; i++) // set info of monitor
	{
		monitors[i].setInfo("Acer", "x203w", 100, rand() % 50 + 100);
		monitors[i].setResolution(1650, 1050, 20);
		monitors[i].setOtherInfo(144, 4);
		dynamicMonitors[i]->setInfo("Acer", "x203w", 100,rand() % 50 + 100);
		dynamicMonitors[i]->setResolution(1650, 1050, 20);
		dynamicMonitors[i]->setOtherInfo(144, 4);
	}
	Monitor monitor = monitors[1];
	monitor.writeInfoInFile();
	Monitor anotherMonitor = Monitor::readInfoFromFile();
	anotherMonitor.show();
	for (int i = 0;i < 5;i++)
	{
		units[i].setUnitInfo("Papucious", "Vinnytsya", 100, "black", "mid-tower");
		units[i].setComponents("asusgromyako", "intelcorei14.1", 32);
		dynamicUnits[i]->setUnitInfo("Papucious", "Vinnytsya", 100, "black", "mid-tower");
		dynamicUnits[i]->setComponents("asusgromyako", "intelcorei14.1", 32);
	}
	SystemUnit unit = units[1];
	unit.writeUnitInfoInFile();
	SystemUnit anotherUnit = SystemUnit::readUnitInfoFromFile();
	anotherUnit.showUnit();
	unit.connectMonitor(dynamicMonitor1);
	Driver driver;
	driver.setDriver(&monitor,&unit);
	//task 9 dynamic memory
	int* array = monitor.allocRandomMemory();
	for (int i = 0; i < 5; i++)
	{
		array[i] = monitors[i].getNumber();
		cout << array[i] << " ";
	}
	cout << endl;
	for (int i = 0; i < 5; i++)
	{
		for (int j = i + 1; j < 5; j++)
		{
			if (array[j] < array[i])swap(array[i], array[j]);
		}
	}
	cout << endl;
	for (int i = 0; i < 5; i++)
	{
		cout << array[i] << " ";
	}
	cout << endl;
	//tast 10
	Monitor* pointerMonitor = &monitor;
	pointerMonitor->show();
}