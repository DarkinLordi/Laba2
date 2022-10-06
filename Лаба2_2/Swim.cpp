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
	printf("Плаванье:\n");
	cout << data << endl;
	printf("Длина дорожки: %d\n", range);
	printf("Кол-во заплывов: %d\n", count);
	for (int i = 0; i < count; i++)
		printf("Результат %d - %d\n", i + 1, result[i]);
	printf("Средний результат: %.2lf\n", average);
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
	printf("Введите дату участия в плаванье: ");
	cin >> data;
	printf("Введите длину дорожки(метры): ");
	scanf("%d", &n);
	printf("Введите кол-во заплывов(не более 5): ");
	int l;
	scanf("%d", &l); while (getchar() != '\n');
	if (l == 1)
	{
		printf("Введите макс. скорость плаванья(м/с): ");
		scanf("%d", &r[0]); while (getchar() != '\n');
		a = (double)r[0];
	}
	else
	{
		int sum = 0;
		for (int k = 0; k < l; k++)
		{
			printf("Введите макс. скорость %d-го плаванья(м/с): ", k + 1);
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
		printf("Выберите действие:\n1-Дата\n2-Дальность дорожки\n3-Забеги\n4-Закончить редактирование\n");
		int l; double j;
		scanf("%d", &k);
		if (k == 1)
		{
			printf("Введите дату: ");
			cin >> data;
		}
		if (k == 2)
		{
			printf("Введите дальность дорожки(метры): ");
			scanf("%d", range);
		}
		if (k == 3)
		{
			printf("Введите кол-во заплывов(не более 5): ");
			scanf("%d", &l); while (getchar() != '\n');
			if (l == 1)
			{
				count = l;
				printf("Введите макс. скорость заплыва(м/с): ");
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
					printf("Введите макс. скорость %d-го заплыва(м/с): ", k + 1);
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
	printf("Использовать введенную дальность дорожки или ввести новую?\n1-Использовать текущую\n2-Ввести новую\n");
	int k;
	scanf("%d", &k);
	if (k == 1)
		printf("Спортсмен способен проплыть дорожку дальностью %d за %.2lf секунд\n", range, (double)range / average);
	if (k == 2)
	{
		printf("Введите дальность: ");
		int r;
		scanf("%d", &r);
		printf("Спортсмен способен проплыть дорожку дальностью %d за %.2lf секунд\n", r, (double)r / average);
	}
	system("pause");
}