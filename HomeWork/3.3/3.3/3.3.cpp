// 3.3.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	string path = "text3.3.txt";
	int a;
	ifstream F;
	F.open(path);
	if(!F.is_open())
	{
		cout << "Ошибка открытия файла " << endl;
	}
	else
	{
		cout << "Файл открыт" << endl;
		F >> a;
		cout << a;
	}
}
