#include <bits/stdc++.h>
# define lli long long int
using namespace std;
int main()
{
	int A[4];
	for(int i=0;i<4;i++)
	{
		cin>>A[i];
	}
	string s;
	cin>>s;
	int sum=0;
	for(int i=0;i<s.length();i++)
	{
			sum+=A[s[i]-'0'-1];
	}
	cout<<sum;
return 0;	
}
