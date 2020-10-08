#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define mp make_pair
#define sync ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define MOD 1000000007

#define ff first
#define ss second

#define ll  long long int
#define pii pair<ll, ll>
#define vi  vector<ll>

void solve(){
	ll n;
	cin>>n;
	vector<vi> v(n,vi(n));
	ll odd=1;
	ll even=2;
	bool flag=1;
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < n; ++j) {
			if(flag){
				v[i][j] = odd;
				odd+=2;
			} else {
				v[i][j] = even;
				even+=2;
			}
			flag = !flag;
		}
		if(n%2==0)
			flag=!flag;
	}

	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < n; ++j) {
			cout << v[i][j] << " ";
		}
		cout<<endl;
	}
}

int main() { 
	sync;
	int testCases;
	cin >> testCases;
	while (testCases--) {
		solve();
	}

	return 0;
}
