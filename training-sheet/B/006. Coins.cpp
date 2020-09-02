#include <bits/stdc++.h>
#define lli long long int
#define endl "\n"
#define MAX  2005
using namespace std;


int main()
{
	int a, b, c;
	a = b = c = 0;
	string s1, s2, s3;
	cin>>s1>>s2>>s3;
	
	if(s1[1] == '>')
	{
		if(s1[0] == 'A')
			a++;
		else if(s1[0] == 'B')
			b++;
		else
			c++;
	}
	else
	{
		if(s1[2] == 'A')
			a++;
		else if(s1[2] == 'B')
			b++;
		else
			c++;
	}
	if(s2[1] == '>')
	{
		if(s2[0] == 'A')
			a++;
		else if(s2[0] == 'B')
			b++;
		else
			c++;
	}
	else
	{
		if(s2[2] == 'A')
			a++;
		else if(s2[2] == 'B')
			b++;
		else
			c++;
	}
	if(s3[1] == '>')
	{
		if(s3[0] == 'A')
			a++;
		else if(s3[0] == 'B')
			b++;
		else
			c++;
	}
	else
	{
		if(s3[2] == 'A')
			a++;
		else if(s3[2] == 'B')
			b++;
		else
			c++;
	}

	if(a == b or b== c or c== a)
		cout<<"Impossible";

	else if((a > b) && (a > c))
	{
		if(b > c)
			cout<<"CBA";
		else
			cout<<"BCA";
	}

	else if((b >c) && (b > a))
	{
		if(a > c)
			cout<<"CAB";
		else
			cout<<"ACB";
	}
	else
	{
		if(a > b)
			cout<<"BAC";
		else
			cout<<"ABC";	
	}

}
