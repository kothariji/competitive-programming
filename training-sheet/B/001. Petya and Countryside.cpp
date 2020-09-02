#include <bits/stdc++.h>
#define lli long long int
#define endl "\n"
#define MAX  2005
using namespace std;

int main()
{
	int n;
	cin>>n;
	vector <int > v1(n);
	for(int i = 0; i<n; i++)
		cin>>v1[i];
	lli maxcount = -1;
	for(int i = 0; i<n; i++)
	{
		int ht = v1[i];
		lli count = 1;
		int cur = ht;
		int right = i+1;
		int left = i-1;
		while((right < n) && (v1[right] <= cur) )
		{
			count++;
			cur = v1[right];
			right++;

		}
		cur = ht;
		while((left >= 0) && (v1[left] <= cur) )
		{
			count++;
			cur = v1[left];
			left--;
		}
		maxcount = max(maxcount, count);
	}
	cout<<maxcount;
}