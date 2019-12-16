
#include <iostream>
using namespace std;

int main()
{
	double a, b, c, x, y, d;
	cout << "enter a,b,c" << endl;
	cin >> a >> b >> c;
	d = b * b - 4 * a * c;
	if (d > 0)
	{
		x = (-b) + sqrt(d);
		y = (-b) - sqrt(d);
		cout << x << endl << y << endl;
	}
	else { cout << "error"; }
}
