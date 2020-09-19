#include <bits/stdc++.h>
#define lli long long int
#define endl "\n"
using namespace std;

int main()
{
	int n,nos;
	cin>>n>>nos;
	string s[n];
	char maxi[nos];
	memset(maxi, '0', sizeof(maxi));
	for(int i=0;i<n;i++)
		cin>>s[i];

	for(int j=0; j<nos; j++)
	{
		for(int i=0; i<n; i++)
		{
			if(maxi[j] < s[i][j])
				maxi[j] = s[i][j];
		}
	}

	int count = 0;
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<nos; j++)
		{
			if(s[i][j] == maxi[j])
			{
				count++;
				break;
			}
		}
	}
	cout<<count;
	return 0; 
}