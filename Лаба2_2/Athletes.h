#pragma once

#include "Run.h"
#include "Jump.h"
#include "FIO.h"
#include "Swim.h"

#include <string>
#include <iostream>
using namespace std;

class Athletes
{
public:
	FIO* f;
	Run* r;
	Swim* s;
	Jump* j;
	Athletes();
	Athletes(string d);
	Athletes(string a, string b, string c);
	Athletes(string a, string b, string c, string d);
	~Athletes();
	void OutAthletes();
	void ResAthletes();
	void InputAthletes();
	void RedAthletes();
};

