#include<iostream>
using namespace std;

int Nod(int a, int b)
{
	int i;
	while (a != b)
		if (a >= b) a = a - b;
		else b = b - a;
	return a;
}

int main()
{
	setlocale(LC_ALL, "RUS");
	int a, b;

	cout << "Введите первое число: ";
	cin >> a;
	cout << "Введите второе число: ";
	cin >> b;
	cout << "НОД = " << Nod(a, b) << endl;

	return(0);
}