//BIGSALE - codechef

#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    //cout << "Hello world!" << endl;
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        double q[n];
        double p[n],x[n],l=0;
        for(int i=0;i<n;i++){
            cin>>p[i]>>q[i]>>x[i];
            l=l+(p[i]*x[i]*x[i]*q[i]*0.0001);
        }
        cout<<fixed<<setprecision(10)<<l<<endl;
    }
    return 0;
}
 