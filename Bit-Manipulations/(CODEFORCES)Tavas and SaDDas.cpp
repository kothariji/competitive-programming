#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
int main(){
    long long int t,n;

        cin>>n;
        int rem;
        vector<int>v;
        while(n>0){
            rem=n%10;
            if(rem==4){
                v.push_back(0);
            }else{
                v.push_back(1);
            }
            n/=10;
        }
        long long int res=0;
        for(int i=0;i<v.size();i++){
            res+=((1<<i)+(1<<i)*v[i]);
        }
        cout<<res<<endl;

    return 0;
}
