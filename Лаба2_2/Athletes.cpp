#define _CRT_SECURE_NO_WARNINGS
#include "Athletes.h"

Athletes::Athletes()
{
	f = new FIO;
	r = new Run;
	s = new Swim;
	j = new Jump;
}

Athletes::Athletes(string d)
{
	f = new FIO;
	r = new Run(d);
	s = new Swim(d);
	j = new Jump(d);
}

Athletes::Athletes(string a, string b, string c)
{
	f = new FIO(a, b, c);
	r = new Run;
	s = new Swim;
	j = new Jump;
}

Athletes::Athletes(string a, string b, string c, string d)
{
	f = new FIO(a, b, c);
	r = new Run(d);
	s = new Swim(d);
	j = new Jump(d);
}

Athletes::~Athletes()
{
	printf("Класс спортсмен был удален\n");
}

void Athletes::OutAthletes()
{
	f->OutFIO();
	r->OutRun();
	s->OutSwim();
	j->OutJump();
}

void Athletes::ResAthletes()
{
	r->ResRun();
	s->ResSwim();
	j->ResJump();
}

void Athletes::InputAthletes()
{
	f->InputFIO();
	r->InputRun();
	s->InputSwim();
	j->InputJump();
}

void Athletes::RedAthletes()
{
	int k=0;
	do
	{
		system("cls");
		printf("Выберите, что редактировать:\n1-ФИО\n2-Бег\n3-Плаванье\n4-Прыжки\n5-Закончить редактировать\n");
		scanf("%d", &k);
		if (k == 1)
			f->RedFIO();
		if (k == 2)
			r->RedRun();
		if (k == 3)
			s->RedSwim();
		if (k == 4)
			j->RedJump();
	} while (k != 5);
}


