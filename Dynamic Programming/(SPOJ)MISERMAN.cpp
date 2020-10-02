//Author: rishab_1128

#include<bits/stdc++.h>
using namespace std;

#define Min(x,y,z)  min(x,min(y,z))

void solve()
{
	int n,m;
	cin>>n>>m;

	int**fares=new int*[n];
	for(int i=0; i<n; i++)
	{
		fares[i]=new int[m];
		for(int j=0; j<m; j++)
			cin>>fares[i][j];
	}

	int**dp=new int*[n];
	for(int i=0; i<n; i++)
	{
		dp[i]=new int[m];
	}

	//Initialising the 1st row of the DP
	for(int j=0; j<m; j++)
	{
		dp[0][j]=fares[0][j];
	}

	for(int i=1; i<n; i++)
	{
		for(int j=0; j<m; j++)
		{
			if(j==0)
				dp[i][j]=min(dp[i-1][j],dp[i-1][j+1])+fares[i][j];
			else if(j==m-1)
				dp[i][j]=min(dp[i-1][j],dp[i-1][j-1])+fares[i][j];
			else
				dp[i][j]=Min(dp[i-1][j],dp[i-1][j+1],dp[i-1][j-1])+fares[i][j];
		}
	}

	int ans=INT_MAX;
	for(int j=0; j<m; j++)
	{
		ans=min(ans,dp[n-1][j]);
	}

	//Deleting the fares and DP array
	for(int i=0; i<n; i++)
	{
		delete[]fares[i];
		delete[]dp[i];
	}
	delete[]fares;
	delete[]dp;

	cout<<ans<<endl;

}

int main()
{
	std::ios::sync_with_stdio(false);

	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	int t=1;
	//cin>>t;
	while(t--)
	{
		solve();
	}
    return 0;
}