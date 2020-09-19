#include <bits/stdc++.h>
#define lli long long int
#define endl "\n"
using namespace std;

int main()
{
	int n, m;
	cin>>n>>m;
	int a[n][m],flag =0;
	string s[n];
	for(int i=0; i<n; i++)
		cin>>s[i];
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<m; j++)
		{
			if(s[i][j] == '.')
				a[i][j] = 0;
			else
				a[i][j]= -1;
		}
	}
	for(int i=0; i<n; i++)
	{
		flag =0;
		for(int j=0; j<m; j++)
		{
			if(a[i][j] == -1)
			{
				flag =1;
				break;
			}
		}
		if(flag == 0)
		{
			for(int j=0; j<m; j++)
			{
				a[i][j] = 1;
			}
		}
	}
	for(int j=0; j<m; j++)
	{
		flag =0;
		for(int i=0; i<n; i++)
		{
			if(a[i][j] == -1)
			{
				flag =1;
				break;
			}
		}
		if(flag == 0)
		{
			for(int i=0; i<n; i++)
			{
				a[i][j] = 1;
			}
		}
	}
	int count = 0;
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<m; j++)
		{
			if((a[i][j] == 1))
				count++;
		}
	}
	cout<<count;
	return 0;
}