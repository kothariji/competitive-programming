#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t-->0){
        int x,y,z;
        cin>>x>>y>>z;
        x=z*2 +x;
        
        if(x>=y)
        cout<<"Yes"<<endl;
        else
        cout<<"No"<<endl;
        
    }
    return 0;
}
