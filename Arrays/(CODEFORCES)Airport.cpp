#include <bits/stdc++.h>
#define ll long long
using namespace std;
const int N = 1e7 + 10;
int arr[N];
int main()
{ 
	int n,m; cin>>n>>m;
	int arr[m],copy[m],max=0;
	for (int i = 0; i < m; ++i)
	{
		cin>>arr[i];
		copy[i]=arr[i];
	}
	for (int i = 0; i < n; ++i)
	{
		sort(arr, arr+m);
		max += arr[m-1];
		arr[m-1] = arr[m-1]-1;
	}
	sort(copy, copy+m);
	int psum[m];
	for (int i = 0; i < m; ++i)
	{
		psum[i] = 0;
	}
	psum[0]= copy[0]*(copy[0]+1)/2;
	for (int i = 1; i < m; ++i)
	{
		psum[i] = psum[i-1] + copy[i]*(copy[i]+1)/2; 
	}
	int sum=0,index;
	for (int i = 0; i < m; ++i)
	{
		sum = sum + copy[i];
		if(sum>=n)
		{
			index = i;
			break;
		}
	}
	int rem = n - sum + copy[index];
	int min = psum[index] - (copy[index]-rem)*(copy[index]-rem+1)/2;
	cout<<max<<" "<<min; 
}
