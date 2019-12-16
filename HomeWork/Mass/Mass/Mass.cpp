#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
	int a[300];
	int counting;
	counting = 0;

	for (int i = 0; i < 300; ++i)
	{
		a[i] = rand() % 299 + 1;
		cout << a[i] << " \t";
		counting = counting + 1;

		if (counting == 10) {
			cout << endl << endl;
			counting = 0;
		}

	}

	counting = 0;
	for (int i = 0; i < 300; ++i) {
		if (a[i] == i) {
			cout << "index " << i << " has a number " << a[i] << endl;
			counting = counting + 1;
		}



	}
	if (counting > 0) {
		cout << endl << "there are only " << counting << " numbers where index value and number value are the same";
	}

	else {
		cout << " I couldn't find any numbers with the same value as its index";
	}
}