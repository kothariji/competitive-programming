#include <bits/stdc++.h>
#define lli long long int
#define endl "\n"
using namespace std;

int main()
{
	int n,m,data, minwa = INT_MAX,maxac = INT_MIN,minac = INT_MAX;
	cin>>n>>m;
	priority_queue<int> pq;
	for(int i=0; i<n; i++)
	{
		cin>>data;
		if(data < minac)
			minac = data;
		if(data > maxac)
			maxac = data;
	}
	maxac = max(maxac, minac*2);
	for(int i=0; i<m; i++)
	{
		cin>>data;
		if(data < minwa)
			minwa = data;
	}
	if(maxac < minwa)
		cout<<maxac;
	else
		cout<<-1;
	return 0;
}