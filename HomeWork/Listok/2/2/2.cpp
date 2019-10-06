// 2,2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <ctime>
using namespace std;

int main()
{
	int i;
	setlocale(LC_ALL, "Russian");
	srand(time(NULL));
	int mas[100];
	for (i = 0; i < 100; i++)
	{
		mas[i] = rand() % 999 + 100;
	}
	cout << "Массив первый" << endl;
	for (i = 0; i < 100; i++)
	{
		cout << mas[i] << " ";
		if (i % 15 == 0 && i > 0)
		{
			cout << endl;
		}
	}
	cout << "Конец первого массива" << endl;
	int k = 0;
	int z = 0;
	int mas2[100];
	int mas3[100];
	int num, num2, num3;
	for (i = 0; i < 100; i++)
	{
		num = mas[i] % 10;
		num2 = mas[i] % 100 / 10;
		num3 = mas[i] / 100;
		if ((num % 2 == 0) && (num2 % 2 == 0) && (num3 % 2 == 0))
		{
			mas2[k] = mas[i];
			k = k + 1;
		}
		if (num % 2 != 0 && num2 % 2 != 0 && num3 % 2 != 0)
		{
			mas3[z] = mas[i];
			z = z + 1;
		}



	}
	cout << "Второй массив" << endl;
	for (i = 0; i < 100; i++)
	{
		if (mas2[i] > 100 && mas2[i] != 0 && mas2[i] < 999)
		{
			cout << mas2[i] << "  ";
		}
		if (i % 15 == 0 && i > 0)
		{
			cout << endl;
		}
	}
	cout << "Конец второго массива" << endl;
	cout << "Третий массив" << endl;
	for (i = 0; i < 100; i++)
	{
		if (mas3[i] > 100 && mas3[i] != 0 && mas3[i] < 999)
		{
			cout << mas3[i] << "  ";
		}
		if (i % 15 == 0 && i > 0)
		{
			cout << ' ' << endl;
		}
	}
	cout << "Конец третьго массива" << endl;
}