#include <bits/stdc++.h>
#define lli long long int
#define endl "\n"
using namespace std;
 
int main()
{
 	int n;
 	cin>>n;
 	int a[n];
 	for(int i=0; i<n; i++)
 		cin>>a[i];
 	int sum[n] = {0};
 	int data;
 	for(int i=0 ; i< n; i++)
 	{
 		for(int j=0; j<a[i]; j++)
 		{
 			cin>>data;
 			sum[i] += (data*5);
 		}
 		sum[i] += a[i]*15;
 	}
 	sort(sum, sum+n);
 	cout<<sum[0];

}