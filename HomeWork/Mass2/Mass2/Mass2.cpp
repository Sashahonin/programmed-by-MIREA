#include <iostream>
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
		if (Sad[i] % 2 == 0) {
			Saad[i] = Sad[i];
			Saaad[i] = 0;
		}
		if (Sad[i] % 2 == 1) {
			Saad[i] = 0;
			Saaad[i] = Sad[i];
		}
	}
	//----------Р’С‹РІРѕРґ СЃРµС‚РєРё--------------
	for (int i = 0; i < 100; i++) {
		if (i % 15 == 0) {
			std::cout << "\n";
		}
		std::cout << Sad[i] << "\t";
	}
	std::cout << "\n";
	for (int i = 0; i < 100; i++) {
		if (F % 16 == 0) {
			std::cout << "\n";
			F++;
		}
		if (Saad[i] != 0) {
			std::cout << Saad[i] << "\t";
			F++;
		}
	}
	std::cout << "\n";
	F = 0;
	for (int i = 0; i < 100; i++) {
		if (F % 16 == 0) {
			std::cout << "\n";
			F++;
		}
		if (Saaad[i] != 0) {
			std::cout << Saaad[i] << "\t";
			F++;
		}
	}
	return 0;
}