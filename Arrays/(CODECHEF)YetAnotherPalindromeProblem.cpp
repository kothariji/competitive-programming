#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        int arr[n], diff[n/2],f=0;
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }
        for(int i=0; i<n-i-1; i++){
            diff[i]=arr[n-i-1] - arr[i];
        }
        for (int i=0 ; i<n/2; i++){
            if(arr[i]>arr[n-i-1]){
                f=1; break;
            }
        }
        for(int i=0; i<n/2 - 1;i++){
            if(diff[i] < diff[i+1]){
                f=1;    break;
            }
        }
        if(f) cout<<-1<<endl;
        else cout<< diff[0]<<endl;
    }
	return 0;
}
