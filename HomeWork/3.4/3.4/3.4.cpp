
#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main()
{
	char masiv[8] = { 'f', 'а', ' t', 'е', 's', 's', 'a', '\0'};
	setlocale(LC_ALL, "Russian");
	string path = "text3.3.txt";
	int a;
	ifstream F;
	F.open(path);
	if (!F.is_open())
	{
		cout << "Ошибка открытия файла " << endl;
	}
	else
	{
		cout << "Файл открыт" << endl;
		F >> a;
		cout << a;
	}
	for (int i = 0; i < 8; i++)
	{
		cout << masiv[i];
	}
}
