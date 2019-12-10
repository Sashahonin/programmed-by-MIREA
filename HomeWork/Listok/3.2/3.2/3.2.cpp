

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
			cout << mas[i][j];
		}
		cout << endl;

	}
	char mass2[25];
	int mass3[25];
	int z = 0;
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			int p = rand() % 4 + 1;
			switch(p)
			{

			  case 1:
				  cout << mas[0][i] << " + " << mas[1][j] << " = " << mas[0][i] + mas[1][j] << endl;
				  mass3[z] = mas[0][i] + mas[1][j];
				  z = z + 1;
			  case 2:
				  cout << mas[0][i] << " - " << mas[1][j] << " = " << mas[0][i] - mas[1][j] << endl;
				  mass3[z] = mas[0][i] - mas[1][j];
				  z = z + 1;
			  case 3:
				  cout << mas[0][i] << " * " << mas[1][j] << " = " << mas[0][i] * mas[1][j] << endl;
				  mass3[z] = mas[0][i] * mas[1][j];
				  z = z + 1;
			  case 4:
				  cout << mas[0][i] << " / " << mas[1][j] << " = " << mas[0][i] / mas[1][j] << endl;
				  mass3[z] = mas[0][i] / mas[1][j];
				  mass2[z] =  (char)mas[0][i] / mas[1][j];
				  z = z + 1;


			}
		}
	}
}


