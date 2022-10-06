#pragma once

#include <string>
#include <iostream>
using namespace std;

class Run
{
public:
	Run();
	Run(int a[5], int b, double k, string j);
	Run(string a);
	~Run();
	int result[5];
	double average;
	string data;
	void OutRun();
	void SetRun(int a[5], int b, double k, string j);
	void InputRun();
	void RedRun();
	void ResRun();
private:
	int count;
};