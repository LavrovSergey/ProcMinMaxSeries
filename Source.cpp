#include <iostream>
#include <conio.h>
#include "Header.h"
#include <math.h>
using namespace std;

int s1()
{
	int a = 0;
	int sum = 0;
	setlocale(LC_ALL, "Russian");
	cout << "������� 10 ������������ �����, ��� � ������ �� �����" << endl;
	for (int i = 0; i < 10; i++)
	{
		cin >> a;
		sum = sum + a;
	}
	cout << "����� =  " << sum << endl;
	int code;
	cout << "���� ������ ��������� � ����, ������� ������";
	code = _getch();
	if (code == 32) { main(); }
	else return 0;
}
int s2()
{
	int a = 0;
	int mul = 1;
	setlocale(LC_ALL, "Russian");
	cout << "������� 10 ������������ �����, ��� � ������ �� ������������" << endl;
	for (int i = 0; i < 10; i++)
	{
		cin >> a;
		mul = mul * a;
	}
	cout << "������������ =  " << mul << endl;
	int code;
	cout << "���� ������ ��������� � ����, ������� ������";
	code = _getch();
	if (code == 32) { main(); }
	else return 0;
}
int s3()
{
	int a = 0;
	double sum = 0;
	double mid;
	setlocale(LC_ALL, "Russian");
	cout << "������� 10 ������������ �����, ��� � ������ �� c������ ��������������" << endl;
	for (int i = 0; i < 10; i++)
	{
		cin >> a;
		sum = sum + a;
	}
	mid = sum / 10;
	cout << "������� �������������� =  " << mid << endl;
	int code;
	cout << "���� ������ ��������� � ����, ������� ������";
	code = _getch();
	if (code == 32) { main(); }
	else return 0;
}
int s4()
{
	int a = 0, n;
	int sum = 0, mul = 1;
	setlocale(LC_ALL, "Russian");
	cout << "������� ���������� �����" << endl;
	cin >> n;
	cout << "������� n ������������ �����, ��� � ������ �� ����� � ������������" << endl;
	for (int i = 0; i < n; i++)
	{
		cin >> a;
		sum = sum + a;
		mul = mul * a;
	}
	cout << "����� =  " << sum << endl;
	cout << "������������ =  " << mul << endl;
	int code;
	cout << "���� ������ ��������� � ����, ������� ������";
	code = _getch();
	if (code == 32) { main(); }
	else return 0;
}
int m1()
{
	int a, b, n;
	int min, max;
	setlocale(LC_ALL, "Russian");
	cout << "������� ���������� �����" << endl;
	cin >> n;
	while (n < 1) {
		cout << "������� ���������� �����" << endl;
		cin >> n;
	}
	cout << "������� n ������������ �����, ��� � ����� min � max" << endl;
	cin >> b;
	min = b;
	max = b;
	for (int i = 1; i < n; i++)
	{
		cin >> a;
		if (a < min) { min = a; }
		if (a > max) { max = a; }
	}
	cout << "Min =  " << min << endl;
	cout << "Max =  " << max << endl;
	int code;
	cout << "���� ������ ��������� � ����, ������� ������";
	code = _getch();
	if (code == 32) { main(); }
	else return 0;
}
int m2()
{
	int i;
	int a, b, n, a1, b1;
	int min;
	setlocale(LC_ALL, "Russian");
	cout << "������� ���������� ���������������" << endl;
	cin >> n;
	while (n < 1) {
		cout << "������� ���������� ���������������" << endl;
		cin >> n;
	}
	cout << "������� ����� ������ ��������������, ��� � ����� min �������" << endl;
	cin >> a1;
	while (a1 < 1) {
		cout << "������� �������������" << endl;
		cin >> a1;
	}
	cin >> b1;
	while (b1 < 1) {
		cout << "������� �������������" << endl;
		cin >> b1;
	}
	min = a1 * b1;
	for (i = 1; i < n; i++)
	{
		cin >> a;
		while (a < 1) {
			cout << "������� �������������" << endl;
			cin >> b1;
		}
		cin >> b;
		while (b < 1) {
			cout << "������� �������������" << endl;
			cin >> b1;
		}
		if (a * b < min) { min = a * b; }
	}
	cout << "Min ������� � " << i - 1 << " �������������� =  " << min << endl;
	int code;
	cout << "���� ������ ��������� � ����, ������� ������";
	code = _getch();
	if (code == 32) { main(); }
	else return 0;
}
int m3()
{
	int i;
	int a, b, n, a1, b1;
	int max;
	setlocale(LC_ALL, "Russian");
	cout << "������� ���������� ���������������" << endl;
	cin >> n;
	while (n < 1) {
		cout << "������� ���������� ���������������" << endl;
		cin >> n;
	}
	cout << "������� ����� ������ ��������������, ��� � ����� max ��������" << endl;
	cin >> a1;
	while (a1 < 1) {
		cout << "������� �������������" << endl;
		cin >> a1;
	}
	cin >> b1;
	while (b1 < 1) {
		cout << "������� �������������" << endl;
		cin >> b1;
	}
	max = (a1 + b1) / 2;
	for (i = 1; i < n; i++)
	{
		cin >> a;
		while (a < 1) {
			cout << "������� �������������" << endl;
			cin >> b1;
		}
		cin >> b;
		while (b < 1) {
			cout << "������� �������������" << endl;
			cin >> b1;
		}
		if ((a + b) / 2 < max) { max = (a + b) / 2; }
	}
	cout << "Max �������� � " << i - 1 << " �������������� =  " << max << endl;
	int code;
	cout << "���� ������ ��������� � ����, ������� ������";
	code = _getch();
	if (code == 32) { main(); }
	else return 0;
}
int m4()
{
	int a, b, n;
	int min, num;
	setlocale(LC_ALL, "Russian");
	cout << "������� ���������� �����" << endl;
	cin >> n;
	while (n < 1) {
		cout << "������� ���������� �����" << endl;
		cin >> n;
	}
	cout << "������� n ������������ �����, ��� � ����� min � ��� �����" << endl;
	cout << "[1]= ";
	cin >> b;
	min = b;
	num = 1;
	for (int i = 1; i < n; i++)
	{
		cout << "[" << i + 1 << "]= ";
		cin >> a;
		if (a < min) { min = a; num = i + 1; }

	}
	cout << "Min =  " << min << endl;
	cout << "���������� ����� -  " << num << endl;
	int code;
	cout << "���� ������ ��������� � ����, ������� ������";
	code = _getch();
	if (code == 32) { main(); }
	else return 0;
}
double PowerA3(double a)
{
	double b;
	b = a * a * a;

	return b;
}

int p1()
{
	double a;
	setlocale(LC_ALL, "Russian");
	cout << "������� �����, ������ ������� �������� ������ ������" << endl;
	for (int i = 0; i < 5; i++)
	{
		cin >> a;
		cout << "������ ������� ����� " << a << " = " << PowerA3(a) << endl;
	}

	int code;
	cout << "���� ������ ��������� � ����, ������� ������";
	code = _getch();
	if (code == 32) { main(); }
	else return 0;
}
double PowerA234(double a, int j)
{
	double b, c, d;
	if (j == 2) { b = a * a; return b; }
	if (j == 3) { c = a * a * a; return c; }
	if (j == 4) { d = a * a * a * a; return d; }
}

int p2()
{
	double a;		
	int j;
	setlocale(LC_ALL, "Russian");
	cout << "������� �����, ������, ������ � ��������� ������� �������� ������ ������" << endl;
	for (int i = 0; i < 5; i++)
	{
		j = 0;
		cin >> a;
		j = 2;
		cout << "������ ������� ����� " << a << " = " << PowerA234(a, j) << endl;
		j++;
		cout << "������ ������� ����� " << a << " = " << PowerA234(a, j) << endl;
		j++;
		cout << "��������� ������� ����� " << a << " = " << PowerA234(a, j) << endl;
	}

	int code;
	cout << "���� ������ ��������� � ����, ������� ������";
	code = _getch();
	if (code == 32) { main(); }
	else return 0;
}
double Mean(double x, double y, int j)
{
	double amean, gmean;

	if (j == 1) { amean = (x + y) / 2; return amean; }
	if (j == 2 && x > 0 && y > 0) { gmean = sqrt(x * y); return gmean; }
	if (j == 2 && x < 0 && y < 0) { gmean = sqrt(x * y); return gmean; }
	if (j == 2 && x < 0 && y > 0) { cout << "� �������������� ����� ��� �����" << endl; return 0; }
	if (j == 2 && x > 0 && y < 0) { cout << "� �������������� ����� ��� �����" << endl; return 0; }
}

int p3()
{
	double a, b;
	int j;
	setlocale(LC_ALL, "Russian");
	cout << "������� ������ ����� ����" << endl;
	cin >> a;
	for (int i = 0; i < 3; i++)
	{
		j = 0;
		cout << "������� ������ ����� ����" << endl;
		cin >> b;
		j = 1;
		cout << "������� �������������� = " << Mean(a, b, j) << endl;
		j++;
		if (Mean(a, b, j) != 0) {
			cout << "������� �������������� = " << Mean(a, b, j) << endl;
		}

	}

	int code;
	cout << "���� ������ ��������� � ����, ������� ������";
	code = _getch();
	if (code == 32) { main(); }
	else return 0;
}
double Triangle(double a, int j)
{
	double p, s;

	if (j == 1) { p = 3 * a; return p; }
	if (j == 2) { s = a * a * (sqrt(3) / 4); return s; }

}

int p4()
{
	double a;
	int j;
	setlocale(LC_ALL, "Russian");
	for (int i = 0; i < 3; i++)
	{
		cout << "������� ������� ��������������� ������������" << endl;
		cin >> a;
		while (a < 1) { cout << "������� �� ����� ���� 0 ��� �������������" << endl; cin >> a; }
		j = 1;
		cout << "�������� = " << Triangle(a, j) << endl;
		j++;
		cout << "������� = " << Triangle(a, j) << endl;
	}

	int code;
	cout << "���� ������ ��������� � ����, ������� ������";
	code = _getch();
	if (code == 32) { main(); }
	else return 0;
}
int sign(double x)
{
	if (x < 0) { return -1; }
	if (x == 0) { return 0; }
	if (x > 0) { return 1; }

}

int p16()
{
	double a, b;
	setlocale(LC_ALL, "Russian");
	cout << "������� �" << endl;
	cin >> a;
	cout << "������� �" << endl;
	cin >> b;
	cout << " Sign(A) + Sign(B)=" << sign(a) + sign(b) << endl;
	int code;
	cout << "���� ������ ��������� � ����, ������� ������";
	code = _getch();
	if (code == 32) { main(); }
	else return 0;
}
int rootscount(double a, double b, double c)
{
	double d;
	d = b * b - 4 * a * c;
	if (d < 0) { return -1; }
	if (d == 0) { return 0; }
	if (d > 0) { return 2; }

}

int p17()
{
	double a, b, c;
	setlocale(LC_ALL, "Russian");
	cout << "������� �" << endl;
	cin >> a;
	while (a == 0) { cout << "A �� ����� 0" << endl; cin >> a; }
	cout << "������� �" << endl;
	cin >> b;
	cout << "������� C" << endl;
	cin >> c;
	cout << " ���������� ������ (���� -1, �� �� ���)= " << rootscount(a, b, c) << endl;
	int code;
	cout << "���� ������ ��������� � ����, ������� ������";
	code = _getch();
	if (code == 32) { main(); }
	else return 0;
}
double circles(double r)
{
	double s = 3.14 * r * r;
	return s;
}

int p18()
{
	double r;
	setlocale(LC_ALL, "Russian");
	for (int i = 1; i < 4; i++)
	{cout << "������� ������ �����, ��� �� ������ ��� �������" << endl;
		cin >> r;
		while (r < 1) { cout << "������-�� �� ������ ������ ����" << endl; cin >> r; }
		cout << "������� " << i << " ����� =" << circles(r) << endl;
	}
	int code;
	cout << "���� ������ ��������� � ����, ������� ������";
	code = _getch();
	if (code == 32) { main(); }
	else return 0;
}
double rings(double r1, double r2)
{
	double s1 = 3.14 * r1 * r1;
	double s2 = 3.14 * r2 * r2;
	double sring = s1 - s2;
	return sring;
}

int p19()
{
	double r1, r2;
	setlocale(LC_ALL, "Russian");
	cout << "����� �� ������ ������ ������� ������" << endl;
	for (int i = 1; i < 4; i++)
	{
		cout << "������� ������ ������� �����" << endl;
		cin >> r1;
		while (r1 < 1) { cout << "������-�� �� ������ ������ ����" << endl; cin >> r1; }
		cout << "������� ������ ������� �����" << endl;
		cin >> r2;
		while (r2 < 1) { cout << "������-�� �� ������ ������ ����" << endl; cin >> r2; }
		if (r2 > r1) { swap(r1, r2); }
		cout << "������� " << i << " ������ =" << rings(r1, r2) << endl;
	}
	int code;
	cout << "���� ������ ��������� � ����, ������� ������";
	code = _getch();
	if (code == 32) { main(); }
	else return 0;
}
double Power2(double a, int n)
{
	double stepen = 1;
	if (n == 0) { stepen = 1; return stepen; }
	if (n > 0) { while (n > 0) { stepen = stepen * a; n--; }return stepen; }
	if (n < 0) { while (n < 0) { stepen = stepen * (1 / a); n++; }return stepen; }
}

int p38()
{
	int n, c;
	double a;
	setlocale(LC_ALL, "Russian");
	cout << "������� ������� ����� �� ������ �����" << endl;
	cin >> c;
	for (int i = 0; i < c; i++)
	{
		cout << "������� �����, ������� �������� ������ ������" << endl;
		cin >> a;
		cout << "������� �������" << endl;
		cin >> n;
		cout << "����� " << a << " � ������� " << n << " = " << Power2(a, n) << endl;
	}

	int code;
	cout << "���� ������ ��������� � ����, ������� ������";
	code = _getch();
	if (code == 32) { main(); }
	else return 0;
}
double Power1(double a, double b)
{
	double c;
	c = exp(b * (log(a)));
	return c;
}

int p37()
{
	int n;
	double a, b;
	setlocale(LC_ALL, "Russian");
	cout << "������� ������� ����� �� ������ �����" << endl;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "������� �����, ������� �������� ������ ������" << endl;
		cin >> a;
		cout << "������� �������" << endl;
		cin >> b;
		cout << "����� " << a << " � ������� " << b << " = " << Power1(a, b) << endl;
	}

	int code;
	cout << "���� ������ ��������� � ����, ������� ������";
	code = _getch();
	if (code == 32) { main(); }
	else return 0;
}
double power21(double a, double b)
{
	double stepen = 1;
	if (b == 0) { stepen = 1; return stepen; }
	if (b > 0) { while (b > 0) { stepen = stepen * a; b--; }return stepen; }
	if (b < 0) { while (b < 0) { stepen = stepen * (1 / a); b++; }return stepen; }
}

double power11(double a, double b)
{
	double stepen;
	stepen = exp(b * (log(a)));
	return stepen;
}
double power31(double a, double b, double d)
{
	if (d == 0) { return power21(a, b); }
	if (d != 0) { return power11(a, b); }

}
int p39()
{
	int n;
	double a, b;

	setlocale(LC_ALL, "Russian");
	cout << "������� ������� ����� �� ������ �����" << endl;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "������� �����, ������� �������� ������ ������" << endl;
		cin >> a;
		cout << "������� �������" << endl;
		cin >> b;
		double d = b;
		d = b - int(d);
		cout << "����� " << a << " � ������� " << b << " = " << power31(a, b, d) << endl;
	}

	int code;
	cout << "���� ������ ��������� � ����, ������� ������";
	code = _getch();
	if (code == 32) { main(); }
	else return 0;
}
double Exp1(double x, double e)
{
	double exp = 1, temp = 1, i = 1;
	do
	{
		temp *= x / i;
		exp += temp;
		i += 1;
	} while (abs(temp) > e);
	return exp;
}
int p40()
{
	double x, e;

	setlocale(LC_ALL, "Russian");
	cout << "������� �����" << endl;
	cin >> x;
	for (int i = 0; i < 6; i++)
	{
		cout << "������� �������" << endl;
		cin >> e;
		while (e < 0) { cout << "�������>0"; cin >> e; }
		cout << "���������� ��� ������ �������� = " << Exp1(x, e) << endl;
	}

	int code;
	cout << "���� ������ ��������� � ����, ������� ������";
	code = _getch();
	if (code == 32) { main(); }
	else return 0;
}