#include<bits/stdc++.h>
using namespace std;
long long maxi=1000000000;

int main(){
    int i,j,a[(int)1e6+3]={0};
    vector<int> v; 
    for(i=2;i*i<=1000001;i++){
        if(a[i]==0){
            //v.push_back(i);
            for(j=i*i;j<=1000000;j+=i){
                a[j]=i;
            }
                    
        }
    }
    for(i=2;i<1000001;i++){
        if(a[i]==0)
        v.push_back(i);
    }
    int t;
    cin>>t;
    while(t--)
    {
        int n,k,l;
        cin>>n;

        long long ans;
        //cout<<v[n-1]*v[n-2]<<endl;
      	cout<<v[0]*v[1]<<" ";

        for(i=1,j=1,k=1,l=2;k<n-1;k++,l+=j){
    
        	if(l>2999)
        	l=l-2999;
        //	cout<<i<<","<<l<<" ";
        	
        	cout<<v[i]*v[l]<<" ";
        	i=l;
        	if(k==n-2)
        	break;
       
        	if(l==2999)
        	 j++;
        }
        cout<<v[l]*v[0]<<endl;

    }
    return 0;
}