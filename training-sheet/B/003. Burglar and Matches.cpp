#include <bits/stdc++.h>
#define lli long long int
#define endl "\n"
#define MAX  2005
using namespace std;

int main()
{
	lli n, m,a ,b, ans = 0;
	cin>>n>>m;
	priority_queue < pair<lli, lli> > pq1;
	for(int i =0; i<m; i++)
	{	
		cin>>a>>b;
		pq1.push({b, a});
	}
	while(1)
	{
		pair<lli, lli> temp = pq1.top();
		lli nov = min(n, temp.second);
		n -= nov;
		ans += nov*temp.first;
		if(n== 0)
			break;
		pq1.pop();
		if(pq1.empty())
			break;
	}
	cout<<ans;
}
