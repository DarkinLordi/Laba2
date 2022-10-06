#pragma once

#include <string>
#include <iostream>
using namespace std;

class Swim 
{
public:
	Swim();
	Swim(int c, int r[5], int l, double a, string d);
	Swim(string d);
	~Swim();
	int result[5], range;
	double average;
	string data;
	void OutSwim();
	void SetSwim(int c, int r[5], int l, double a, string d);
	void InputSwim();
	void RedSwim();
	void ResSwim();
private:
	int count;
};