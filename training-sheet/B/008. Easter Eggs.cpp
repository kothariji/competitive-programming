#include <bits/stdc++.h>
#define lli long long int
#define endl "\n"
#define MAX  2005
using namespace std;


int main()
{
	int n, count = 0, i = 0;
	cin>>n;
	string s =  "ROYGBIV";
	int rep = n/7;
	int extra = n%7;
	while(rep--)
		cout<<s;
	 string list[7] = {"", "G", "GB", "YGB", "YGBI", "OYGBI" , "OYGBIV"};
	cout<<list[extra];
}
