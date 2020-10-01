#include<bits/stdc++.h>
#define fastio 	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long int
using namespace std;

int power(int a, int n, int p) {
	int res = 1;
	while(n) {
		if(n & 1) {
			res = (res * a) % p;
			n--;
		} else {
			a = (a * a) % p;
			n /= 2;
		}
	}
	return res;
}

int32_t main() {
	int n;
	cin >> n;
	// 8 is congruence to 1378
	cout << power(8, n, 10);
	return 0;
}
