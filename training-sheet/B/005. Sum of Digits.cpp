#include <bits/stdc++.h>
#define lli long long int
#define endl "\n"
#define MAX  2005
using namespace std;

int spell(string s)
{
	int sum = 0;
	for(auto c: s)
		sum += c-'0';
	return sum;
}
int main()
{
	string s;
	cin>>s;
	lli ans = s.length() > 1 ? 1 : 0;
	int sum = 0;
	for(auto c: s)
		sum += c-'0';
	while(sum > 9)
	{
		sum = spell(to_string(sum));
		ans++;
	}
	cout<<ans;

}
