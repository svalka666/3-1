// Lab_03_1.cpp
//Ожогова Дарина Сергіївна
//Лабораторна робота №3.1
//Розгалуження, задане формулою: функція однієї змінної.
//Варіант 19

#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double x; 
	double y; 
	double A; 
	double B; 
	
	cout << "x=  "; cin >> x;

	A = 2 * x - 13.5;
	// cпосіб1: розгалуження в скороченій формі
	if (x < -1)
		B = (sin(x)) / (1.0 + cos(x) * cos(x));
	if (x >= -1 && x <= 1)
		B = cos(sin(x) * sin(x)) * cos(sin(x) * sin(x));
	if (x > 1)
		B = log10(x + 0.4);
	y = A + B;
	cout << endl; cout << "1) y=  " << y << endl;

	//спосіб2: розгалуження у повній формі
	if (x < -1)
		B = (sin(x)) / (1.0 + cos(x) * cos(x));
	else 
		if (x >= -1 && x <= 1)
			B = cos(sin(x) * sin(x)) * cos(sin(x) * sin(x));
		else 
			B = log10(x + 0.4);
	y = A + B;
	cout << "2) y=  " << y << endl;

	cin.get();
		return 0;
}