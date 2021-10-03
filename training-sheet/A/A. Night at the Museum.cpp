#include <bits/stdc++.h>
# define lli long long int
using namespace std;
int main()
{
	string s;
	cin>>s;
	int sum=0;
	if(abs(s[0]-'a')>13)
		{
				sum+=26-abs(s[0]-'a');
		}
		else
		{
		sum+=abs(s[0]-'a');	
		}
	for(int i=0;i<s.length()-1;i++)
	{
		if(abs(s[i]-s[i+1])>13)
		{
				sum+=26-abs(s[i]-s[i+1]);
		}
		else
		{
			sum+=abs(s[i]-s[i+1]);
		}
	}
	cout<<sum;
	
	
return 0;	
}
