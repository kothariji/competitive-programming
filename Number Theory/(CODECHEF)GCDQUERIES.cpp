#include<bits/stdc++.h>
#define fastio 	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long int
using namespace std;
#define N 101
int arr[100001], pref[100001], suff[100001];

// https://www.codechef.com/problems/GCDQ
// Exclude L and R part from gcd and calculate gcd for rest array
// Idea is to prepare prefix and suffix array of gcds and take gcd of pref[l - 1] and suff[r + 1]

int mod = 1e9 + 7;

int gcd(int a, int b) {
	while(b) {
		int temp = b;
		b = a % b;
		a = temp;
	}
	return a;
}
	
int32_t main() {
	int t, q, l, r, n;
	cin >> t;
	while(t--) {
		cin >> n >> q;
		for(int i = 1; i <= n; i++)	
			cin >> arr[i];
			
		pref[0] = 0;
		for(int i = 1; i <= n; i++)
			pref[i] = gcd(pref[i - 1], arr[i]);
		
		suff[n + 1] = 0;
		for(int i = n; i >= 1; i--)
			suff[i] = gcd(suff[i + 1], arr[i]);
		
		while(q--) {
			cin >> l >> r;
			cout << gcd(pref[l - 1], suff[r + 1]) << endl;
		}
	}
	return 0;
}
