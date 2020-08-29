#include <bits/stdc++.h>
#define lli long long int
#define endl "\n"
#define MAX  2005
using namespace std;



int main()
{
	int n,A = 0,D= 0;
	string s;
	cin>>n>>s;
	for(auto c: s)
		if(c == 'A') A++;
		else D++;
	if(A > D)
		cout<<"Anton";
	else if(D > A)
		cout<<"Danik";
	else 
		cout<<"Friendship";

}