#include <bits/stdc++.h>
#define lli long long int
#define endl "\n"
using namespace std;

int main()
{
	string s1,s2;
	cin>>s1>>s2;
	transform(s1.begin(), s1.end(), s1.begin(), ::tolower);
	transform(s2.begin(), s2.end(), s2.begin(), ::tolower);
	int val =  s1.compare(s2);
	if(val == 0)
		cout<<0;
	else if(val > 0)
		cout<<1;
	else
		cout<<-1;	 
	return 0;
}