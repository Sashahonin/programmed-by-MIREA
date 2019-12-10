#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main()
{
	ofstream fout;
	ifstream fin;
	string str;
	char char0;
	getline(cin, str);
	fout.open("Dz.txt");
	fout << str;
	fout.close();
	fin.open("Dz.txt");
	while (fin.get(char0))
		cout << char0;
	fin.close();
}