#include <bits/stdc++.h>
# define lli long long int
using namespace std;
int main()
{
string s,s1;
cin>>s>>s1;
if(s==s1)
{
	cout<<"-1"<<endl;
	}
	else
	{
		cout<<max(s.length(),s1.length());
	}	
	
	
return 0;	
}
