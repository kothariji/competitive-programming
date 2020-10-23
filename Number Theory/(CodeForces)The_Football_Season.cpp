#include <iostream>
using namespace std;
#include <vector>
#include <string>
#include <algorithm>
#include <unordered_map>


int main(){
long long int n,p,w,d;
cin>>n>>p>>w>>d;
bool broke;
long long int r=p/w;

if(r>n)cout<<-1<<endl;
else if(r==n&&p%w!=0)cout<<-1<<endl;
else{
    if(p%w==0)cout<<r<<" "<<0<<" "<<n-r<<endl;
    else{
        if(w%d==0&&(p%w)%d!=0)cout<<-1<<endl;
        else{
        long long int q=r;
        long long int sr=p%w;
        long long int y=sr/d;
        if(q+y<=n&&sr%d==0)cout<<q<<" "<<y<<" "<<n-q-y<<endl;
        else{
        bool broke=false;
        while(q+y<=n&&q>0){
            q--;
            sr=sr+w;
            y=sr/d;
            if(q+y<=n&&sr%d==0){
                broke=true;
                break;
            }
        }
        if(broke)cout<<q<<" "<<y<<" "<<n-q-y<<endl;
        else cout<<-1<<endl;
        }
        }
    }
}
}
