#include<bits/stdc++.h>
#define lli long long int
using namespace std;

int main()
{
	int n,m,k,data;
	cin>>n>>m>>k;
	priority_queue<int> pq1;
	for(int i=0; i<n; i++)
	{
		cin>>data;
		pq1.push(data);
	}
	if(m <= k)
		cout<<0;
	else
	{
		int count  = 0;
		while(1)
		{
			k--;
			int maxi = pq1.top();
			pq1.pop();
			count++;
			k = k + maxi;
			if(m -k < 1)
			{
				cout<<count;
				return 0;
			}
			if(k == 0 || pq1.empty())
			{
				cout<<-1;
				return 0;
			}
		}
	}
}