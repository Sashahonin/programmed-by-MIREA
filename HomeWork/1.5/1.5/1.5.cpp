

#include <iostream>
using namespace std;

int main()
{
	int b;
	cout << "enter 0 if it’s light outside,enter 1 if the lamp is on or 2 if  the curtains are apart ";
	cin >> b;
	if (b == 0 || b == 1 || b == 2)
	{
		cout << "the room is light";
	}
	else
	{
		cout << "It's dark in the room";
	}
}
