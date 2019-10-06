
#include <iostream>
#include <math.h>
#include <cmath>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int  z;
	cin >> z;
	switch (z)
	{
	case 1:
		int  n;
		double r, m, p, res, s;
		cout << "Введите S  ";
		cin >> s;
		cout << "Введите P  ";
		cin >> p;
		cout << "Введите N  ";
		cin >> n;
		r = p / 100;
		m = s * r * pow(1 + r, n) / 12 * (pow(1 + r, n) - 1);
		cout << m  << "   "  << r;
		break;
	case 2 :
		
		cout << "Введите S  ";
		cin >> s;
		cout << "Введите M  ";
		cin >> m;
		cout << "Введите N  ";
		cin >> n;
		res = m * n;
		res = res / s;
		res = (res - 1) * 100; 
		cout << "P = " << res ;
		break;
	}
    
}   