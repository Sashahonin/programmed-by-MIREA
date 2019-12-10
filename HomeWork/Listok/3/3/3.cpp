
#include <iostream>
#include <ctime>
using namespace std;

int main()
{
	srand(time(NULL));
	setlocale(LC_ALL, "Russian");;
	int mas[2][5];
	for (int i = 0; i < 2; i++)
	{

			for (int j = 0; j < 5; j++)
			{
				cin >> mas[i][j];
			}
	}
	for (int i = 0; i < 2; i++)
	{

		for (int j = 0; j < 5; j++)
		{
			cout <<  mas[i][j];
		}
		cout << endl;

	}
	int masdop[25];
	int masdop2[25];
	int mas2[25];
	int z = 0;
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			int p = rand() % 4 + 1;
			cout << p << endl;
			switch (p)
			{
			case 1:
				mas2[z] = mas[0][i] + mas[1][j];
				masdop[z] = mas[0][i]* 10 + p;
				masdop2[z] = mas[1][j];
				mas2[z] = mas2[z]*10 + z;
				z = z + 1;
				cout<< mas[0][i] << " + " << mas[1][j] << " = " << mas[0][i] + mas[1][j] << endl;
				break;
			case 2:
				mas2[z] = mas[0][i] - mas[1][j];
				mas2[z] = mas2[z] * 10 + 2;
				masdop[z] = mas[0][i];
				masdop2[z] = mas[1][j];
				z = z + 1;
				cout << mas[0][i] << " - " << mas[1][j] << " = " << mas[0][i] - mas[1][j] << endl;
				break;
				
			case 3:
				masdop[z] = mas[0][i];
				masdop2[z] = mas[1][j];
				mas2[z] = mas[0][i] / mas[1][j];
				mas2[z] = mas2[z] * 10 + 3;
				cout << mas[0][i] << " / " << mas[1][j] << " = " << mas[0][i] / mas[1][j] << endl;
				z = z + 1;
				break;
			case 4  : 
				masdop[z] = mas[0][i];
				masdop2[z] = mas[1][j];
				mas2[z] = mas[0][i] * mas[1][j];
				mas2[z] = mas2[z] * 10 + 4;
				z = z + 1;
				cout << mas[0][i] << " * " << mas[1][j] << " = " << mas[0][i] * mas[1][j] << endl;
				break;
				

			}
		}
	}
	int n = 25;
	for (int i = 1; i < n ; ++i)
	{
		for (int r = 0; r < n - i; r++)
		{
			if (mas2[r] < mas2[r + 1])
			{
				int temp = mas2[r];
				mas2[r] = mas2[r + 1];
				mas2[r + 1] = temp;
			}
		}
	}
	cout << endl;
	for (int i = 1; i < n; ++i)
	{
		 z = abs(mas2[i] % 10);
		int d = abs(masdop[z] % 10);
		switch (d)
		{
		case 1:
			cout << masdop[z] << " + " << masdop2[z] << " = " << mas2[i]/ 10 << endl;
			break;

		case 2:
			cout << masdop[z] << " - " << masdop2[z] << " = " << mas2[i] / 10 << endl;
			break;

		case 3:
			cout << masdop[z] << " / " << masdop2[z] << " = " << mas2[i] / 10 << endl;
			break;

		case 4:
			cout << masdop[z] << " * " << masdop2[z] << " = " << mas2[i] / 10 << endl;
			break;
		}
	}
}