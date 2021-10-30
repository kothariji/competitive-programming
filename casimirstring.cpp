#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    long long int p,t,n,b,a,c,d,i,k,f;
    string s;
    cin>>t;
    for(k=0;k<t;k++){
        cin>>s;
        n = s.size();
        a=0;
        b=0;
        for(i=0;i<n;i++){
            if(s[i]=='A' || s[i]=='C'){
                a++;
            }
            else{
                b++;
            }
        }
        if(b==a){
            cout<<"YES";
        }
        else{
            cout<<"NO";
        }
        cout<<endl;
    }
    
    return 0;
}