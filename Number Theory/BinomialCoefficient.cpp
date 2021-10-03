#include<bits/stdc++.h>
#define fastio 	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long int
using namespace std;
int fact[1000001];
int mod = 1e9 + 7;

// Calculate C(n, k) % mod where mod > n
// formula is n! / k! * (n - k)! but here we are using mod and precalculating factorial

int power(int a, int n) {
	int res = 1;
	while(n) {
		if(n & 1)
			res = (res * a) % mod, n--;
		else
			a = (a * a) % mod, n /= 2;
	}
	return res;
}

int C(int n, int k) {
	if(k > n)
		return 0;
	int res = fact[n];
	// here instead of dividing we use inverse
	res = (res * power(fact[k], mod - 2)) % mod;
	res = (res * power(fact[n - k], mod - 2)) % mod;
	return res;
}

int32_t main() {
	int t, n, k;
	cin >> t;
	fact[0] = fact[1] = 1;
	
	for(int i = 2; i <= 1000000; i++)
		fact[i] = (fact[i - 1] * i) % mod;
		
	while(t--) {
		cin >> n >> k;
		cout << C(n, k) << endl;
	}
	return 0;
}
