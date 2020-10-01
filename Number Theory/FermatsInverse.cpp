#include<bits/stdc++.h>
#define fastio 	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long int
using namespace std;

int power(int a, int n, int m) {
	int res = 1;
	while(n) {
		if(n & 1) {
			res = (res * a) % m;
			n--;
		} else {
			a = (a * a) % m;
			n /= 2;
		}
	}
	return res;
}

int32_t main() {
	int t, a, m;
	cin >> t;
	while(t--) {
		cin >> a >> m;
		cout << power(a, m - 2, m) << endl;
	}
	return 0;
}
