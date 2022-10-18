#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define mp make_pair
#define io                            \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
#define t     \
    ll t;     \
    cin >> t; \
    while (t--)
using namespace std;

int main()
{
    t
    {
    ll n;
     cin>>n;
     ll b=0;
     int a[n]; vector<int> v;
     for(ll i=n-1; i>=0; --i){
         cin>>a[i];
         if(a[i]%2==1)
         b^=i;
     }
     if(b==0)
     cout<<"cook"<<endl;
     else
     cout<<"chef"<<endl;
   
     
     
    }
}
