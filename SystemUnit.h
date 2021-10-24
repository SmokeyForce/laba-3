#pragma once
#include<iostream>
#include<string>
#include<fstream>
#include "Monitor.h"
using namespace std;
class Monitor;
class SystemUnit
{
public:
	string brand;
	string model;
	int price;
	SystemUnit();
	SystemUnit(const SystemUnit& unit);
	~SystemUnit();
	SystemUnit(string _brand, string _model, int _price, string _colour, string _size, string _motherboard, string _cpu, int _ram);
	void setUnitInfo(string _brand);
	void setUnitInfo(string _brand, string _model, int _price, string _colour, string _size);
	void setComponents(string _motherboard);
	void setComponents(string _motherboard, string _cpu, int _ram);
	void writeUnitInfoInFile();
	void showUnit();
	static SystemUnit readUnitInfoFromFile();
	string getUnitName();
	void connectMonitor(Monitor* monitor);
	static int count;
private:
	string colour;
	string cpu;
	string size;
	string motherboard;
	int ram;
};
// class driver, set driver
