#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    long long int p,t,n,b,a,c,d,i,k,f;
    cin>>t;
    for(i=0;i<t;i++){
        cin>>n;
        d=0;
        c=0;
        p=n;
        while(n%10!=5 && n!=0){
            d++;
            n/=10;
        }
        n/=10;
        while((n%10!= 7 && n%10!=2) && n!=0){
            d++;
            n/=10;
        }
        while(p%10!=0 && p!=0){
            c++;
            p/=10;
        }
        p/=10;
        while((p%10!= 0 && p%10!=5) && p!=0){
            c++;
            p/=10;
        }
        if(c<d)d=c;
        cout<<d<<endl;
    }
    return 0;
}