#include <iostream>
#include <string>

using namespace std;

int main()
{
	char Mas[30], char0;
	string str, strchar;
	cout << "enter ";
	cin >> str;
	strchar = "AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsTtUuVvWwXxYyZz ";
	for (int i = 0; i < 30; i++)
	{
		if (i > str.length())
			Mas[i] = 32;
		else
			Mas[i] = str[i];
	}

	for (int i = 0; i < 30; i++)
	{
		for (int j = 29; j >= i; j--)
		{
			if (strchar.find(Mas[j]) >= strchar.find(Mas[j + 1]))
			{
				char0 = Mas[j];
				Mas[j] = Mas[j + 1];
				Mas[j + 1] = char0;
			}
		}
	}
	for (int i = 0; i < 30; i++)
	{
		cout << Mas[i];
	}
}