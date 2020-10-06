#include<bits/stdc++.h>
using namespace std;
#define ll              long long int
#define w(x)            ll x; cin>>x; while(x--)
#define fast            std::ios_base::sync_with_stdio(false); cin.tie(NULL);
#define pb              push_back
#define vec             vector
int main()
{
  fast 
  ll count=0;
  w(x)
  {
  	ll a,b,c;
  	cin>>a>>b>>c;
  	if(a==1 && b==1 || b==1 && c==1 || a==1 && c==1)
  		count++;
  }
  cout<<count<<endl;
 
return 0;
}