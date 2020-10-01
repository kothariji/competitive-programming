#include<bits/stdc++.h>
using namespace std;
int main() {
	long long k, t = 1;
	string s = "codeforces";
	int i = 0, a[15];
	cin >> k;
	for (int i = 0; i <= 9; i++) a[i] = 1;
	while (t < k) {
		t /= a[i % 10];
		a[i % 10]++;
		t *= a[i % 10];
		i++;
	}
	for (int i = 0; i <= 9; i++)
		for (int j = 1; j <= a[i]; j++) cout << s[i];
}