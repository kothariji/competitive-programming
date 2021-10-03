//Author: rishab1128

#include<bits/stdc++.h>
using namespace std;

#define FF         first
#define SS         second
#define PB         push_back
#define PF         push_front
#define MP         make_pair

pair<int,int> knapsack2(int* weights, int* values, int n, int maxWeight)
{
	int DP[n+1][maxWeight+1];

	//Filling 0th row and 0th col
	for(int w=0; w<=maxWeight; w++)
	{
		DP[0][w]=0;
	}
	for(int i=0; i<=n; i++)
	{
		DP[i][0]=0;
	}

	int Weights[n+1],Values[n+1],j=1,k=1;
	for(int i=0; i<n; i++)
	{
		Weights[j]=weights[i];
		j++;
	}

	for(int i=0; i<n; i++)
	{
		Values[k]=values[i];
		k++;
	}

	for(int i=1; i<=n; i++)
	{
		for(int w=1; w<=maxWeight; w++)
		{
			if(Weights[i]<=w)			
				DP[i][w]=max(DP[i-1][w],DP[i-1][w-Weights[i]]+Values[i]);			
			else
				DP[i][w]=DP[i-1][w];
		}
	}

	int maxvalue=DP[n][maxWeight];
	int minweight=0;
	for(int i=0;i<=maxWeight;i++)
	{
		if(DP[n][i]==maxvalue)
		{
			minweight=i;
			break;
		}
	}

	return {minweight,maxvalue};
}

void solve()
{
	while(1)
	{
		int budget,n;
		cin>>budget>>n;

		if(budget==0&&n==0)
			return;

		int*fee=new int[n];
		int*fun=new int[n];

		for(int i=0; i<n; i++)
		{
			cin>>fee[i]>>fun[i];
		}

		cout<<knapsack2(fee,fun,n,budget).FF<<" "<<knapsack2(fee,fun,n,budget).SS<<endl;

	}

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