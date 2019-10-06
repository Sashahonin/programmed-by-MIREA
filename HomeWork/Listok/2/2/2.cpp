
#include <iostream>
#include <ctime>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	srand(time(NULL));
	int mas[100];
	for (int i = 0; i < 100; i++)
	{
		mas[i] = rand() % 999 + 100;
	}
	cout << "Массив первый" << endl;
	for (int i = 0; i < 100; i++)
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

	for (int i = 0; i < 100; i++)
	{
		
		if (mas[i]% 10 % 2 == 0 $$ mas[i] % 10 % 2 == 0 && mas[i] % 10 % 2 == 0)
		{
			mas2[k] = mas[i];
			k = k + 1;
		}
		if( (mas[i] % 10 % 2 != 0) $$( mas[i] % 10 % 2 != 0) && (mas[i] % 10 % 2 != 0))
		{
			mas3[z] = mas[i];
			z = z + 1;
		}
		


	}
	cout << "Второй массив" << endl;
	for (int i = 0; i < 100; i++)
	{
		if (mas3[i] > 100 && mas3[i] != 0 && mas3[i] < 999)
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
	for (int i = 0; i < 100; i++)
	{
		if (mas3[i] > 100 && mas3[i] != 0 && mas3[i] < 999) 
		{
			cout << mas3[i] << "  ";
		}
		if (i % 15 == 0 && i > 0)
		{
			cout << endl;
		}
	}
	cout << "Конец третьго массива" << endl;
}
