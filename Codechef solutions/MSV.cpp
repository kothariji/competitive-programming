#include<bits/stdc++.h>
using namespace std;
#define ll long long int

unordered_map<int,int> mp;
void factor(int x)
{
	for(int i=1;i<=sqrt(x);i++)
	{
		if( x%i == 0)
		{
			if( x/i == i )
				mp[i]++;
			else
			{
				mp[i]++;
				mp[x/i]++;
			}
		}
	}
}

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n;
		cin >> n ;
		int a[n];
		for(int i=0;i<n;i++)
			cin >> a[i];
		int star[n];
		star[0] = 0;
		for(int i=0;i<n;i++)
		{
			
			if( mp.find(a[i])!=mp.end() )
				star[i] = mp[a[i]];
			else
				star[i] = 0;
			
			factor(a[i]);
			// cout << a[i] << ":-> " << endl;
			// for(auto it=mp.begin();it!=mp.end();it++)
			// 	cout << it->first << ": " << it->second <<  endl;
			// cout << endl;
		}
		// cout << "star values:-> ";
		// for(int i=0;i<n;i++)
		// {
		// 	cout << star[i] << " ";
		// }
		int ind;
		int M=0;
		for(int i=0;i<n;i++)
		{
			if(star[i] > M)
			{
				M = star[i];
				ind = i;
			}
		}
		cout << M << endl;
		mp.clear();
	}
}