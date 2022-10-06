#define _CRT_SECURE_NO_WARNINGS
#include "Run.h"

Run::Run()
{
	count = average = 0;
	for (int i = 0; i < 5; i++)
		result[i] = 0;
	data = '0';
}

Run::Run(int a[5], int b, double k, string j)
{
	count = b;
	for (int i = 0; i < b; i++)
		result[i] = a[i];
	average = k;
	data = j;
}

Run::Run(string a)
{
	data = a;
	count = average = 0;
	for (int i = 0; i < 5; i++)
		result[i] = 0;
}

Run::~Run()
{

}

void Run::OutRun()
{
	printf("���:\n");
	cout << data << endl;
	printf("���-�� �������: %d\n", count);
	for (int i = 0; i < count; i++)
		printf("��������� %d - %d\n", i + 1, result[i]);
	printf("������� ���������: %.2lf\n", average);
}

void Run::SetRun(int a[5], int b, double k, string j)
{
	count = b;
	for (int i = 0; i < b; i++)
		result[i] = a[i];
	average = k;
	data = j;
}

void Run::InputRun()
{
	string data;
	int r[5];
	double a;
	system("cls");
	printf("������� ���� ������� � ������: ");
	cin >> data;
	printf("������� ���-�� �������(�� ����� 5): ");
	int l;
	scanf("%d", &l); while (getchar() != '\n');
	if (l == 1)
	{
		printf("������� ����. �������� ������(�/�): ");
		scanf("%d", &r[0]); while (getchar() != '\n');
		a = (double)r[0];
	}
	else
	{
		int sum = 0;
		for (int k = 0; k < l; k++)
		{
			printf("������� ����. �������� %d-�� ������(�/c): ", k + 1);
			scanf("%d", &r[k]); while (getchar() != '\n');
			sum = sum + r[k];
		}
		a = (double)sum / (double)l;
	}
	SetRun(r, l, a, data);
}

void Run::RedRun()
{
	int k;
	do
	{
		system("cls");
		OutRun();
		printf("�������� ��������:\n1-����\n2-������\n3-��������� ��������������\n");
		int l; double j;
		scanf("%d", &k);
		if (k == 1)
		{
			printf("������� ����: ");
			cin >> data;
		}
		if (k == 2)
		{
			printf("������� ���-�� �������(�� ����� 5): ");
			scanf("%d", &l); while (getchar() != '\n');
			if (l == 1)
			{
				count = l;
				printf("������� ����. �������� ������(�/�): ");
				scanf("%d", &result[0]); while (getchar() != '\n');
				j = (double)result[0];
				average = j;
			}
			else
			{
				count = l;
				int sum = 0;
				for (int k = 0; k < l; k++)
				{
					printf("������� ����. �������� %d-�� ������(�/�): ", k + 1);
					scanf("%d", &result[k]); while (getchar() != '\n');
					sum = sum + result[k];
				}
				j = (double)sum / (double)l;
				average = j;
			}
		}
	} while (k != 3);
}

void Run::ResRun()
{
	system("cls");
	printf("������� ����������(�): ");
	int k;
	scanf("%d", &k);
	printf("��������� �������� ��������� %d� �� %.2lf ������\n", k, (double)k / average);
	system("pause");
}