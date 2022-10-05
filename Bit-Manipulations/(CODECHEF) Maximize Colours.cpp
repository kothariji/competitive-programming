#include <bits/stdc++.h>
using namespace std;
int main() {
    int T;
    cin>>T;
    while (T--){
        int X, Y, Z, sum=0;
        cin>>X>>Y>>Z;
        int arr[3]={X,Y,Z};
        sort(arr,arr+3);
        for (int i=0;i<3;i++){
            if (arr[i]) sum++;
        }
        if (arr[2]>1 && arr[1]>1){
            arr[2]--;
            arr[1]--;
            sum++;
        }
        if (arr[1]>1&&arr[0]>1){
            arr[0]--;
            arr[1]--;
            sum++;
        }
        if (arr[2]>1&&arr[0]>1){
            arr[0]--;
            arr[2]--;
            sum++;
        }
        cout<<sum<<endl;
    }
	return 0;
}
