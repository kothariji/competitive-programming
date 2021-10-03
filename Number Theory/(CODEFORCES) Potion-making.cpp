#include<bits/stdc++.h>
using namespace std;

int main() {
	int k; cin >> k;
	while (k--) {
		int e; cin >> e;
		cout << 100 / gcd(100, e) << endl;
	}
	return 0;
}
