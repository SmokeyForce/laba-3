#include "SystemUnit.h"
#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int SystemUnit::count = 0;
SystemUnit::SystemUnit() :brand("Papucious"), model("Vinnytsya"), price(100), size("Mid-Tower"), motherboard("asusgromyako"), cpu("intelcorei14.1"), ram(32)
{
	cout << "System Unit \"" << this->getUnitName() << "\" was created" << endl;
	count++;
}
SystemUnit::~SystemUnit()
{
	cout << "System Unit \"" << this->getUnitName() << "\" was destroyed" << endl;
}
SystemUnit::SystemUnit(string _brand, string _model, int _price, string _colour, string _size, string _motherboard, string _cpu, int _ram) :
	brand(_brand), model(_model), price(_price), colour(_colour), size(_size), motherboard(_motherboard), cpu(_cpu), ram(_ram)
{
	cout << "System Unit \"" << this->getUnitName() << "\" was created" << endl;
	count++;
}
SystemUnit::SystemUnit(const SystemUnit& unit): 
	brand(unit.brand), model(unit.model), price(unit.price), colour(unit.colour), size(unit.size), motherboard(unit.motherboard), cpu(unit.cpu), ram(unit.ram)
{
	cout << "System Unit \"" << this->getUnitName() << "\" was created" << endl;
	count++;
}
void SystemUnit::setUnitInfo(string _brand)
{
	brand = _brand;
}
void SystemUnit::setUnitInfo(string _brand, string _model, int _price, string _colour, string _size)
{
	brand = _brand;
	model = _model;
	price = _price;
	colour = _colour;
	size = _size;
}
void SystemUnit::setComponents(string _motherboard)
{
	motherboard = _motherboard;
}
void SystemUnit::setComponents(string _motherboard, string _cpu, int _ram)
{
	motherboard = _motherboard;
	cpu = _cpu;
	ram = _ram;
}
SystemUnit SystemUnit::readUnitInfoFromFile()
{
	ifstream in("systemUnit.txt");
	SystemUnit unit;
	in >> unit.brand;
	in >> unit.model;
	in >> unit.price;
	in >> unit.colour;
	in >> unit.size;
	in >> unit.motherboard;
	in >> unit.cpu;
	in >> unit.ram;
	return unit;
}
void SystemUnit::writeUnitInfoInFile()
{
	ofstream out("systemUnit.txt");
	out << brand << endl;
	out << model << endl;
	out << price << endl;
	out << colour << endl;
	out << size << endl;
	out << motherboard << endl;
	out << cpu << endl;
	out << ram << endl;
}
void SystemUnit::showUnit()
{
	cout << brand << endl;
	cout << model << endl;
	cout << price << endl;
	cout << colour << endl;
	cout << size << endl;
	cout << motherboard << endl;
	cout << cpu << endl;
	cout << ram << endl;
}
string SystemUnit::getUnitName()
{
	return this->brand + " " + this->model;
}
void SystemUnit::connectMonitor(Monitor* monitor)
{
	cout << monitor->brand + " " + monitor->model + " is connected to " + this->brand;
}