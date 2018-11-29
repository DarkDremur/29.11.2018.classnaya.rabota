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
		printf("�������� ��������� ���� ����� ������: \n");
	}
	else
	{
		printf("������ �������� �������� ���� �����: \n");
	}
}


//2
void task2()
{
	setlocale(LC_ALL, "");
	int shirota, dolgota;
start:
	printf("������� ������: ");
	scanf_s("%d", &shirota);

	printf("������� : �������:");
	scanf_s("%d", &dolgota);

	if (shirota >= 90 || shirota < -90) {
		printf("�� ����� ������������ ������ \n");
		goto start;
	}
	if (dolgota > 90 || dolgota < -90) {
		printf("�� ����� ������������ ������� \n");
		goto start;
	}


	if (shirota >= 0 && shirota <= 90)
		printf("�������� ��������� \n");

	else if (shirota >= -90 && shirota < 0)
		printf("����� ��������� \n");

    if (dolgota > 0 && dolgota < -180)
		printf("��������� ��������� \n");

	else if (dolgota > -180 - 180 && dolgota < 0)
		printf("�������� ��������� \n");
}

//3
void task3()
{
	setlocale(LC_ALL, "");
	int duration, day, price = 23, total, x;

	printf("������ ����������������� ���������: \n");
	scanf_s("%d", &duration);

	printf("������� ���� ������: \n");
	scanf_s("%d", &day);


	if (day == 6 || day == 7)
	{
		total = duration * price;
		printf("����� ��� ������� : %d\n", total);

		x = (duration * price);
		printf("����� co ������� : %d\n", total);
	}
	else
	{
		total = duration * price;
		printf("�����: %d\n", total);
	}
}

//4
void task4()
{
	setlocale(LC_ALL, "");
	int price=0;
	printf("������� ��������� �������: ");
	scanf_s("%d", &price);

	if (price > 500 && price < 1000)
	{
		price = price * 0, 95;
		printf("��� ������������ ������ 5%%. ��������� ��������: ");
	}
	else if (price > 1000)
	{
		price = price * 0, 9;
		printf("��� ������������ ������ 10%%. ��������� ��������: ");
	}
	else
	{
		printf("��� �������, ��� ������ ��� ����!: \n");
	}
}

//5
void task5()
{
	setlocale(LC_ALL, "");
	int season;
start:
	printf("������� ����� �� 1 �� 12: ");
	scanf_s("%d", &season);

	if (season < 1 || season  > 12)
	{
		printf("�������� �����: ");
		goto start;
	}

	switch (season)
	{
	case 12:
	case 1:
	case 2:
		printf("����: \n");
		break;
	case 3:
	case 4:
	case 5:
		printf("�����: \n");
		break;
	case 6:
	case 7:
	case 8:
		printf("����: \n");
		break;
	case 9:
	case 10:
	case 11:
		printf("�����: \n");
		break;
	}
}

//6
void task6()
{
	setlocale(LC_ALL, "");
	int a, b, c;
	printf("������� ������ �����: ");
	scanf_s("%d", &a);

	printf("������� ������ �����: ");
	scanf_s("%d", &b);

	printf("������� ������ �����: ");
	scanf_s("%d", &c);
	
	if (a == b || b == c || a == c)
	{
		printf("����� �������� �����, ������� ���� ������: \n ");
	}
	else
	{
		printf("��� ����� �����: \n ");
	}


}

//7
void task7()
{
	setlocale(LC_ALL, "");
	int time;
start:
	printf("������� ����� ����� �� 0 �� 24: ");
	scanf_s("%d", &time);
	if (time > 24 || time < 0) {
		printf("�������������� ��� �����, ������� ������������ ��� ����� �� 0 �� 24 \n");
		goto start;
	}
	if (time >= 6 && time <= 12) {
		SetConsoleTextAttribute(hConsole, 14);
		printf("���� \n");
		SetConsoleTextAttribute(hConsole, 15);
	}
	else if (time >= 12 && time <= 18) {
		SetConsoleTextAttribute(hConsole, 13);
		printf("���� \n");
		SetConsoleTextAttribute(hConsole, 15);
	}
	else if (time >= 18 && time <= 24) {
		SetConsoleTextAttribute(hConsole, 11);
		printf("����� \n");
		SetConsoleTextAttribute(hConsole, 15);
	}
	else {
		SetConsoleTextAttribute(hConsole, 12);
		printf("���� \n");
		SetConsoleTextAttribute(hConsole, 15);
	}
}

//8
void task8()
{
	setlocale(LC_ALL, "");
	int a;
start:
	printf("������� �����:");
	scanf_s("%d", &a);
	if (a > 99 || a < 1)
	{
		printf("������� ����� �� 1 �� 99: \n"); 
		goto start;
	}
	if (a - (a / 10)*a >= 2 && a - (a / 10)*a < +4)
		printf("%d ������� \n", a);
	else if ((a - (a / 10)*a) >= 5 && (a - (a / 10)*a) <= 9)
		printf("%d ����e�� \n", a);
	else
		printf("%d ������� \n", a);


}

//9 �� ��������
void task9()
{
	setlocale(LC_ALL, "");
	int a;
start:
	printf("������� ����� �� 1 �� 9: ");
	scanf_s("%d", &a);
	if (a / 1000 < 1 || a / 1000 > 9) {
		printf("�� ����� �������� �����! \n");
		goto start;
	}
	if (a / 1000 == a % 10 && a / 100 % 10 == a % 100 / 10)
		printf("��� ����������� \n");
	else
		printf("��� ����������� \n");
}

//10
void task10()
{
	setlocale(LC_ALL, "");
	int a , b;
	printf("������� 1 �����:");
	scanf_s("%d", &a);
	printf("������� 2 �����:");
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
	printf("������� �����������:\n");
	printf("1 ������:\n");
	printf("2 ������:\n");
	printf("3 �������:\n");
	printf("4 ���������:\n");
	scanf_s("%d", &i);
	printf("���� ���� � �������? 1/0:");
	scanf_s("%d", &k);

	switch (i)
	{
	case 1:
	{
		price = 600;
		printf("��������� ����� ����������: %d\n", price);
		if (k == 1)
		{
			price = price * 1.2;
			printf("��������� ����� ����������: %d\n", price);
		}
	}break;
	case 2:
	{
		price = 700;
		printf("��������� ����� ����������: %d\n", price);
		if (k == 1)
		{
			price = price * 1.2;
			printf("��������� ����� ����������: %d\n", price);
		}
	}break;
	case 3:
	{
		price = 800;
		printf("��������� ����� ����������: %d\n", price);
		if (k == 1)
		{
			price = price * 1.2;
			printf("��������� ����� ����������: %d\n", price);
		}
	}break;
	case 4:
	{
		price = 900;
		printf("��������� ����� ����������: %d\n", price);
		if (k == 1)
		{
			price = price * 1.2;
			printf("��������� ����� ����������: %d\n", price);
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
	printf("������� ����� �������: ");
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
	printf("������ ���������� 1/0?: \n ");


	scanf_s("%d", &flag);
	if (flag == 1)
		goto start;
	system("pause");
}