
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

#define ll long long int   

#define all(v) (v).begin(),(v).end()    

#define Blegh ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ugh int z;cin>>z;while(z--){solve();}

////////////////////////////////////////////////////////////////////////////////
void solve()
{
    ll n,cost=0,i,j;
    cin>>n;
    vector<ll> A(n),D(2*n),no;
    for(i=0;i<n;++i){
        cin>>A[i];
        D[i]=A[i];
    }
    for(i=0;i<n;++i)
        cin>>D[n+i];
    sort(all(A));
    sort(all(D));i=0;j=0;
    while(i<2*n-1 && j<n){
        if(D[i]!=D[i+1]){cout<<-1<<"\n";return; }
        else if(D[i]!=A[j]){
            if(D[i]<A[j])
            {
                no.push_back(D[i]);i=i+2;
            }
            else if(D[i]>A[j])
            {
                no.push_back(A[j]);++j;
            }
        }
        else{
            i+=2;++j;
        }
    }
    while(j<n){
        no.push_back(A[j]);++j;
    }
    while(i<2*n-1){
        no.push_back(D[i]);i+=2;
    }
    auto it=no.begin();
    i=no.size();i/=2;
    j=2*D[0];int flag=0;
    while(i--)
    {   if(*it>j){flag=1;break;}
        cost+=*it;++it;
    }if(flag==1)cost+=(i+1)*j;
    cout<<cost<<"\n";
}
int main() {
    Blegh
    ugh
	return 0;
}
