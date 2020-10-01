
//Aaryan Jagetia
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define fi first
#define se second
#define pb push_back
#define all(x) x.begin(),x.end()
#define mp(x,y) make_pair(x,y)
#define mod 1000000007
#define sc(x) scanf("%d", &x)
#define sl(x) scanf("%lld", &x)
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);
#define test cin>>t;while(t--)
int main()
{    
    fast
ll t,n;
   test
{ 
  ll k;
  cin>>n>>k;
  set<ll> s;
  ll a,f=0;
  ll i;
  for(i=0;i<n;i++){
      cin>>a;
      if(a==0){
        f=1;  
      }
      s.insert(a);
  }
  ll n1=s.size();
  ll ans=1;
  if(k==1&&n1>1){
      cout<<-1<<endl;
  }
  else if(n1<=k){
      cout<<1<<endl;
  }
  else{
      ll n2=n1-k;
      k=k-1;
      if(n2%k==0){
          ans+=(ll)(n2/k);
          cout<<ans<<endl;
      }
      else{
          ans+=(ll)(n2/k)+1;
          cout<<ans<<endl;
      }
      
  }
}
return 0;
}
