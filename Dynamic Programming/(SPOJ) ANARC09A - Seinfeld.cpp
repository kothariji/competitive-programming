#include <bits/stdc++.h>
#define lli long long int
#define endl "\n"
using namespace std;

int main()
{
	int t=0;
	while(1)
	{
		t++;
		string s;
		cin>>s;
		if(s[0] == '-')
			break;
		int open = 0, close = 0,ans = 0;
		for(int i=0; i<s.length(); i++)
		{
			if(s[i] == '{')
			{
				open++;
			}
			if(s[i] == '}')
			{
				if(open > 0)
					open--;
				else
				{
					ans++;
					open++;
				}
			}
		}
		if(open != 0)
			ans += open/2;
		cout<<t<<". "<<ans<<endl;
	}
	return 0;
}