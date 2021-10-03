#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	long long int sum = 0;
	for(int i = 1;i<=n;i++)
	{
		int sqr = sqrt(i);
		for(int j = 1; j<= sqr; j++)
			if(i % j ==0)
				sum++;
	}
	cout<<sum;
	return 0;
}
