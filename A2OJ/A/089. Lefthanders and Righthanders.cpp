#include <bits/stdc++.h>
#define lli long long int
#define endl "\n"
using namespace std;

int main()
{
	freopen("input.txt", "r", stdin); 
	freopen("output.txt", "w", stdout);
	int n;
	cin>>n;
	string s;
	cin>>s;
	int i= 0, j = n/2;
	while(i<(n/2))
	{
		if(s[i] == s[j])
			cout<<i+1<<" "<<j+1<<endl;
		else if(s[i] == 'R')
			cout<<j+1<<" "<<i+1<<endl;
		else
			cout<<i+1<<" "<<j+1<<endl;
		i++;
		j++;
	}
	return 0;
}