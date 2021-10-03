#include<bits/stdc++.h>
#define MAX 1005
using namespace std;

vector < vector<int> > dp(MAX, vector<int> (MAX, -1));

int knapsack(vector <int> weight, vector <int> value, int maxweight, int index)
{
	//base condition
	if( (index < 0) || (maxweight <= 0) )
		return 0;
	if(dp[index][maxweight] == -1)
	{
		if(weight[index] <= maxweight)
			dp[index][maxweight] =  max(value[index] + knapsack(weight, value, maxweight - weight[index], index-1), knapsack(weight, value, maxweight, index-1));
		
		else
			dp[index][maxweight] = knapsack(weight, value, maxweight, index-1);
	}
	return dp[index][maxweight];
}



int main()
{
	int n;
	cout<<"Enter the number of items: ";
	cin>>n;
	vector <int> weight(n), value(n);

	cout<<"enter weights: "<<endl;
	for(int  i=0; i<n; i++)
		cin>>weight[i];
	cout<<"enter values: "<<endl;
	for(int  i=0; i<n; i++)
		cin>>value[i];

	
	int maxweight;

	cout<<"Enter maximum capacity of knapsack: ";
	cin>>maxweight;

	cout<<knapsack(weight, value, maxweight, n-1);
}
