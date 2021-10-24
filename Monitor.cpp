#include "Monitor.h"
#include <iostream>
#include <fstream>
#include <string>
using namespace std;
void Monitor::setInfo(string _brand) 
{
	brand = _brand;
}
void Monitor::setInfo(string _brand, string _model, int _price, int _number)
{
	brand = _brand;
	model = _model;
	price = _price;
	number = _number;
}
void Monitor::setResolution(int _inch)
{
	inch = _inch;
}
void Monitor::setResolution(int _resolutionHeigh, int _resolutionWidth, int _inch)
{
	resolutionHeigh = _resolutionHeigh;
	resolutionWidth = _resolutionWidth;
	inch = _inch;
}
void Monitor::setOtherInfo(int _hhz, int _numOfButtons)
{
	hhz = _hhz;
	numOfButtons = _numOfButtons;
}
Monitor Monitor::readInfoFromFile()
{
	ifstream in("monitor.txt");
	Monitor monitor;
	in >> monitor.brand;
	in >> monitor.model;
	in >> monitor.price;
	in >> monitor.resolutionHeigh;
	in >> monitor.resolutionWidth;
	in >> monitor.hhz;
	in >> monitor.numOfButtons;
	in >> monitor.inch;
	return monitor;
}
void Monitor::writeInfoInFile()
{
	ofstream out("monitor.txt");
	out << brand << endl;
	out << model << endl;
	out << price << endl;
	out << resolutionHeigh << endl;
	out << resolutionWidth << endl;
	out << hhz << endl;
	out << numOfButtons << endl;
	out << inch << endl;
}
void Monitor::show()
{
	cout << brand << endl;
	cout << model << endl;
	cout << price << endl;
	cout << resolutionHeigh << endl;
	cout << resolutionWidth << endl;
	cout << hhz << endl;
	cout << numOfButtons << endl;
	cout << inch << endl;
}
int* Monitor::allocRandomMemory()
{
	int* arr = new int[5];
	return arr;
}
int Monitor::getNumber()
{
	return number;
}