#include "Athletes.h"
#include "Jump.h"

#include <iostream>
#include <Windows.h>
#include <string>
using namespace std;



int main()
{
	setlocale(LC_ALL, "rus");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	Athletes* a = new Athletes;
	a->InputAthletes();
	a->OutAthletes();
	a->RedAthletes();
	a->ResAthletes();
	delete a;
	system("pause");
	system("cls");
	Athletes* b = new Athletes("10.20.2020");
	b->OutAthletes();
	delete b;
	system("pause");
	system("cls");
	Athletes* c[3];
	c[0] = new Athletes;
	c[1] = new Athletes;
	c[2] = new Athletes;
	delete c[0];
	delete c[1];
	delete c[2];
}