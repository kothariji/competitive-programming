#include <bits/stdc++.h>
#define lli long long int
#define endl "\n"
using namespace std;

int main()
{
	string s;
	cin>>s;
	if(s[0] == '-')
	{
		if(s.length() == 2)
			cout<<0;
		else
		{
			int del,len = s.length()-1;
			char rem;
			if(s[len] > s[len-1])
			{
				del = len;
				rem = s[len-1];
			}
			else
			{
				del = len-1;
				rem = s[len];
			}
			if((s.length() == 3) and (rem =='0'))
			{
				cout<<0;
			}
			else
				for(int i=0;i<= len; i++)
					if(i != del)
						cout<<s[i];
		}
	}
	else
	{
		cout<<s;
	}
	
	return 0;
}