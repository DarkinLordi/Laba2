#pragma once

#include <string>
#include <iostream>
using namespace std;

class FIO
{
public:
	FIO();
	FIO(string a, string b, string c);
	FIO(string a);
	~FIO();
	void OutFIO();
	void SetFIO(string a, string b, string c);
	void InputFIO();
	void RedFIO();
	string firstname, midlename, lastname;
};