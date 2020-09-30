#include <bits/stdc++.h>
#include <set>
#include <cstdlib>
using namespace std;
// #include <ext/pb_ds/assoc_container.hpp>
// using namespace __gnu_pbds;
#include<algorithm>
#include <typeinfo>
// cout << typeid(mm).name() << endl;
#define ff              first
#define ss              second
#define int             long long
#define pb              push_back
#define mp              make_pair
#define pii             pair<int,int>
#define vi              vector<int>
#define mii             map<int,int>
#define pqb             priority_queue<int>
#define pqs             priority_queue<int,vi,greater<int> >
#define setbits(x)      __builtin_popcountll(x)
#define zrobits(x)      __builtin_ctzll(x)
#define mod             1000000007
#define inf             1e18
#define ps(x,y)         fixed<<setprecision(y)<<x
#define mk(arr,n,type)  type *arr=new type[n];
#define FIO             ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define deb(x)			cout<<#x<<" "<<x<<"\n";




int32_t main() {
	FIO;
// #ifndef ONLINE_JUDGE
// 	freopen("input.txt", "r", stdin);
// 	freopen("output.txt", "w", stdout);
// #endif


	int x; cin >> x; while (x--) {
		int n; cin >> n;

		int xc[4 * n - 1], yc[4 * n - 1];
		int xx, yy;
		for (int i = 0; i < 4 * n - 1; ++i)
		{
			cin >> xx >> yy;
			xc[i] = xx;
			yc[i] = yy;
		}

		int ax = 0, ay = 0;

		for (int i = 0; i < 4 * n - 1; ++i)
		{
			ax ^= xc[i];
			ay ^= yc[i];
		}

		cout << ax << " " << ay << "\n";
	}









	return 0;
}


