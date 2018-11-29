#include <locale.h>
#include <stdio.h>
#include <iostream>
#include <Windows.h>
HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);


//1
void task1()
{
	setlocale(LC_ALL, "");
	int a = 5, b = 7, c, d;
	c = pow(a, 2) - pow(b, 2);
	d = abs(c);
	if (c > d)
	{
		printf("Разность квадратов этих чисел больше: \n");
	}
	else
	{
		printf("Модуль квадрата разности этих чисел: \n");
	}
}


//2
void task2()
{
	setlocale(LC_ALL, "");
	int shirota, dolgota;
start:
	printf("Введите широту: ");
	scanf_s("%d", &shirota);

	printf("Введите : долготу:");
	scanf_s("%d", &dolgota);

	if (shirota >= 90 || shirota < -90) {
		printf("Вы ввели некорректную широту \n");
		goto start;
	}
	if (dolgota > 90 || dolgota < -90) {
		printf("Вы ввели некорректную долготу \n");
		goto start;
	}


	if (shirota >= 0 && shirota <= 90)
		printf("Северное полушарие \n");

	else if (shirota >= -90 && shirota < 0)
		printf("Южное полушарие \n");

    if (dolgota > 0 && dolgota < -180)
		printf("Восточное полушарие \n");

	else if (dolgota > -180 - 180 && dolgota < 0)
		printf("Западное полушарие \n");
}

//3
void task3()
{
	setlocale(LC_ALL, "");
	int duration, day, price = 23, total, x;

	printf("Ведите продолжительность разговора: \n");
	scanf_s("%d", &duration);

	printf("Введите день недели: \n");
	scanf_s("%d", &day);


	if (day == 6 || day == 7)
	{
		total = duration * price;
		printf("Итого без скидкой : %d\n", total);

		x = (duration * price);
		printf("Итого co скидкой : %d\n", total);
	}
	else
	{
		total = duration * price;
		printf("Итого: %d\n", total);
	}
}

//4
void task4()
{
	setlocale(LC_ALL, "");
	int price=0;
	printf("Введите стоимость покупок: ");
	scanf_s("%d", &price);

	if (price > 500 && price < 1000)
	{
		price = price * 0, 95;
		printf("Вам предлагается скидка 5%%. Стоимость составит: ");
	}
	else if (price > 1000)
	{
		price = price * 0, 9;
		printf("Вам предлагается скидка 10%%. Стоимость составит: ");
	}
	else
	{
		printf("Что бомжара, нет скидки для тебя!: \n");
	}
}

//5
void task5()
{
	setlocale(LC_ALL, "");
	int season;
start:
	printf("Введите число от 1 до 12: ");
	scanf_s("%d", &season);

	if (season < 1 || season  > 12)
	{
		printf("Неверное число: ");
		goto start;
	}

	switch (season)
	{
	case 12:
	case 1:
	case 2:
		printf("Зима: \n");
		break;
	case 3:
	case 4:
	case 5:
		printf("Весна: \n");
		break;
	case 6:
	case 7:
	case 8:
		printf("Лето: \n");
		break;
	case 9:
	case 10:
	case 11:
		printf("Осень: \n");
		break;
	}
}

//6
void task6()
{
	setlocale(LC_ALL, "");
	int a, b, c;
	printf("Введите первое число: ");
	scanf_s("%d", &a);

	printf("Введите второе число: ");
	scanf_s("%d", &b);

	printf("Введите третье число: ");
	scanf_s("%d", &c);
	
	if (a == b || b == c || a == c)
	{
		printf("Среди введённых чисел, имеется пара равных: \n ");
	}
	else
	{
		printf("Нет таких чисел: \n ");
	}


}

//7
void task7()
{
	setlocale(LC_ALL, "");
	int time;
start:
	printf("Введите время суток от 0 до 24: ");
	scanf_s("%d", &time);
	if (time > 24 || time < 0) {
		printf("Несуществующий час суток, введите существующий час суток от 0 до 24 \n");
		goto start;
	}
	if (time >= 6 && time <= 12) {
		SetConsoleTextAttribute(hConsole, 14);
		printf("Утро \n");
		SetConsoleTextAttribute(hConsole, 15);
	}
	else if (time >= 12 && time <= 18) {
		SetConsoleTextAttribute(hConsole, 13);
		printf("День \n");
		SetConsoleTextAttribute(hConsole, 15);
	}
	else if (time >= 18 && time <= 24) {
		SetConsoleTextAttribute(hConsole, 11);
		printf("Вечер \n");
		SetConsoleTextAttribute(hConsole, 15);
	}
	else {
		SetConsoleTextAttribute(hConsole, 12);
		printf("Ночь \n");
		SetConsoleTextAttribute(hConsole, 15);
	}
}

//8
void task8()
{
	setlocale(LC_ALL, "");
	int a;
start:
	printf("Введите число:");
	scanf_s("%d", &a);
	if (a > 99 || a < 1)
	{
		printf("Введите число от 1 до 99: \n"); 
		goto start;
	}
	if (a - (a / 10)*a >= 2 && a - (a / 10)*a < +4)
		printf("%d копейки \n", a);
	else if ((a - (a / 10)*a) >= 5 && (a - (a / 10)*a) <= 9)
		printf("%d копеeки \n", a);
	else
		printf("%d копейки \n", a);


}

//9 не работает
void task9()
{
	setlocale(LC_ALL, "");
	int a;
start:
	printf("Введите число от 1 до 9: ");
	scanf_s("%d", &a);
	if (a / 1000 < 1 || a / 1000 > 9) {
		printf("Вы ввели неверное число! \n");
		goto start;
	}
	if (a / 1000 == a % 10 && a / 100 % 10 == a % 100 / 10)
		printf("Оно палиндромом \n");
	else
		printf("Оно палиндромом \n");
}

//10
void task10()
{
	setlocale(LC_ALL, "");
	int a , b;
	printf("Введите 1 число:");
	scanf_s("%d", &a);
	printf("Введите 2 число:");
	scanf_s("%d", &b);
	if (a > 0  && b < 0)
	{ 
		a = -a;
		b = -b;
		printf("%d, %d: \n", a,b);
	}
	else if (a < 0 && b > 0)
	{
		a = 0;
		b = 0;
		printf("%d, %d: \n", a, b);
	}
	else if (a > 0 && b > 0)
	{
		a = 0;
		b = 0;
		printf("%d, %d: \n", a, b);
	}
	else if (a < 0 && b < 0)
	{
		a = 0;
		b = 0;
		printf("%d, %d: \n", a, b);
	}
}

//11 
void task11()
{
	setlocale(LC_ALL, "");
	int alm, ast, shym, kar, days, price, i, k;
	printf("Введите направление:\n");
	printf("1 Алмата:\n");
	printf("2 Астана:\n");
	printf("3 Шымкент:\n");
	printf("4 Караганда:\n");
	scanf_s("%d", &i);
	printf("Рейс туда и обратно? 1/0:");
	scanf_s("%d", &k);

	switch (i)
	{
	case 1:
	{
		price = 600;
		printf("стоимость рейса составляет: %d\n", price);
		if (k == 1)
		{
			price = price * 1.2;
			printf("стоимость рейса составляет: %d\n", price);
		}
	}break;
	case 2:
	{
		price = 700;
		printf("стоимость рейса составляет: %d\n", price);
		if (k == 1)
		{
			price = price * 1.2;
			printf("стоимость рейса составляет: %d\n", price);
		}
	}break;
	case 3:
	{
		price = 800;
		printf("стоимость рейса составляет: %d\n", price);
		if (k == 1)
		{
			price = price * 1.2;
			printf("стоимость рейса составляет: %d\n", price);
		}
	}break;
	case 4:
	{
		price = 900;
		printf("стоимость рейса составляет: %d\n", price);
		if (k == 1)
		{
			price = price * 1.2;
			printf("стоимость рейса составляет: %d\n", price);
		}
	}break;
	default:
		break;
	}
}


int main()
{
	setlocale(LC_ALL, "");

	int task;
    int flag;

start:
	printf("Введите номер задания: ");
	scanf_s("%d", &task);
	switch (task)
	{
	case 1: {
		task1();
	}break;
	case 2: {
		task2();
	}break;
	case 3: {
		task3();
	}break;
	case 4: {
		task4();
	}break;
	case 5: {
		task5();
	}break;
	case 6: {
		task6();
	case 7: {
		task7();
	}break;
	case 8: {
		task8();
	}break;
	case 9: {
		task9();
	}break;
	case 10: {
		task10();
	}break;
	case 11: {
		task11();
	}break;
	}break;
	default:
		break;
	}
	printf("Хотите продолжить 1/0?: \n ");


	scanf_s("%d", &flag);
	if (flag == 1)
		goto start;
	system("pause");
}