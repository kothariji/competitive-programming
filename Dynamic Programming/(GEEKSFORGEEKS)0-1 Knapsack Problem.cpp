#include<bits/stdc++.h>
#define lli long long int
#define endl "\n"
#define MAX 1005
using namespace std;

int dp[1002][1002];

int knapsack(int weight[], int value[], int w, int index)
{
    if((index < 0) || (w == 0))
        return 0;
    
    if(dp[index][w] != -1)
    	return dp[index][w];
   
    if(weight[index] <= w)
        return dp[index][w] = max((value[index] + knapsack(weight, value, w - weight[index], index-1)),knapsack(weight, value, w, index-1));
    else 
        return dp[index][w] = knapsack(weight, value, w, index-1);
}

int main()
 {
	int t;
	cin>>t;
	while(t--)
	{   
	    memset(dp, -1, sizeof(dp));
	    int n, w;
	    cin>>n>>w;
	    int weight[n], value[n];
	    for(int i =0; i<n; i++)
	        cin>>value[i];
	    for(int i =0; i<n; i++)
	        cin>>weight[i];
	    cout<<knapsack(weight, value, w, n-1)<<endl;
	}
	return 0;
}
