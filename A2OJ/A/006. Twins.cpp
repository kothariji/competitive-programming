#include <bits/stdc++.h>
#define lli long long int
#define endl "\n"
using namespace std;
 
int main()
{
	int n;
	cin>>n;
	int a[n];
	priority_queue<int> pq;
	int total_sum = 0, sum1 = 0,counti = 0;
	for(int i=0; i<n; i++)
	{
		cin>>a[i];
		total_sum += a[i];
		pq.push(a[i]);
	}
	
	while(sum1 <= total_sum)
	{
		sum1 += pq.top();
		total_sum -= pq.top();
		pq.pop();
		counti++;
		if(pq.empty())
			break;			
	}
	cout<<counti;
	return 0;
}
