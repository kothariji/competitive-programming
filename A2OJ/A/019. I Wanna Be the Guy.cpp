#include <bits/stdc++.h>
#define lli long long int
#define endl "\n"
using namespace std;

int main()
{
	set <int> s1;
	int n,p,data;
	cin>>n;
	cin>>p;
	while(p--)
	{
		cin>>data;
		s1.insert(data);
	}
	cin>>p;
	while(p--)
	{
		cin>>data;
		s1.insert(data);
	}	
	if(s1.size() == n)
		cout<<"I become the guy.";
	else
		cout<<"Oh, my keyboard!";
	return 0;
}