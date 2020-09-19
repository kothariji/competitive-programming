#include <bits/stdc++.h>
#define lli long long int
#define endl "\n"
using namespace std;

int main()
{
	unordered_set <int> s1;
	int n;
	cin>>n;
	int a[n];
	for(int i=0; i<n; i++)
	{
		cin>>a[i];
		s1.insert(a[i]);
	}
	for(int i=0; i<n-1; i++)
	{
		for(int j= i+1; j<n; j++)
		{
			int sumans = a[i] + a[j];
			for(int k=0; k<n; k++)
			{
				if(a[k] == sumans)
				{
					cout<<k+1<<" "<<i+1<<" "<<j+1; 
					return 0;
				}
			}
		}
	}
	cout<<-1;
	return 0;
}