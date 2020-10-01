#include<iostream>
using namespace std;
int a[100005],c[100005];
int m,n,x=0,s,i;

int main(){
    cin>>m>>n;
    for(i=0;i<m;i++) cin>>a[i];
    for(i=m-1;i>=0;i--){
     if(c[a[i]]==0){
     c[a[i]]=1;
     x++;
    }
    a[i]=x;
    }
    while(n--){
        cin>>s;     
        cout<<a[s-1]<<endl;
    }
}