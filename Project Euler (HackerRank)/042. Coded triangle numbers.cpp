#include <iostream>
#include <fstream>
#include <math.h>

using namespace std;

int main()
{
	ifstream fin("words.txt");
	int nTri = 0;
	char s[20];
	while (fin.getline(s, 20, ',')) {
		int sum = 0;
		for (int c = 0; s[c]; c++) {
			if (s[c] == '"') continue;
			sum += s[c] - 'A' + 1;
		}
		double n = sqrt(2*sum + 1./4) - 1./2;
		if (n == (int)n) nTri++;
	}
	cout << nTri << endl;
}
