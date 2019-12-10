#include <iostream>

using namespace std;

int sign(float x)
{
	if (x > 0)
		return 1;
	if (x < 0)
		return -1;
	return 0;
}

int main()
{
	float x;
	cout << "enter: ";
	cin >> x;
	cout << sign(x);
}