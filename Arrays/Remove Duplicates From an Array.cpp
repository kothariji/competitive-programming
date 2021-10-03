#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number of elements : ";
    cin>>n;
    int *arr = new int[n];
    cout<<"Enter the elements : \n";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr,arr+n);
    int res = 1;
    for(int i=1;i<n;i++){
        if(arr[i]!=arr[res-1]){
            arr[res] = arr[i];
            res++;
        }
    }
    cout<<"Distinct Elements Array : \n";
    for(int i=0;i<res;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}