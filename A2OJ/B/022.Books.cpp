#include<bits/stdc++.h>
 
 
#define ll long long
#define mm 1000000001
 
using namespace std;
 
//They are everywhere
int32_t main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll n, t;
    cin >> n >> t;
    ll arr[n];
    for (ll i = 0; i < n; i++)
    {
        cin >>arr[i];
    }
    ll start = 0, sum = 0, cnt = 0;
    vector<ll>ans;
    for (ll i = 0; i < n; i++)
    {
        sum += arr[i];
        if (sum <= t)
        {
            cnt++;
        }
        else
        {
            sum -= arr[start];
            ans.push_back(cnt);
            cnt = i - start;
            start++;
            
        }
    }
    ans.push_back(cnt);
        cout << *max_element(ans.begin(), ans.end());
    	return 0;
}