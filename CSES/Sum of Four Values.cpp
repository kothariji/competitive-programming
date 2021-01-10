#include<bits/stdc++.h>
#include<iostream>
using namespace std;

#define mod 1000000007
#define all(x) (x).begin(), (x).end()
typedef long long int ll;

const int mxn = 2e5+10;
const int MAX_CHAR = 26;
ll a[mxn];
//ll b[mxn];


void subMain(){
    int n,x;cin>>n>>x;
    vector<int>a(n);
    vector<pair<int,int>>v(n);
    for(int i=0;i<n;++i)
    {
    	ll xx;
    	cin>>xx;
    	a[i]=xx;
    	v[i]={xx,i};
	}
	sort(v.begin(),v.end());
	for(int i=0;i<n;++i)
	{
		for(int j=i+1;j<n;++j)
		{
			int low=j+1,hi=n-1;
			while(low<hi)
			{
				int p=v[i].first,q=v[j].first,r=v[low].first,s=v[hi].first;
				if(p+q+r+s==x)
				{
					cout<<v[i].second+1<<" "<<v[j].second+1<<" "<<v[low].second+1<<" "<<v[hi].second+1<<"\n";return ;
				}
				else if(p+q+r+s<x)low++;
				else hi--;
			}
		}
	}
	cout<<"IMPOSSIBLE" << "\n";
}

int32_t main(){

	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);


	/*ll t;
	cin >> t;
	while(t--){
        subMain();
	}*/
	subMain();
	return 0;
}