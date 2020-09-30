#include<bits/stdc++.h>
using namespace std;

/You are given an array of numbers and all numbers except two have even occurrences. Find the two numbers having odd occurrences
//ex.  a[8]={1,1,2,3,2,5,2,2}   ans=3,5;
void two_odd_occurrence(int a[],int t){
    int i,res=0,res1=0,res2=0;
    for(i=0;i<t;i++){
        res=res^a[i];
    }
    res=res&(~(res-1));
    for(i=0;i<t;i++){
        if((res&a[i])!=0){
            res1=res1^a[i];
        }
        else{
            res2=res2^a[i];
        }
    }
    cout<<res1<<" "<<res2<<endl;
}
int main(){
    int t,i;
            cin>>t;
            int a[t];
            for(i=0;i<t;i++){
                cin>>a[i];
            }
            two_odd_occurrence(a,t);
}
