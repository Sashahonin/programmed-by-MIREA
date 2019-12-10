#include <iostream>

using namespace std;

int main()
{
	float S, n, p, m, summa;
	cout << " S  m    n: ";
	cin >> S >> m >> n;
	summa = 12 * m * n;
	if ((S > 0) && (m > 0) && (n > 0) && (summa >= S))
	{
		p = 0.1;
		while ((S * 0.01 * p * pow(1 + 0.01 * p, n) / (12 * (pow(1 + 0.01 * p, n) - 1))) < m)
			p += 0.1;
		cout << p;
	}
	else
		cout << "error";
}