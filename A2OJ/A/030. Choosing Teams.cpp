#include <bits/stdc++.h>
#define lli long long int
#define endl "\n"
using namespace std;

int main()
{
	int n,k;
	cin>>n>>k;
	vector <int> v1;
	int count = 0;
	for(int i=0; i<n; i++)
	{
		int data;
		cin>>data;
		if((data+k) < 6){
			v1.push_back(data);
			count++;
		}
	}
	cout<<count/3;
	
	
	return 0;
}