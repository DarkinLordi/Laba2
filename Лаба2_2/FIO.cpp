#define _CRT_SECURE_NO_WARNINGS
#include "FIO.h"

FIO::FIO()
{
	firstname = midlename = lastname = "�����������";
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
	midlename = lastname = "�����������";
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
	printf("������� ��� ���������: ");
	cin >> a;
	printf("������� �������� ���������: ");
	cin >> b;
	printf("������� ������� ���������: ");
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
		printf("�������� ��������:\n1-���\n2-��������\n3-�������\n4-��������� ��������������\n");
		scanf("%d", &k);
		if (k == 1)
		{
			printf("������� ���: ");
			cin >> firstname;
		}
		if (k == 2)
		{
			printf("������� ��������: ");
			cin >> midlename;
		}
		if (k == 3)
		{
			printf("������� �������: ");
			cin >> lastname;
		}
	} while (k != 4);
}


