#include <iostream>
#include <time.h>

using namespace std;

int main()
{
	srand(time(0));
	int si, m, i, c;
	cout << "enter m, i, c: ";
	cin >> m >> i >> c;
	si = rand() % c;
	for (int j = 0; j < 0; j++)
	{
		si = (si * m + i) % c;
	}
	cout << si;
}