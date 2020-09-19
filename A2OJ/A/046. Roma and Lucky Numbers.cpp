#include <bits/stdc++.h>
#define lli long long int
#define endl "\n"
using namespace std;
 
int main()
{
	int n,k;
	cin>>n>>k;
	vector <string> v1(n);
	for(int i=0; i<n; i++)
	{
		cin>>v1[i];
	}
	int count = 0;
	for(int i=0; i<n ;i++)
	{
		int luck = 0;
		for(int j = 0; j<v1[i].length(); j++)
		{
			if((v1[i][j] == '4') or (v1[i][j] == '7'))
				luck++;
		}
		if(luck <= k)
			count++;
	}
	cout<<count;
	return 0;
}