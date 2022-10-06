#pragma once

#include <string>
#include <iostream>
using namespace std;

class Jump
{
public:
	Jump();
	Jump(int c, int r[5], double h, double a, string d);
	Jump(string d);
	~Jump();
	int result[5];
	double average, height;
	string data;
	void OutJump();
	void SetJump(int c, int r[5], double h, double a, string d);
	void InputJump();
	void RedJump();
	void ResJump();
private:
	int count;
};