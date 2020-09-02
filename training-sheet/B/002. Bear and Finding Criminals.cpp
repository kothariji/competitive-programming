#include <bits/stdc++.h>
#define lli long long int
#define endl "\n"
#define MAX  2005
using namespace std;

int main()
{
	int n, k;
	cin>>n>>k;
	k--;		//for 0 based indexing
	vector <int > v1(n);
	for(int i = 0; i<n; i++)
		cin>>v1[i];
	int total = v1[k];			//it will be either 0 or 1
	int left = k-1;
	int right = k+1;
	map <int , int> mp;

	for(; right < n; right++)
	{
		mp[abs(right-k)] = v1[right];
	}
	for(; left >=0; left--)
	{
		if(mp.find(abs(k-left)) != mp.end())
		{
			if(mp[abs(k-left)] >0 && v1[left] > 0)
			{
				mp[abs(k-left)] = 2;
			}
			else
				mp[abs(k-left)] = 0;	
		}
		else		
			mp[abs(k-left)] = v1[left];
	}
	for(auto c: mp)
		total += c.second;
	cout<<total;
}
