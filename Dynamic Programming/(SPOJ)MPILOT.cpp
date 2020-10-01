//Author: rishab_1128

#include<bits/stdc++.h>
using namespace std;

int dp[10005][5005];

int func(int n, int*cap, int*asst, int diff)
{
	if(dp[n][diff]!=-1)
		return dp[n][diff];

	if(n==0)
		return 0;
	
	if(diff==0)
	{
		//If diff=0 then this ele. has to become an asst. for the upcoming captains
		return dp[n][diff]=asst[0]+func(n-1,cap+1,asst+1,1);
	}
	if(diff==n)
	{
		//If diff=n then this ele. has to become a captain. for the extra assistants
		return dp[n][diff]=cap[0]+func(n-1,cap+1,asst+1,diff-1);
	}
	else
	{
		int op1=asst[0]+func(n-1,cap+1,asst+1,diff+1);
		int op2=cap[0]+func(n-1,cap+1,asst+1,diff-1);
		return dp[n][diff]=min(op1,op2);
	}
	
}

void solve()
{
	int n;
	cin>>n;

	int*cap=new int[n];
	int*asst=new int[n];

	for(int i=0; i<n; i++)
	{
		cin>>cap[i]>>asst[i];
	}

	memset(dp,-1,sizeof(dp));

	int ans = func(n,cap,asst,0);
	cout << ans;
	
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