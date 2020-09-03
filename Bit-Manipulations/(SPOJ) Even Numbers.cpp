#include <bits/stdc++.h>
#define lli long long int
#define endl "\n"
#define MAX 1000005
#define MOD 1000000007
using namespace std;


int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		if(n%2)
		{
			cout<<n<<endl;
			continue;
		}
		bitset <32> b1(n);
		string s = b1.to_string();
		int i = 0;
		for(; i <32 ;i++)
			if(s[i] == '1')
				break;
		s = s.substr(i);
		reverse(s.begin(), s.end());
		bitset <32> b2(s);
		cout<<b2.to_ulong()<<endl;
	}
	return 0;
}