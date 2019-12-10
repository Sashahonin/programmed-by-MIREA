#include <iostream>

using namespace std;

void max(float x0, float x1, float x2)
{
	if (x0 > x1 && x0 > x2)
		cout << 1;
	else if (x0<x1 && x1>x2)
		cout << 2;
	else if (x0 < x2 && x1 < x2)
		cout << 3;
	else if (x0 == x1 && x1 > x2)
		cout << "1 and 2";
	else if (x0 < x1 && x1 == x2)
		cout << "2 and 3";
	else if (x0 == x2 && x1 < x2)
		cout << "1 and 3";
	else if (x0 == x1 && x1 == x2)
		cout << "1 and 2 and 3";
}

void min(float x0, float x1, float x2)
{
	if (x0 < x1 && x0 < x2)
		cout << 1;
	else if (x0 > x1 && x1 < x2)
		cout << 2;
	else if (x0 > x2 && x1 > x2)
		cout << 3;
	else if (x0 == x1 && x1 < x2)
		cout << "1 and 2";
	else if (x0 > x1 && x1 == x2)
		cout << "2 and 3";
	else if (x0 == x2 && x1 > x2)
		cout << "1 and 3";
	else if (x0 == x1 && x1 == x2)
		cout << "1 and 2 and 3";
}

int main()
{
	float A[3][4], B[4][2], C[3][2];
	int i, j, k;
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 2; j++)
		{
			C[i][j] = 0;
		}
	}
	for (i = 0; i < 3; i++)
	{
		cout << endl << "enter quantity for seler " << i + 1 << ": ";
		for (j = 0; j < 4; j++)
		{
			cin >> A[i][j];
		}
	}
	for (i = 0; i < 4; i++)
	{
		cout << endl << "enter price and commission for product " << i + 1 << ": ";
		cin >> B[i][0] >> B[i][1];
	}
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 4; j++)
		{
			for (k = 0; k < 2; k++)
			{
				C[i][k] += A[i][j] * B[j][k];
			}
		}
	}
	cout << endl << "max money get seller " << endl;
	max(C[0][0], C[1][0], C[2][0]);
	cout << endl;
	cout << "min money get seller " << endl;
	min(C[0][0], C[1][0], C[2][0]);
	cout << "max commission's money get seller " << endl;
	max(C[0][1], C[1][1], C[2][1]);
	cout << "min commission's money get seller " << endl;
	min(C[0][1], C[1][1], C[2][1]);
	cout << "summa = " << C[0][0] + C[1][0] + C[2][0] << endl;
	cout << "summa commission's money = " << C[0][1] + C[1][1] + C[2][1];
}