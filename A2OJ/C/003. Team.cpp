#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{   
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll ones, zeros;
    cin>>zeros>>ones;;
    if(ones < zeros-1 || ones > 2*(zeros+1)){
        cout<<-1<<endl;
        return 0;
    }
    else if(ones <= zeros){
        for(ll i = 0;i<ones+zeros;i++){
            cout<<(i%2==0?0:1);
        }
    }
    else{
        vector<ll> v(2*zeros+1);
        for(ll i = 0;i<v.size();i++)v[i] = (i%2==0?1:0);
        ones = ones - zeros - 1;
        for(ll i= 0;i<v.size();i++){
            if(ones>0 && i%2==0){
                ones--;
                v[i]++;
            }
            if(v[i] == 2)cout<<"11";
            else cout<<v[i];
        }
    }
}