#pragma once
#include<iostream>
#include<string>
#include<fstream>
#include "Monitor.h"
#include "SystemUnit.h"
class Monitor;
class SystemUnit;
class Driver
{
public:
	Driver();
	string name;
	string date;
	void setDriver(Monitor* monitor, SystemUnit* unit);
	void setDriverInfo(string _name, string _date);
};

