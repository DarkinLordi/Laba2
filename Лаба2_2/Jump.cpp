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
	printf("Прыжки:\n");
	cout << data << endl;
	printf("Кол-во прыжков: %d\n", count);
	for (int i = 0; i < count; i++)
		printf("Результат %d - %d\n", i + 1, result[i]);
	printf("Средний результат: %.2lf\n", average);
	printf("Самый высокий прыжок: %.2lf\n", height);
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
	printf("Введите дату участия в прыжках : ");
	cin >> data;
	printf("Введите кол-во прыжков(не более 5): ");
	int l, r[5];
	scanf("%d", &l); while (getchar() != '\n');
	if (l == 1)
	{
		printf("Введите дальность прыжка(метры): ");
		scanf("%d", &r[0]); while (getchar() != '\n');
		j = (double)r[0];
	}
	else
	{
		int sum = 0;
		for (int k = 0; k < l; k++)
		{
			printf("Введите дальность %d-го прыжка(метры): ", k + 1);
			scanf("%d", &r[k]); while (getchar() != '\n');
			sum = sum + r[k];
		}
		j = (double)sum / (double)l;
	}
	printf("Введите самый высокий прыжок: ");
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
		printf("Выберите действие:\n1-Дата\n2-Прыжки\n3-Закончить редактирование\n");
		int l; double j;
		scanf("%d", &k);
		if (k == 1)
		{
			printf("Введите дату: ");
			cin >> data;
		}
		if (k == 2)
		{
			printf("Введите кол-во прыжков(не более 5): ");
			scanf("%d", &l); while (getchar() != '\n');
			if (l == 1)
			{
				count = l;
				printf("Введите дальность прыжка(метры): ");
				scanf("%d", &result[0]); while (getchar() != '\n');
				j = (double)result[0];
			}
			else
			{
				count = l;
				int sum = 0;
				for (int k = 0; k < l; k++)
				{
					printf("Введите дальность %d-го прыжка(метры): ", k + 1);
					scanf("%d", &result[k]); while (getchar() != '\n');
					sum = sum + result[k];
				}
				j = (double)sum / (double)l;
				average = j;
			}
			printf("Введите самый высокий прыжок: ");
			scanf("%lf", &height);
		}
	} while (k != 3);
}

void Jump::ResJump()
{
	system("cls");
	printf("Чтобы обпрыгать Землю, спортсмену потребуется сделать %.0lf прыжков\n", (double)40075000 / average);
	printf("Чтобы добраться до Луны, спортсмену потребуется сделать %.0lf прыжков в высоту\n", (double)384400000 / height);
	system("pause");
}

