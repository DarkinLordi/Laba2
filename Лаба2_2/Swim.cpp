#define _CRT_SECURE_NO_WARNINGS
#include "Swim.h"

Swim::Swim()
{
	count = average = range = 0;
	for (int i = 0; i < 5; i++)
		result[i] = 0;
	data = "0";
}

Swim::Swim(int c, int r[5], int l, double a, string d)
{
	range = l;
	count = c;
	for (int i = 0; i < c; i++)
		result[i] = r[i];
	average = a;
	data = d;
}

Swim::Swim(string d)
{
	count = average = range = 0;
	for (int i = 0; i < 5; i++)
		result[i] = 0;
	data = d;
}

Swim::~Swim()
{

}

void Swim::OutSwim()
{
	printf("��������:\n");
	cout << data << endl;
	printf("����� �������: %d\n", range);
	printf("���-�� ��������: %d\n", count);
	for (int i = 0; i < count; i++)
		printf("��������� %d - %d\n", i + 1, result[i]);
	printf("������� ���������: %.2lf\n", average);
}

void Swim::SetSwim(int c, int r[5], int l, double a, string d)
{
	range = l;
	count = c;
	for (int i = 0; i < c; i++)
		result[i] = r[i];
	average = a;
	data = d;
}

void Swim::InputSwim()
{
	string data;
	int r[5], n;
	double a;
	system("cls");
	printf("������� ���� ������� � ��������: ");
	cin >> data;
	printf("������� ����� �������(�����): ");
	scanf("%d", &n);
	printf("������� ���-�� ��������(�� ����� 5): ");
	int l;
	scanf("%d", &l); while (getchar() != '\n');
	if (l == 1)
	{
		printf("������� ����. �������� ��������(�/�): ");
		scanf("%d", &r[0]); while (getchar() != '\n');
		a = (double)r[0];
	}
	else
	{
		int sum = 0;
		for (int k = 0; k < l; k++)
		{
			printf("������� ����. �������� %d-�� ��������(�/�): ", k + 1);
			scanf("%d", &r[k]); while (getchar() != '\n');
			sum = sum + r[k];
		}
		a = (double)sum / (double)l;
	}
	SetSwim(l, r, n, a, data);
}

void Swim::RedSwim()
{
	int k;
	do
	{
		system("cls");
		OutSwim();
		printf("�������� ��������:\n1-����\n2-��������� �������\n3-������\n4-��������� ��������������\n");
		int l; double j;
		scanf("%d", &k);
		if (k == 1)
		{
			printf("������� ����: ");
			cin >> data;
		}
		if (k == 2)
		{
			printf("������� ��������� �������(�����): ");
			scanf("%d", range);
		}
		if (k == 3)
		{
			printf("������� ���-�� ��������(�� ����� 5): ");
			scanf("%d", &l); while (getchar() != '\n');
			if (l == 1)
			{
				count = l;
				printf("������� ����. �������� �������(�/�): ");
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
					printf("������� ����. �������� %d-�� �������(�/�): ", k + 1);
					scanf("%d", &result[k]); while (getchar() != '\n');
					sum = sum + result[k];
				}
				j = (double)sum / (double)l;
				average = j;
			}
		}
	} while (k != 4);
}

void Swim::ResSwim()
{
	system("cls");
	printf("������������ ��������� ��������� ������� ��� ������ �����?\n1-������������ �������\n2-������ �����\n");
	int k;
	scanf("%d", &k);
	if (k == 1)
		printf("��������� �������� �������� ������� ���������� %d �� %.2lf ������\n", range, (double)range / average);
	if (k == 2)
	{
		printf("������� ���������: ");
		int r;
		scanf("%d", &r);
		printf("��������� �������� �������� ������� ���������� %d �� %.2lf ������\n", r, (double)r / average);
	}
	system("pause");
}