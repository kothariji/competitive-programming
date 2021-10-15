//https://codeforces.com/contest/1581/problem/B


#include <bits/stdc++.h>
using namespace std;

int T, n, m, k; 
 
signed main () {
	cin >> T;
	while (T--) {
		cin >> n >> m >> k, --k;
		if(m < n - 1) { puts("NO"); continue ; }
		if(m > 1ll * n * (n - 1) / 2) { puts("NO"); continue ; }
		if(k <= 0) puts("NO");
		else if(k == 1) {
			if(n == 1) puts("YES");
			else puts("NO"); 
		}
		else if(k == 2) {
			if(m == 1ll * n * (n - 1) / 2) puts("YES");
			else puts("NO"); 
		}
		else if(k >= 3) puts("YES"); 
	}
	return 0;
}
