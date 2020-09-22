#include <bits/stdc++.h>
#define lli long long int
#define endl "\n"
using namespace std;

lli dp[1000005];

lli maxans(string s, int i, int n)
{
	//cout<<"i: "<<i<<endl;
	if(dp[i] != -1)
		return dp[i];
	if((i) >= n)
	{
		//cout<<"1 for i: "<<i<<" is=  "<<1<<endl;
		dp[i] = 1;
		return dp[i];
	}
	if(s[i] == '0')
		return 0;  
	if(((i+1) < n) && ((int)stoi(s.substr(i,2)) < 27))
	{
		dp[i] = maxans(s, i+1,n) + maxans(s, i+2,n); 
		//cout<<"ans for i: "<<i<<" is=  "<<ans<<endl;
		return dp[i];
	}

	dp[i] = maxans(s, i+1,n);
	return dp[i];
}


int main()
{
	while(1)
	{
		string s;
		cin>>s;
		memset(dp,-1, sizeof(dp));
		if(s == "0")
			break;
		cout<<maxans(s,0,s.length())<<endl;
	}
}