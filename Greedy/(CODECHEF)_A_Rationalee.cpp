/*
    Author-Yogesh kansal
*/

#include <bits/stdc++.h>
#include<vector>
#include<algorithm>
using namespace std;
#define M 1000000007LL
#define mod 998244253LL
#define ll long long int
#define vi vector<int>
#define vii vector<vector<int>>
#define pii pair<int, int>
#define vpii vector<pair<int,int>>
#define f first
#define s second
#define pb push_back
#define eb emplace_back
#define pob pop_back
#define mp make_pair
#define all(p) p.begin(),p.end()
ll gcd(ll a,ll b){return b?gcd(b,a%b):a;}
int main() {
	//clock_t t=clock();
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int t;
	cin>>t;
	while(t--)
	{
		ll a,b,n,m;
		cin>>a>>b>>n>>m;
		if(a+b<n+m) cout<<"NO\n";
		else if(a>b)
		{
			if(b>=m)
			cout<<"YES\n";
			else if(a-n>=m&&(a-n)<=b) cout<<"YES\n";
			else
				cout<<"NO\n";	
			
		}
		else{
			if(a>=m)
			cout<<"YES\n";
		
			else if((b-n)>=m&&(b-n)<=a) cout<<"YES\n";
			else
				cout<<"NO\n";
			
		}
		
	}
	return 0;
}
