#include <bits/stdc++.h>
#define lli long long int
#define endl "\n"
using namespace std;

int main()
{
	int n,x,l,r;
	cin>>n>>x;
	vector <int> v1(100005, -1);
	int count = 0;
	for(int i=0; i<n; i++)
	{
		cin>>l>>r;
		if(l==r)
			v1[l] = 2;
		else
		{
			v1[l] = 0;
			v1[r] = 1;
		}
			
	}
	int initial = 1;
	for(int i=1; i<100005; i++)
	{
		if(v1[i] == 0)
		{
			count += (i-initial)%x;
			int temp = i+1;
			while(v1[temp] != 1)
				temp++;
			count += (temp - i + 1);
			initial = temp + 1;
		}
		else if(v1[i] == 2)
		{
			count += (i-initial)%x;
			count += 1;
			initial = i + 1;	
		}

	}
	cout<<count;
	return 0;
}