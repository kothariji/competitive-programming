#include<bits/stdc++.h>
#define fastio 	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long int
using namespace std;
int mod = 1e9 + 7;

bool ok = false;
int fact[1000001], cnt[1000001];
// This factors can be optimized using prime sieve method
// void factors(int x) {
// 	if (ok)
// 		return;
// 	for (int i = 1; i * i <= x; i++) {
// 		if (x % i == 0) {
// 			int a = i, b = x / i;
// 			if (a == b) {
// 				a = i;
// 				b = 1;
// 			}
// 			if (a != 1) {
// 				if (fact[a]) {
// 					ok = true;
// 					return;
// 				}
// 				fact[a] = true;
// 			}
// 			if (b != 1) {
// 				if (fact[b]) {
// 					ok = true;
// 					return;
// 				}
// 				fact[b] = true;
// 			}
// 		}
// 	}
// }

void sieve() {
	int n = 1000000;
	for (int i = 1; i <= n; i++)
		fact[i] = i;

	for (int i = 2; i <= n; i++) {
		if (fact[i] == i) {
			for (int j = i; j <= n; j += i)
				fact[j] = i;
		}
	}
}


int32_t main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	fastio;

	sieve();
	int n;
	cin >> n;
	int arr[n], maxx = 0;
	int gcd = 0;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
		maxx = max(arr[i], maxx);
		gcd = __gcd(gcd, arr[i]);
	}
	bool flag = false;
	for (int i = 0; i < n; i++) {
		set<int> cur;
		while (arr[i] != 1) {
			cur.insert(fact[arr[i]]);
			arr[i] /= fact[arr[i]];
		}
		for (auto c : cur) {
			cnt[c]++;
			if (cnt[c] > 1) {
				flag = true;
				break;
			}
		}
		if (flag)
			break;
	}
	if (!flag)
		cout << "pairwise coprime";
	else if (gcd == 1)
		cout << "setwise coprime";
	else
		cout << "not coprime";
	return 0;
}