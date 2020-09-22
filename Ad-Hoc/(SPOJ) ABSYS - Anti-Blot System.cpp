#include <bits/stdc++.h>
#define lli long long int
#define endl "\n"
using namespace std;

bool isNumber(string s)
{
	for(auto c: s)
		if(!isdigit(c))
			return false;
	return true;
}

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s, num1, num2 , num3;
		cin.get();
		cin>>num1>>s>>num2>>s>>num3;
		if(!isNumber(num1))
		{
			int n1 = stoi(num3) - stoi(num2);
			cout<<n1<<" + "<<num2<<" = "<<num3<<endl;
		}
		else if(!isNumber(num2))
		{
			int n2 = stoi(num3) - stoi(num1);
			cout<<num1<<" + "<<n2<<" = "<<num3<<endl;	
		}
		else
		{
			int n3 = stoi(num2) + stoi(num1);
			cout<<num1<<" + "<<num2<<" = "<<n3<<endl;
		}
	}	
	return 0;
}