#include<bits/stdc++.h>
using namespace std;
//you are given the array of number and all number except one have even occurence,you have to find the number which have odd occurence 
// ex a[5]={1,1,2,4,4}   here ans=2
int oddoccurence(int a[],int t)
{
        int res=0;
        for(int i=0;i<t;i++){
            res=res^a[i];
        }
        return res;
}
int main(){
    int t,i;
            cin>>t;
            int a[t];
            for(i=0;i<t;i++){
                cin>>a[i];
            }
            cout<<oddoccurence(a,t)<<endl;
}
