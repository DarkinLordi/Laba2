#define _CRT_SECURE_NO_WARNINGS
#include "Jump.h"

Jump::Jump()
{
	count = height = average = 0;
	for (int i = 0; i < 5; i++)
		result[i] = 0;
	data = "0";
}

Jump::Jump(int c, int r[5], double h, double a, string d)
{
	count = c;
	for (int i = 0; i < c; i++)
		result[i] = r[i];
	height = h;
	average = a;
	data = d;
}

Jump::Jump(string d)
{
	count = height = average = 0;
	for (int i = 0; i < 5; i++)
		result[i] = 0;
	data = d;
}

Jump::~Jump()
{
}

void Jump::OutJump()
{
	printf("������:\n");
	cout << data << endl;
	printf("���-�� �������: %d\n", count);
	for (int i = 0; i < count; i++)
		printf("��������� %d - %d\n", i + 1, result[i]);
	printf("������� ���������: %.2lf\n", average);
	printf("����� ������� ������: %.2lf\n", height);
}

void Jump::SetJump(int c, int r[5], double h, double a, string d)
{
	count = c;
	for (int i = 0; i < c; i++)
		result[i] = r[i];
	height = h;
	average = a;
	data = d;
}

void Jump::InputJump()
{
	string data;
	double j;
	system("cls");
	printf("������� ���� ������� � ������� : ");
	cin >> data;
	printf("������� ���-�� �������(�� ����� 5): ");
	int l, r[5];
	scanf("%d", &l); while (getchar() != '\n');
	if (l == 1)
	{
		printf("������� ��������� ������(�����): ");
		scanf("%d", &r[0]); while (getchar() != '\n');
		j = (double)r[0];
	}
	else
	{
		int sum = 0;
		for (int k = 0; k < l; k++)
		{
			printf("������� ��������� %d-�� ������(�����): ", k + 1);
			scanf("%d", &r[k]); while (getchar() != '\n');
			sum = sum + r[k];
		}
		j = (double)sum / (double)l;
	}
	printf("������� ����� ������� ������: ");
	double h;
	scanf("%lf", &h);
	SetJump(l, r, h, j, data);
}

void Jump::RedJump()
{
	int k;
	do
	{
		system("cls");
		OutJump();
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
				printf("������� ��������� ������(�����): ");
				scanf("%d", &result[0]); while (getchar() != '\n');
				j = (double)result[0];
			}
			else
			{
				count = l;
				int sum = 0;
				for (int k = 0; k < l; k++)
				{
					printf("������� ��������� %d-�� ������(�����): ", k + 1);
					scanf("%d", &result[k]); while (getchar() != '\n');
					sum = sum + result[k];
				}
				j = (double)sum / (double)l;
				average = j;
			}
			printf("������� ����� ������� ������: ");
			scanf("%lf", &height);
		}
	} while (k != 3);
}

void Jump::ResJump()
{
	system("cls");
	printf("����� ��������� �����, ���������� ����������� ������� %.0lf �������\n", (double)40075000 / average);
	printf("����� ��������� �� ����, ���������� ����������� ������� %.0lf ������� � ������\n", (double)384400000 / height);
	system("pause");
}

