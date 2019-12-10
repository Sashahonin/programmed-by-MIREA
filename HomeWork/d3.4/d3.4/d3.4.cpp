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
	fout.open("3.4.txt");
	fout << str;
	fout.close();
	fin.open("3.4.txt");
	while (fin.get(char0))
	{
		if (char0 > 47 && char0 < 58)
			cout << char0;
		else
			cout << " ";
	}
}