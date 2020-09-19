#include <bits/stdc++.h>
#define lli long long int
#define endl "\n"
using namespace std;

int main()
{
	int s,n;
	cin>>s>>n;
	vector < pair<int, int> >v1;
	for(int i=1; i<= n; i++)
	{
		int d1, d2;
		cin>>d1>>d2;
		v1.push_back({d1,d2});
	}
	sort(v1.begin(), v1.end());
	int flag = 0;
	for(int i=0; i<v1.size(); i++)
	{
		if(s <= v1[i].first)
		{
			cout<<"NO";
			flag = 1;
			break;
		}
		else
		{
			s += v1[i].second;
		}
	}
	if(flag == 0)
		cout<<"YES";
	
	return 0;
}