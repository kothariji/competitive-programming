#include <bits/stdc++.h>

using namespace std;
int mod=1e9+7;
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
typedef long long int ll;

int main() {
    fast;
    int t;
    cin>>t;
    while(t--){
       
        
        ll n,d;
       
        cin>>n>>d;
        string s= to_string(n);
        ll len = s.length();
        
        if(d==0){
            int a= len;
            for(int i = 0; i<len;i++){
                if(s[i]=='0'){
                    s[i]='1';
                    a=i;
                    break;
                }
            }
            for(int j=a+1;j<len;j++){
                s[j]='1';
            }
        }
        else if(d==9){
            if(s[0]=='9'){
                for(int i=0;i<len;i++){
                    s[i]='0';
                }
                s="1"+s;
            }
            else{
                int b=len;
                for(int i=0;i<len;i++){
                    if(s[i]=='9'){
                        for(int j=i-1;j>=0;j--){
                            if(s[j]<='7'){
                                s[j]++;
                                b=j;
                                goto cvv;
                            }
                        }
                        for(int i=0;i<len;i++){
                            s[i]='0';
                        }
                        s="1"+s;
                        goto fvv;
                    }
                }
                cvv:;
                for(int j = b+1;j<len;j++){
                    s[j]='0';
                }
                fvv:;
            }
        }
        else{
            int i=0;
             for(i=0;i<len;i++){
                 if((s[i]-48)==d){
                     s[i]=s[i]+1;
                     break;
                 }
             }
             for(int j=i+1; j<len ; j++){
                 s[j]='0';
             }
        }
        ll ans = stoll(s);
        cout << ans-n << endl;
}
return 0;
}






