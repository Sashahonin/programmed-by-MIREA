#include <iostream>
#include <cmath>
#include <fstream>
using namespace std;



int main() {
	setlocale(0, "");
	while (j != -1 && a[j] >= a[j + 1])
		j--;
	if (j == -1)
		return false;

	int k = n - 1;
	while (a[j] >= a[k])
		k--;
	swap(a[j], a[k]);
	int l = j + 1, r = n - 1;
	while (l < r)
		swap(a[l++], a[r--]);
	return true;
	}
}