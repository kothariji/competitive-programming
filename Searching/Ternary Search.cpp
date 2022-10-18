
#include <bits/stdc++.h>
using namespace std;


int ternarySearch(int l, int r, int key, int ar[])
{
	if (r >= l) {

		int mid11 = l + (r - l) / 3;
		int mid22 = r - (r - l) / 3;

		
		if (ar[mid11] == key) {
			return mid11;
		}
		if (ar[mid22] == key) {
			return mid22;
		}

		
		if (key < ar[mid11]) {

			
			return ternarySearch(l, mid11 - 1, key, ar);
		}
		else if (key > ar[mid22]) {

			
			return ternarySearch(mid22 + 1, r, key, ar);
		}
		else {

		
			return ternarySearch(mid11 + 1, mid22 - 1, key, ar);
		}
	}
	return -1;
}


int main()
{
	int l1, r1, p1, key;


	int ar[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

	l1 = 0;


	r1 = 9;

	key = 5;

	p1 = ternarySearch(l1, r1, key, ar);

	cout << "Index of " << key
		<< " is " << p1 << endl;

	key = 50;

	p1 = ternarySearch(l1, r1, key, ar);

	cout << "Index of " << key
		<< " is " << p1 << endl;
}

