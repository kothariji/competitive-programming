#include<bits/stdc++.h>
using namespace std;

using ll = long long int;
using ull = unsigned long long int;

#define MOD 1000000007

ll pwr(ll a, ll b){
    ll res=1;
    while(b != 0){
        if(b&1)
        res=res*a%MOD;
        b >>= 1;
        a=a*a%MOD;       
    }
    return res;
}

ll los(ll n ,ll r){
    ll res=1;
    ll k = min(r,n-r);
    for(int i=0;i<k;i++) {
		res=(res%MOD*(n-i)%MOD)%MOD;
		res = (res%MOD*(pwr(i+1,MOD-2)%MOD))%MOD;
	}
    return res%MOD;   
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	//**********************

	ll T, N, maxfreq, ans, maxno;
	cin >> T;
	while(T--) {
		cin >> N;
		ll A[N];
		for(ll i = 0; i < N; ++i)
			cin >> A[i];
		maxno = -1;
		for(ll i = 0; i < N; ++i) {
			if(A[i] > maxno)
				maxno = A[i];
		}
		maxfreq = 0;
		for(ll i = 0; i < N; ++i) {
			if(maxno == A[i])
				maxfreq++;
		}
		if(N == 1)
			ans = 2;
		else {
			if(maxfreq&1) {
				ans = pwr(2, N)%MOD;
			}
			else {
				ans = pwr(2,N)%MOD;
				ans -= ((pwr(2,N-maxfreq)%MOD)*los(maxfreq,maxfreq>>1)%MOD)%MOD;
			}
			if(ans < 0)
				ans = ans+MOD;
		}
		cout << ans % MOD << "\n";
	}

	return 0;
}