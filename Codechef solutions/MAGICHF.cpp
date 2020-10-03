#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
#define vi vector<ll>
#define pp pair<ll,ll>
#define mp make_pair
#define PI acos(-1.0)
#define all(v) v.begin(),v.end()
#define pb push_back
#define INF 1e18
#define MOD 1000000007
using namespace std;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,x,s;
        cin>>n>>x>>s;
        ll b1,b2;
	for(ll i=0;i<s;i++)
	{
		cin>>b1>>b2;
		if(b1==x)
			x=b2;
		else if(b2==x)
			x=b1;
	}
	cout<<x<<endl;
    }
}