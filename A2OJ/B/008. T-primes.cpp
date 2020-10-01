#include <bits/stdc++.h>
#define ll long long
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;
ll a[10000000] = {0};
set<ll> Tprime;
void sieve()
{
    Tprime.insert(4);
    for (ll i = 3; i <= 10000000; i+=2)
    {
        if (a[i] == 0)
        {
            Tprime.insert(i * i);
            for (ll j = i + i; j <= 10000000; j+= i)
            {
                a[j] = 1;
            }
        }
    }
}
int main() 
{
	fast;
	ll n;
	cin >> n;
	ll arr[n];
	sieve();
	for (ll i = 0; i < n; i++)
	{
	    cin >> arr[i];
	}
	for (ll i = 0; i < n; i++)
	{
	    if (Tprime.count(arr[i]))
	    {
	        cout << "YES" << "\n";
	    }
	    else
	    {
	        cout << "NO" << "\n";
	    }
	}
	return 0;
}