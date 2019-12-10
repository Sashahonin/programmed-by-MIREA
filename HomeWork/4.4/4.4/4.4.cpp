#include <iostream>

using namespace std;

int main()
{
	for (int i = 0; i < 14; i++)
	{
		for (int j = 0; j < 30; j++)
		{
			if (i > 0 && i < 7 && j < 8)
				cout << "*";
			else
				cout << "_";
		}
		cout << endl;
	}
	cout << endl << endl << endl;
}