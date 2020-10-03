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
		ll n,m,x,y,p=1,k=1,p1,k1,p2,k2;
		cin>>n>>m>>x>>y;
		k1=1+((n-1)/x)*x;
		p1=1+((m-1)/y)*y;
		k2=k1;p2=p1;
		if(k1-x>1)
		k2=k1-x;
		if(p1-y>1)
		p2=p1-y;
		if(((k==n)&&(p==m))||((k==n)&&(p1==m))||((k==n)&&(p2==m))||((k1==n)&&(p==m))||((k1==n)&&(p1==m))||((k1==n)&&(p2==m))||((k2==n)&&(p==m))||((k2==n)&&(p1==m))||((k2==n)&&(p2==m)))
			cout<<"Chefirnemo";
		else if(((k==n-1)&&(p==m-1))||((k==n-1)&&(p1==m-1))||((k==n-1)&&(p2==m-1))||((k1==n-1)&&(p==m-1))||((k1==n-1)&&(p1==m-1))||((k1==n-1)&&(p2==m-1))||((k2==n-1)&&(p==m-1))||((k2==n-1)&&(p1==m-1))||((k2==n-1)&&(p2==m-1)))
				cout<<"Chefirnemo";
		else
			cout<<"Pofik";
		cout<<endl;
	}
}