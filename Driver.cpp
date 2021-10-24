#include "Driver.h"
#include <iostream>
#include <fstream>
#include <string>

void Driver::setDriver(Monitor* monitor, SystemUnit* unit)
{
	cout << "Drivers for " + unit->brand + " " + unit->model + "and " + monitor->brand + " " + monitor->model + " is installed";
	unit->connectMonitor (monitor);
}
Driver::Driver() : name("driver"), date("11.11.11")
{
	cout << this->name << "is created"<<endl;
}