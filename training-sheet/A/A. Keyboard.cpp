#include <bits/stdc++.h>
# define lli long long int
using namespace std;
int check(string s,char c)
{
	for(int i=0;i<s.length();i++)
	{
		if(s[i]==c)
		{
			return i;
		}
	}
	return -1;
}
int main()
{
	string s,s1,s2;
	s="qwertyuiop";
	s1="asdfghjkl;";
	s2="zxcvbnm,./";
	char x;
	cin>>x;
	string y;
	if(x=='R')
	{
		string str;
		cin>>str;
		for(int i=0;i<str.length();i++)
		{
			if(check(s,str[i])!=-1)
			{
				y+=s[check(s,str[i])-1];
			}
			else if(check(s1,str[i])!=-1)
			{
				y+=s1[check(s1,str[i])-1];
			}
			else
			{
				y+=s2[check(s2,str[i])-1];
			}
		}
	}
	else
	{
		string str;
		cin>>str;
		for(int i=0;i<str.length();i++)
		{
			if(check(s,str[i])!=-1)
			{
				y+=s[check(s,str[i])+1];
			}
			else if(check(s1,str[i])!=-1)
			{
				y+=s1[check(s1,str[i])+1];
			}
			else
			{
				y+=s2[check(s2,str[i])+1];
			}
		}
	}
	
	cout<<y<<endl;
	
return 0;	
}
