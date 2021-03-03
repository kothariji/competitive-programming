#include <iostream>
#include <map>
 
using namespace std;
 
#define int long long int
 
int32_t main()
{
    int n, k; cin >> n >> k;
    int a[n];
 
    for(int i = 0; i < n; i++) cin >> a[i];
 
    map <int, int> m;
    int distinct = 0, l = 0, sol = 0;
 
    for(int i = 0; i < n; i++)
    {
        if(m[a[i]] == 0) distinct++;
        m[a[i]]++;
 
        while(distinct > k)
        {
            m[a[l]]--;
            if(m[a[l]] == 0) distinct--;
            l++;
        }
        sol += i-l+1;
    }
    cout << sol;
    return 0;
}