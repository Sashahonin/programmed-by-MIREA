#include <iostream>

using namespace std;

float rectangle(float a, float b)
{
	if (a > 0 && b > 0)
		return  a * b;
	else
		return -1;
}

float triangle(float a, float b, float c)
{
	float p = (a + b + c) / 2;
	if (a > 0 && a < b + c && b>0 && b < a + c && c>0 && c < a + b)
		return (pow(p * (p - a) * (p - b) * (p - c), 0.5));
	else
		return -1;
}

float circle(float r)
{
	if (r > 0)
		return (3.14 * r * r);
	else
		return -1;
}

void main()
{
	float a, b, c, p;
	int A8;
	cout << "enter 1 for rectangle\n";
	cout << "enter 2 for triangle\n";
	cout << "enter 3 for circle\n";
	cout << "your enter: ";
	cin >> A8;
	switch (A8)
	{
	case 1:
		cout << endl << "enter a b :";
		cin >> a >> b;
		a = rectangle(a, b);
		if (a != -1)
			cout << "area = " << a;
		else
			cout << "Error";
		break;
	case 2:
		cout << endl << "enter a b c :";
		cin >> a >> b >> c;
		a = triangle(a, b, c);
		if (a != -1)
			cout << "area = " << a;
		else
			cout << "error";
		break;
	case 3:
		cout << endl << "enter R :";
		cin >> b;
		a = circle(b);
		if (a != -1)
			cout << "area = " << a;
		else
			cout << "error";
		break;
	}
}