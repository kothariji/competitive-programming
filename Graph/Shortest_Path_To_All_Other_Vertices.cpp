/*
 * Problem Statement
 * You are given 2 integers , n is the number of vertices, m is the number of edges. You'll also be given ,x, y, z, where x and y represents an edge from a vertex x to a vertex y and z respresents the weight of that edge.
 * We need to find the shortest distance from Source vertex (vertex number 1) to all other vertices.
*/
#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
#include<string>
#include<set>
#include<map>
#include<stack>
#include<queue>
#include<unordered_set>
#include<unordered_map>
using namespace std;
#define ll long long int
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define FIO ios::sync_with_stdio(0);
ll gcd(ll a,ll b){while(a&&b)a>b?a%=b:b%=a;return a+b;}
ll lcm(ll a,ll b){return (max(a,b)/gcd(a,b))*min(a,b);}
ll power(ll a,ll b)
{
	ll res=1;
	while(b!=0)
	{
		if(b%2!=0)
		{
			res=(res*a)%1000000007;
			b--;
		}
		else
		{
			a=(a*a)%1000000007;
			b/=2;
		}
	}
	return res;
}
int main()
{
	FIO;
	ll i,j,k,c=0,n,m,d=0,l,r,x,y,z,w,e=0;
	cin>>n>>m;
	vector<pair<ll,ll>> a[n+1];
	pair<ll,ll> b;
	vector<ll> dis(n+1,pow(10,9)),vis(n+1,0);
	vector<pair<ll,ll>> v;
	map<ll,ll> mp1,mp2;
	set<ll> sp;
	stack<ll> st;
	queue<ll> q;
	multiset<pair<ll,ll>> s;
	for(i=0;i<m;i++)
	{
		cin>>x>>y>>z;
		a[x].pb(mp(y,z));
	}
	dis[1]=0;
	s.insert(mp(0,1));
	while(!s.empty())
	{
		b=*s.begin();
		s.erase(s.begin());
		if(vis[b.ss]==1)
			continue;
		vis[b.ss]=1;
		for(i=0;i<a[b.ss].size();i++)
		{
			if(dis[a[b.ss][i].ff]>dis[b.ss]+a[b.ss][i].ss)
			{
				dis[a[b.ss][i].ff]=dis[b.ss]+a[b.ss][i].ss;
				s.insert(mp(dis[a[b.ss][i].ff],a[b.ss][i].ff));
			}
		}
	}
	for(i=2;i<n+1;i++)
	{
		cout<<dis[i]<<" ";
	}
	return 0;
}
