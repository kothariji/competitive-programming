#include <bits/stdc++.h>
#define lli long long int
#define endl "\n"
using namespace std;

int main()
{
	string s;
	cin>>s;
	priority_queue< int , vector<int>, greater<int> > pq;
	for(int i=0; i<s.length(); i++)
	{
		if(s[i] != '+')
			pq.push((int)(s[i]-'0'));
	}
	while(!pq.empty())
	{
		cout<<pq.top();
		pq.pop();
		if(pq.empty())
			break;
		cout<<"+";			
	}
	return 0;
}