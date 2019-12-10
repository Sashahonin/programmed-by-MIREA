#include <iostream>

using namespace std;

int main()
{
	string str;
	cout << "enter roman number";
	cin >> str;
	int i = 0;
	int j = str.length();
	int summa = 0;
	while (i < j && str[i] == 77/* M */)
	{
		summa += 1000;
		i++;
	}
	if (str[i] == 67/* C */ && str[i + 1] == 77/* M */ && i < j)
	{
		summa += 900;
		i += 2;
	}
	if (str[i] == 68/* D */ && i < j)
	{
		summa += 500;
		i++;
	}
	if (str[i] == 67/* C */ && str[i + 1] == 68/* D */ && i < j)
	{
		summa += 400;
		i += 2;
	}
	while (i < j && str[i] == 67/* C */)
	{
		summa += 100;
		i++;
	}
	if (str[i] == 88/* X */ && str[i + 1] == 67/* C */ && i < j)
	{
		summa += 90;
		i += 2;
	}
	if (str[i] == 76/* L */ && i < j)
	{
		summa += 50;
		i++;
	}
	if (str[i] == 88/* X */ && str[i + 1] == 76/* L */ && i < j)
	{
		summa += 40;
		i += 2;
	}
	while (i < j && str[i] == 88/* X */)
	{
		summa += 10;
		i++;
	}
	if (str[i] == 73/* I */ && str[i + 1] == 88/* X */ && i < j)
	{
		summa += 9;
		i += 2;
	}
	if (str[i] == 86/* V */ && i < j)
	{
		summa += 5;
		i++;
	}
	if (str[i] == 73/* I */ && str[i + 1] == 86/* V */ && i < j)
	{
		summa += 4;
		i += 2;
	}
	while (i < j && str[i] == 73/* I */)
	{
		summa += 1;
		i++;
	}
	cout << summa;
}