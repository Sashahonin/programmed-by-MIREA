#include <iostream>
#include <fstream>
#include <cmath> 
#include <string>
#include <cstdlib>
#include <ctime>
//using namespace std;

int main()
{
	setlocale(LC_CTYPE, "rus");
	srand(unsigned(time(0)));
	int Sad[100], Saad[100], Saaad[100];
	int F = 0;
	bool flag;
	int In;
	//----------Р“РµРЅРµСЂР°С†РёСЏ----------------
	for (int i = 0; i < 100; i++) {
		//flag = 0;
		Sad[i] = rand() % 899 + 100;
		//for (int j = 0; j < i; j++) {
		//	if (Sad[j] == In) {
		//		flag = 1;
		//	}
		//}
		//if (flag == 0) {
		//	Sad[i] = In;
		//	i++;
		//}
	}
	//----------РћСЃРЅРѕРІРЅРѕР№ РєРѕРґ-------------
	for (int i = 0; i < 100; i++) {
#include <iostream>
#include <fstream>
#include <cmath> 
#include <string>
#include <cstdlib>
#include <ctime>
		//using namespace std;

		int main()
		{
			setlocale(LC_CTYPE, "rus");
			srand(unsigned(time(0)));
			int Sad[2][5];
			int Result[25][3];
			int F = 0;
			bool flag;
			int In;
			//----------Р“РµРЅРµСЂР°С†РёСЏ----------------
			for (int i = 0; i < 2; i++) {
				for (int j = 0; j < 5; j++) {
					printf("Р’РІРµРґРёС‚Рµ СЃРёРјРІРѕР» РїРѕ Р°РґСЂРµСЃСѓ [%i] [%i]\n", i, j);
					std::cin >> Sad[i][j];
				}
			}
			//----------РћСЃРЅРѕРІРЅРѕР№ РєРѕРґ-------------
			int Op;
			for (int i = 0; i < 25; i++) {
				Op = rand() % 4;
				if (Op == 0) {
					Result[i][0] = Sad[0][i / 5] + Sad[1][i % 5];
					Result[i][1] = i;
					Result[i][2] = Op;
				}
				if (Op == 1) {
					Result[i][0] = Sad[0][i / 5] - Sad[1][i % 5];
					Result[i][1] = i;
					Result[i][2] = Op;
				}
				if (Op == 2) {
					Result[i][0] = Sad[0][i / 5] * Sad[1][i % 5];
					Result[i][1] = i;
					Result[i][2] = Op;
				}
				if (Op == 3) {
					Result[i][0] = Sad[0][i / 5] / Sad[1][i % 5];
					Result[i][1] = i;
					Result[i][2] = Op;
				}
			}
			for (int j = 0; j < 24; j++) for (int i = 0; i < 24; i++) {
				if (Result[i][0] < Result[i + 1][0]) {
					std::swap(Result[i][0], Result[i + 1][0]);
					std::swap(Result[i][1], Result[i + 1][1]);
					std::swap(Result[i][2], Result[i + 1][2]);
				}
			}
			//----------Р’С‹РІРѕРґ СЃРµС‚РєРё--------------
			int X, Y;
			for (int i = 0; i < 25; i++) {
				if (Result[i][2] == 0) {
					X = Result[i][1] / 5;
					Y = Result[i][1] % 5;
					printf("%i + %i = %i \n", Sad[0][X], Sad[1][Y], Result[i][0]);
				}
				if (Result[i][2] == 1) {
					X = Result[i][1] / 5;
					Y = Result[i][1] % 5;
					printf("%i - %i = %i \n", Sad[0][X], Sad[1][Y], Result[i][0]);
				}
				if (Result[i][2] == 2) {
					X = Result[i][1] / 5;
					Y = Result[i][1] % 5;
					printf("%i * %i = %i \n", Sad[0][X], Sad[1][Y], Result[i][0]);
				}
				if (Result[i][2] == 3) {
					X = Result[i][1] / 5;
					Y = Result[i][1] % 5;
					printf("%i / %i = %i \n", Sad[0][X], Sad[1][Y], Result[i][0]);
				}
			}
			return 0;
		}