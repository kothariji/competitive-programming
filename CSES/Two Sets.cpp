#include <bits/stdc++.h>
using namespace std;
 
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
	long long n; cin >> n;
	bool taken[n+1];
	memset(taken, 0, sizeof(taken));
	long long sum = 0;
	long long wsum = n*(n+1)/2;
	long long tnum = wsum/2;
	if (wsum&1){
		cout << "NO";
		return 0;
	}
	for (long long i = n; i >= 1 && sum <= tnum; i--){
		if (1 <= tnum-sum && tnum-sum <= i){
			taken[wsum/2-sum]=1;
			break;
		} 
		taken[i] = 1;
		sum += i;
	}
	cout << "YES\n";
	vector<int> a, b;
	for (int i = 1; i <=n; i++){
		if (taken[i]){
			a.push_back(i);
		} else {
			b.push_back(i);
		}
	}
	cout << a.size() << "\n";
	for (int u : a){
		cout << u << ' ';
	}
	cout << "\n";
	cout << b.size() << "\n";
	for (int u : b){
		cout << u << ' ';
	}
	
}