#include<bits/stdc++.h>
using namespace std;

#define int long long
#define mod 1000000007
int32_t main()
{

    int n; cin >> n;
	int a[n];
	int tail[n];
	for (int i = 0; i < n; i++) cin >> a[i];
	tail[0] = a[0];
	int len = 1;
	for (int i = 1; i < n; i++)
	{
		if (a[i] > tail[len - 1])
		{
			tail[len] = a[i];
			len++;
		}
		else {
			int x = lower_bound(tail, tail + len, a[i]) - tail;
			tail[x] = a[i];
		}
	}
	cout << len;
	return 0;
}   