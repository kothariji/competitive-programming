#include <bits/stdc++.h>
#define lli long long int
#define endl "\n"
using namespace std;


int main()
{
	
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		stack <string> s1;
		for(int i = 0; i<s.length();i++)
		{
			if(s[i] != ')')
			{
				string temp(1,s[i]);
				s1.push(temp);
			}
			else
			{
				string a1 = s1.top();
				s1.pop();
				string a2 = s1.top();
				s1.pop();
				string a3 = s1.top();
				s1.pop();
				s1.pop();
				s1.push(a3+a1+a2);	
			}
		}
		cout<<s1.top()<<endl;
	}
	
}