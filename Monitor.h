#pragma once
#include<iostream>
#include<string>
#include<fstream>
using namespace std;
class Monitor
{
public:
	string brand;
	string model;
	int price;
	void setInfo(string _brand);
	void setInfo(string _brand, string _model, int _price, int _number);
	void setResolution(int _inch);
	void setResolution(int _resolutionHeigh, int _resolutionWidth, int _inch);
	void setOtherInfo(int _hhz, int _numOfButtons);
	static Monitor readInfoFromFile();
	void writeInfoInFile();
	void show();
	int* allocRandomMemory();
	int getNumber();
private:
	int resolutionHeigh;
	int resolutionWidth;
	int hhz;
	int numOfButtons;
	int inch;
	int number;
};

