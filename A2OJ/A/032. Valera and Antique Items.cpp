#include <bits/stdc++.h>
#define lli long long int
#define endl "\n"
using namespace std;

int main()
{
	lli n,v,cost,ans = 0;
	cin>>n>>v;
	vector <int> v1;
	int k,flag;
	for(int i =0; i<n; i++)
	{
		cin>>k;
		flag = 0;
		for(int j = 1; j<= k; j++)
		{
			cin>>cost;
			if(cost < v)
				flag = 1;
		}
		if(flag == 1)
		{
			v1.push_back(i+1);
			ans += 1;
		}
	} 
	cout<<ans<<endl;
	for(auto c: v1)
		cout<<c<<" ";

	return 0;
}