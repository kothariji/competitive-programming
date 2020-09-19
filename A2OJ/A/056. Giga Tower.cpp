#include <bits/stdc++.h>
#define lli long long int
#define endl "\n"
using namespace std;

int main()
{
	int n;
	cin>>n;
	for(int i = n+1; i< n+100; i++)
	{
		string s = to_string(i);
		if(count(s.begin(), s.end(), '8'))
		{
			cout<<i-n;
			break;
		}
	}

	return 0;
}