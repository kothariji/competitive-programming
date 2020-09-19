#include <bits/stdc++.h>
#define lli long long int
#define endl "\n"
using namespace std;

int main()
{
	string s;
	cin>>s;
	vector<char> n,I,e,t;
	for(int i=0; i<s.length(); i++)
	{
		if(s[i] == 'n')
			n.push_back('n');
		if(s[i] == 'i')
			I.push_back('i');
		if(s[i] == 'e')
			e.push_back('e');
		if(s[i] == 't')
			t.push_back('t');
	}
	string ans = "nineteen";
	if(n.size() == 0)
	{
		cout<<0;
		return 0;
	}
	n.pop_back();
	int count = 0;
	while(1)
	{
		for(int i=1; i<ans.length(); i++)
		{
			if(ans[i] == 'n')
			{
				if(n.size() == 0)
				{
					cout<<count;
					return 0;
				}
				n.pop_back();
			}
			if(ans[i] == 'i')
			{
				if(I.size() == 0)
				{
					cout<<count;
					return 0;
				}
				I.pop_back();
			}
			if(ans[i] == 'e')
			{
				if(e.size() == 0)
				{
					cout<<count;
					return 0;
				}
				e.pop_back();
			}
			if(ans[i] == 't')
			{
				if(t.size() == 0)
				{
					cout<<count;
					return 0;
				}
				t.pop_back();
			}
		}
		count++;	
	}

	return 0;
}
 