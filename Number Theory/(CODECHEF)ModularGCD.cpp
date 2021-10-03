#include<bits/stdc++.h>
#define fastio 	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long int
using namespace std;
int mod = 1e9 + 7;

// https://www.codechef.com/problems/GCDMOD
// As here we have to find gcd of a ^ n + b ^ n and |a - b| so its good to find candidates for second than first as a - b would have less values to check 
// calculating a ^ n + b ^ n can be huge but here we are using the number we got from candidates of a - b as mod for a ^ n and b ^ n that would reduce the calculations

int power(int a, int n, int m) {
	int res = 1;
	while(n) {
		if(n & 1) {
			res = ((res % m) * (a % m)) % m;
			n--;
		} else {
			a = ((a % m) * (a % m)) % m;
			n /= 2;
		}
	}
	return res;
}

int gcd(int a, int b, int n) {
	// a == b then a - b == 0 so we are adding power of a and b 
	if(a == b)
		return (power(a, n, mod) + power(b, n, mod)) % mod;
		
	// here we will find candidates of a - b till sqrt(a - b) and we will choose maximum candidate that divides a - b
	int num = a - b;
	int candidate = 1;
	for(int i = 1; i * i <= num; i++) {
		if(num % i == 0) {
			int temp = (power(a, n, i) + power(b, n, i)) % i;
			if(temp == 0) 
				candidate = max(candidate, i);
			temp = (power(a, n, num / i) + power(b, n, num / i)) % (num / i);
			if(temp == 0)
				candidate = max(candidate, num / i);
		}
	}
	return candidate % mod;
}


int32_t main() {
	int t, a, b, n;
	cin >> t;
	while(t--) {
		cin >> a >> b >> n;
		cout << gcd(a, b, n) << endl;
	}
	return 0;
}
