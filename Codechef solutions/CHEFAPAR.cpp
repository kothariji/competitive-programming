#include <iostream>
using namespace std;
 
int main() {
    int t,n,flag;
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>n;
        int sum=0,a[n];
        flag = 0;
        for(int j=0;j<n;j++){
            cin>>a[j];
            if(a[j]==0){
                sum=sum+1000;
                flag=1;
            }
          if(flag==1){
              sum=sum+100;
            }
        }
        cout<<sum<<endl;
    }
	return 0;
}
