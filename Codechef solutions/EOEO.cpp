#include <bits/stdc++.h>
using namespace std;
#define sync                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0);
#define ll long long int

void solve()
{
    ll n;
    cin >> n;
    while (n % 2 == 0)
    {
        n >>= 1;
    }
    
    n>>=1;

    cout << n << endl;
}

int main()
{
    sync;
    int testCases;
    cin >> testCases;
    while (testCases--)
    {
        solve();
    }

    return 0;
}
