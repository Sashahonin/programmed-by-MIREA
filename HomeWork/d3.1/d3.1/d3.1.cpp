#include <iostream>

using namespace std;

int main()
{
	float S, n, p, m;
	cout << " S, n, p: ";
	cin >> S >> n >> p;
	if ((S > 0) && (n > 0) && (p > 0))
	{
		cout << (m = (S * 0.01 * p * pow(1 + 0.01 * p, n)) / (12 * (pow(1 + 0.01 * p, n) - 1)));
	}
	else
		cout << "error";
}