#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,k;
	cin>>n>>k;
	int mini = n*2;
	int extra = k - mini;
	if(extra >= n)
		cout<<0;
	else
		cout<<n-extra;
	return 0;
}