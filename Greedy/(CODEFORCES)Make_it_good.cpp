#include <iostream>
using namespace std;
#include <vector>
int main(){
    int t;
    cin>>t;
    for(int tt=0;tt<t;tt++){
        int n;
        cin>>n;
        vector<int> a(n);
        for(int i=0;i<n;i++)cin>>a[i];
        //int maxcount=0;
        int trend;
        int j;
        for(j=n-1;j>0;j--){
            if(a[j]>a[j-1]){
                trend=0;
                break;
            }
            else if(a[j]<a[j-1]){
                trend=1;
                break;
            }


        }
        if(j==0){cout<<0<<endl;}

        else{
            int ans;

         if(trend==0){
             bool broke=false;
            for(int k=j-1;k>0;k--){
                if(a[k]<a[k-1]){
                    ans=k;
                    broke=true;
                    break;
                }

            }
            if(!broke){ans=0;}
            cout<<ans<<endl;
        }
        else if(trend==1){
            bool switched=false;
            bool broke=false;
            for(int k=j-1;k>0;k--){
                if(!switched){
                    if(a[k]>a[k-1]){switched=true;}
                }
                else{
                    if(a[k]<a[k-1]){
                        ans=k;
                        broke=true;

                    }
                    if(broke){break;}
                }
            }
            if(!switched||!broke){ans=0;}
            cout<<ans<<endl;
        }

        }

    }
}
