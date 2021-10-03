#include <bits/stdc++.h>
#define ll long long
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;
set<ll> usinversal;
ll ans = 0;
ll aa = 0;
 
 
int main() 
{
	fast;
    
    ll n;
    cin >> n;
    ll sum1 = 0, sum2=  0;
    vector<ll> a1, a2;
    bool l;
    while (n--)
    {
        ll x;
        cin >>x;
        if (x >= 0)
        {
            sum1 += x;
            a1.push_back(x);
            l  = true;
        }
        else 
        {
            sum2  += -1 *x;
            a2.push_back(-1 * x);
            l = false;
        }
    }
    
    if (sum1 >sum2)
    {
        cout << "first" << "\n";
    }
    else if (sum2 > sum1)
    {
        cout << "second" << "\n";
    }
    else 
    {
        if (a1 > a2)
        {
            cout << "first" << "\n";
        }
        else if (a1 < a2)
        {
            cout <<"second" << "\n";
        }
        else if (l)
        {
            cout << "first" << "\n";
        }
        else
        {
            cout << "second" << "\n";
        }
    }
	return 0;
}