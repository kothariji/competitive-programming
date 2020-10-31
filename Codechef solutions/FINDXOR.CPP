// https://www.codechef.com/SEPT20B/problems/FINXOR //
// Babitha's code //
#include <bits/stdc++.h>

using namespace std;

int32_t main()
{
	int t;
	cin >> t;
	int verdict;
	while (t--)
	{
		int n;
		cin >> n;
		int k = 2;
		vector<int> v;
		while (k < 1000000)
		{
			cout << "1 " << k << endl;
			fflush(stdout);
			int kk;
			cin >> kk;
			v.push_back(kk);
			k *= 2;
		}
		cout << "1 " << k << endl;
		fflush(stdout);
		int ref;
		cin >> ref;
		int reff = ref - n*k;
		int i = 0;
		int ans = 0;
		int pow = 2;
		int sum = 0;
		while (i < v.size())
		{
			int val = reff - v[i] + n * pow;
			val /= 2;
			sum += val;
			val /= pow;
			if (val % 2)
			{
				ans += pow;
			}
			pow *= 2;
			i++;
		}
		int vv = reff - sum;
		if(vv%2){
			ans++;
		}
		cout << "2 " << ans << endl;
		fflush(stdout);
		cin >> verdict;
		if(verdict==-1){
			return 0;
		}
	}
	return 0;
}
