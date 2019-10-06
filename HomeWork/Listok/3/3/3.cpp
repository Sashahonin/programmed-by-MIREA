
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
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			int p = rand() % 4 + 1;
			switch (p)
			{
			case 1:
				
					cout<< mas[0][i] << " + " << mas[1][j] << " = " << mas[0][i] + mas[1][j] << endl;

				
			case 2:
				
					cout << mas[0][i] << " - " << mas[1][j] << " = " << mas[0][i] - mas[1][j] << endl;

				
			case 3:
				
				cout << mas[0][i] << " / " << mas[1][j] << " = " << mas[0][i] / mas[1][j] << endl;

				
			case 4  : 
				
					cout << mas[0][i] << " * " << mas[1][j] << " = " << mas[0][i] * mas[1][j] << endl;
					
				

			}
		}
	}
	
}
