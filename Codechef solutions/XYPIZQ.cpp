#include<bits/stdc++.h>
using namespace std;
long long maxi=1000000000;
#define l long

int main(){
    int t;
    cin>>t;
    while(t--){
        long n,k,x,y,z;
        long i,j,gcd;
        cin>>n>>k>>x>>y>>z;
        long p,q;
        q=2*n +1;
        if(x==z){
            p=x;
            gcd=__gcd(p,q);
            cout<<p/gcd<<" "<<q/gcd<<endl;
        }
        else if(z>y&&y>x){
            if(k==1)
            {p=q-z;}
            else if(k==2||k==4){
                p=q-2*y;
            }
            else{
                p=q-x;
                
            }
            gcd=__gcd(p,q);
            cout<<p/gcd<<" "<<q/gcd<<endl;
            
        }
        else{
            if(k==1)
            {p=q-z;}
            else if(k==2||k==4){
                p=q-2*y;
            }
            else{
                p=q-x;
                
            }
            gcd=__gcd(p,q);
            cout<<p/gcd<<" "<<q/gcd<<endl;
            
        }
        
    }
    return 0;
}