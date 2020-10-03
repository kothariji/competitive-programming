#include <iostream>
using namespace std;

int main() {
    int t, n, c;
	cin >> t;
	while (t--) {
		cin >> n;
		c = 0;
		while (n) {
			c = n%10==4 ? c+1 : c;
			n /= 10;
		}
		
		cout << c << endl;
	}
	return 0;
}
