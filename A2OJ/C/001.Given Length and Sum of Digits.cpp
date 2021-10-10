#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define mp make_pair
#define itr(type) vector<type>::iterator
#define cons 1000000007ll
#define ll long long
#define ld long double
#define prec(t) cout<<setiosflags(ios::fixed), cout<<setprecision(t)
#define width(t,x) cout<<setw(t), cout<<setfill(x)
#define dbg1(x) {cout<<#x<<"="<<x<<"\n";}
#define dbg2(x) cout<<#x<<"="; for(auto z:x){cout<<z<<" ";} cout<<"\n";
#define dbg3(x) for(auto z:x){cout<<z.first<<" "<<z.second<<"\n";}
#define fin freopen("input.txt","r",stdin);
#define fout freopen("output.txt","w",stdout);
#define bin_str(size,n) bitset<size>(n).to_string();

bool comp(pair<int,int> a,pair<int,int> b)
{
	return (a.second<b.second);
}

int solve()
{
	ll r,g,b;
	ll ans=0;
	cin>>r>>g>>b;
	ans=(r+g+b)/3;
	ans=min(ans,r+g+b-max({r,g,b}));
	cout<<ans;
	return 0;	
}

int32_t main()
{
	int tt=1;
	//cin>>tt;
	while(tt--)
	{
		solve();
	}
	return 0;
}