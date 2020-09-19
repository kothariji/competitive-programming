#include <bits/stdc++.h>
#define lli long long int
#define endl "\n"
using namespace std;

int main()
{
	int n, st, l, r,ct = 0;
	int fst = 0, fl = 0, fr = 0;
	string s;
	cin>>n>>s;
	for(int i=0; i<s.length(); i++)
	{
		if((s[i] == 'L') and (fl == 0))
		{
			l = i;
			fl =1;
		}
		if((s[i] == 'R') and (fr == 0))
		{
			r = i;
			fr =1;
		}
		if(s[i] == '.')
			ct++;
	}
	if(fl == 0)
	{
		cout<<r+1<<" "<<r + n-ct+1;
	}
	else if(fr == 0)
	{
		cout<<l + n-ct<<" "<<l;
	}
	else
		cout<<l+1<<" "<<l;
	return 0;
}