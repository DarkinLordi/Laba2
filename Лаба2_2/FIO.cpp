#define _CRT_SECURE_NO_WARNINGS
#include "FIO.h"

FIO::FIO()
{
	firstname = midlename = lastname = "Отсутствует";
}

FIO::FIO(string a, string b, string c)
{
	firstname = a;
	midlename = b;
	lastname = c;
}

FIO::FIO(string a)
{
	firstname = a;
	midlename = lastname = "Отсутствует";
}

FIO::~FIO()
{
}

void FIO::OutFIO()
{
	cout << firstname + " " + midlename + " " + lastname << endl;
}

void FIO::SetFIO(string a, string b, string c)
{
	firstname = a;
	midlename = b;
	lastname = c;
}

void FIO::InputFIO()
{
	string a, b, c;
	system("cls");
	printf("Введите имя участника: ");
	cin >> a;
	printf("Введите отчество участника: ");
	cin >> b;
	printf("Введите фамилию участника: ");
	cin >> c;
	SetFIO(a, b, c);
}

void FIO::RedFIO()
{
	int k;
	do
	{
		system("cls");
		OutFIO();
		printf("Выберите действие:\n1-Имя\n2-Отчество\n3-Фамилия\n4-Закончить редактирование\n");
		scanf("%d", &k);
		if (k == 1)
		{
			printf("Введите имя: ");
			cin >> firstname;
		}
		if (k == 2)
		{
			printf("Введите отчество: ");
			cin >> midlename;
		}
		if (k == 3)
		{
			printf("Введите фамилию: ");
			cin >> lastname;
		}
	} while (k != 4);
}


