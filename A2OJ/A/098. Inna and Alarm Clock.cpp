#include <bits/stdc++.h>
#define lli long long int
#define endl "\n"
using namespace std;

int main()
{
	int n,q1,q2;
	set <int> s1, s2;
	cin>>n;
	while(n--)
	{
		cin>>q1>>q2;
		s1.insert(q1);
		s2.insert(q2);
	}
	cout<<min(s1.size(), s2.size());
	return 0;
}