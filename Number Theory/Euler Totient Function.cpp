#include <bits/stdc++.h>
using namespace std;

/***********Method 1 - Using Prime Factorization**************/
/**********************O(sqrt(N))*****************************/
int etf(int n)
{
	int res = n;
	for(int i =2; i*i <=n ; i++)
	{
		if(n%i==0)
		{
			res /= i;
			res *=(i-1);
			while(n%i ==0)
				n /=i;
		}
	}
	if(n > 1)
	{
		res /= n;
		res *= (n-1);
	}
	return res;
}

/******************Method 2 - Using Sieve*********************/
/**********************O(sqrt(N))*****************************/
int euler[1000001];

void etfsieve()
{
	for(int i=1; i<1000001; i++)
		euler[i] = i;
	for(int i=2; i<1000001; i++)
	{
		if(euler[i] == i)
		{
			for(int j =i; j<1000001; j += i)
			{
				euler[j] /= i;
				euler[j] *= (i-1);
			}
		}
	}
}





int main()
{
	etfsieve();
	for(int i=1; i<501; i++)
		cout<<etf(i)<<endl;
	
	for(int i=1; i<501; i++)
		cout<<i<<": "<<euler[i]<<endl;
}