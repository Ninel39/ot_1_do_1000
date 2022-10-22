// ot_1_do_1000.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;
void main()
{
	setlocale(0, "");
	double a, b, c;
	a = 0;
	for (double b = 1; b <= 1000; b++) a += b;
	c = a / 1000;
	cout << "Средне-арифметическое чисел от 1 до 1000 равно " << c;







}

