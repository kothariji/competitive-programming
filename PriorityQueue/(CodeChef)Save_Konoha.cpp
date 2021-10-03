#include<bits/stdc++.h>
#include<iostream>
using namespace std;

typedef long long int ll;



void subMain(){
    ll n, z, a, cnt = 0;
    cin >> n >> z;
    priority_queue<ll> q;
    for(ll i = 0; i < n; i++){
        cin >> a;
        q.push(a);
    }
    while(z > 0 && q.top() > 0)
    {
        ll ans = q.top();
        q.pop();
        z -= ans;
        q.push(ans/2);
        cnt++;
    }
    if(z > 0) {cout << "Evacuate" << "\n";}
    else {cout << cnt << "\n";}
}

int32_t main(){

	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);


	ll t;
	cin >> t;
	while(t--){
        subMain();
	}
	//subMain();
    return 0;
}
