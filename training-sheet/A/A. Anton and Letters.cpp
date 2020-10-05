#include <bits/stdc++.h>
# define lli long long int
using namespace std;
int main()
{
	string s;
	char a;
	set<char>st;
	while(true)
	{
	cin>>a;
		if(a=='{' || a==' ' || a==',')
		{
			
		}
		else if(a=='}')
		{
			break;
		}
		else
		{
			st.insert(a);
		}
	}
	cout<<st.size();
	
	
return 0;	
}
