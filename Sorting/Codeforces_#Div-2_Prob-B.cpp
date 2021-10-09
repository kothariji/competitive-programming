#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define mp make_pair
#define itr(type) vector<type>::iterator
#define cons 1000000007
#define ll long long
#define ld long double
#define prec(t) cout<<setiosflags(ios::fixed), cout<<setprecision(t)
#define width(t,x) cout<<setw(t), cout<<setfill(x)
#define dbg1(x) {cout<<#x<<"="<<x<<"\n";}
#define dbg2(x) for(auto z:x){cout<<z<<" ";} cout<<"\n";
#define dbg3(x) for(auto z:x){cout<<z.first<<" "<<z.second<<"\n";}
#define fin freopen("input.txt","r",stdin);
#define fout freopen("output.txt","w",stdout);

bool comp(pair<int,int> a,pair<int,int> b)
{
	return (a.second<b.second);
}

int solve()
{
	int n,k;
	cin>>n>>k;
	vector<pair<int,int>> v;
	for (int i = 0; i < n; ++i)
	{
		int x;
		cin>>x;
		v.pb(mp(x,i));
	}	
	sort(v.begin(),v.end());
	int i=1;
	int count=n;
	while(i<n)
	{
		if (v[i].second-v[i-1].second==1)
		{
			while(v[i].second-v[i].second==1)
			{
				i++;
			}
			count--;
		}
		i++;
	}
	if (count==1)
	{
		count=0;
	}
	if (count<=k)
	{
		cout<<"Yes\n";
	}
	else
		cout<<"No\n";
	return 0;
}

int main()
{
	int tt=1;
	cin>>tt;
	while(tt--)
	{
		solve();
	}
	return 0;
}