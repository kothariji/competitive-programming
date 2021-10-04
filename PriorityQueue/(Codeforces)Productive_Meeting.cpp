#include <bits/stdc++.h>
#define int long long int
using namespace std;

int32_t main()
{
	ios::sync_with_stdio(0);cin.tie(0);
    int n,i,t,x;
	cin>>t;
	while (t--)
	{
		cin>>n;
		priority_queue<pair<int,int>> p;
		vector<pair<int,int>> ans;
		for (i=1;i<=n;i++)
		{
			cin>>x;
			if (x) p.push(make_pair(x,i));
		}
		while (p.size()>1)
		{
			auto u=p.top();p.pop();
			auto v=p.top();p.pop();
			ans.emplace_back(u.second,v.second);
			if (--u.first) p.push(u);
			if (--v.first) p.push(v);
		}
		cout<<ans.size()<<'\n';
		for (auto it:ans) cout<<it.first<<' '<<it.second<<'\n';
	}
}
