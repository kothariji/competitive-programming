//******* author - anonymous377 ******* 
#include<bits/stdc++.h>
using namespace std;
#define fs first
#define sc second
main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,x; cin>>n>>x;
		int ar[n];
		for(int i=0;i<n;i++)
      cin>>ar[i];
		int mxm=0,xors=0;
		if(x==0){
			map<int,int> mp1;
			for(int i=0;i<n;i++){
				if(mp1.find(ar[i]) == mp1.end())
					mp1[ar[i]]=1;
				else
					mp1[ar[i]]++;
			}
			int mx=0;
			for(auto it : mp1)
				mx=max(it.sc,mx);
			mxm = mx;
		}
		else{
			map<int,int> mp1,mp2;
			for(int i=0;i<n;i++){
				if(mp1.find(ar[i]) == mp1.end())
					mp1[ar[i]]=1;
				else
					mp1[ar[i]]++;

				if(mp2.find(ar[i]^x) == mp2.end())
					mp2[ar[i]^x]=1;
				else
					mp2[ar[i]^x]++;
			}
			
			int mx1=0,mx2=0,cnt1 = n,cnt2 = n;

			for(auto it:mp1){
				if(mx1 < it.sc + mp2[it.fs]){
					mx1=it.sc + mp2[it.fs];
					cnt1 = mp2[it.first];
				}
				else if(mx1 == it.sc + mp2[it.fs]){
					cnt1 = min(cnt1, mp2[it.fs]);
				}
			}

			for(auto it:mp2){
				if(mx2 < it.sc + mp1[it.fs]){
					mx2 = it.sc + mp1[it.fs];
					cnt2 = it.sc;
				}
				else if(mx2 == it.sc + mp2[it.fs]){
					cnt2 = min(cnt2, it.sc);
				}
			}
			mxm=max(mx1,mx2);
			if(mx1>mx2) 		xors=cnt1; 
			else if(mx1<mx2) 	xors=cnt2;
			else 				xors=min(cnt2,cnt1);
		}
		cout<<mxm<<" "<<xors;
	  cout<<"\n";	
	}
	cerr<<"time taken: "<<(float)clock()/CLOCKS_PER_SEC<<endl;
}
