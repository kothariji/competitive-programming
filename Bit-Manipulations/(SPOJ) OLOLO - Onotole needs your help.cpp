#include <bits/stdc++.h>
#define lli long long int
#define endl "\n"
using namespace std;
 
int main()
{
	lli n,data,xored = 0;
	cin>>n;
	while(n--){
		cin>>data;
		xored = data^xored;
	}
	cout<<xored;
}