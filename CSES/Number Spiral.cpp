#include<bits/stdc++.h>
#include<iostream>
using namespace std;
 
#define mod 10000000007
#define all(x) (x).begin(), (x).end()
typedef long long ll;
 
void subMain(){  
    ll r, c;
	cin >> r;
	cin >> c;
	ll ans = 0;
	ll z = max(r, c);
	ll z2 = (z - 1) * (z - 1);
	if (z % 2 == 0)
	{
		if (z == c)
		{
			ans = z2 + r;
		}
		else
		{
			ans = z2 + 2 * z - c;
		}
	}
	else {
		if (r == z)
		{
			ans = z2 + c;
		}
		else
		{
			ans = z2 + 2 * z - r;
		}
	}
	cout << ans << endl;
}
 
 
int32_t main(){
 
 
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
 
	ll t;
	cin >> t;
	while(t-- > 0){
	    subMain();
	}
	//subMain();
	return 0;
}