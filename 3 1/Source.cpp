// Lab_03_1.cpp
//������� ������ ���㳿���
//����������� ������ �3.1
//������������, ������ ��������: ������� ���� �����.
//������ 19

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
	// c����1: ������������ � ��������� ����
	if (x < -1)
		B = (sin(x)) / (1.0 + cos(x) * cos(x));
	if (x >= -1 && x <= 1)
		B = cos(sin(x) * sin(x)) * cos(sin(x) * sin(x));
	if (x > 1)
		B = log10(x + 0.4);
	y = A + B;
	cout << endl; cout << "1) y=  " << y << endl;

	//�����2: ������������ � ����� ����
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