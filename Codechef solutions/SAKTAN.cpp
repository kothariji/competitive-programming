#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		ll n,m,q;
		cin >> n >> m >> q;
		ll a[n+1]={0},b[m+1]={0};
		for(int i=0;i<q;i++)
		{
			int x,y;
			cin >> x >> y ;
			b[y] += 1;
			a[x] += 1;

		}
		ll o=0,e=0;
		for(int i=1;i<=n;i++)
		{
			if( a[i]%2)
				o++;
			else
				e++;
		}
		ll ans = 0;
		for(int i=1;i<=m;i++)
		{
			if( b[i]%2)
				ans += e;
			else
				ans += o;
		}
		cout << ans << endl;

	}
}