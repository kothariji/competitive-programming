#include<bits/stdc++.h>
#include<iostream>
using namespace std;
 
#define mod 1000000007
#define all(x) (x).begin(), (x).end()
typedef long long ll;

 
void subMain(){
    int n;
	cin >> n;
	vector<int > v;
	map<int ,bool > mymap;
	int maxx=0;
	int currans=0;
	int j=0;
	for(int i=0;i<n;i++){
	    int k;
        cin>>k;
        v.push_back(k);
        if(mymap.find(k)==mymap.end()||mymap[k]==false){
                mymap[k]=true;
                currans++;
                maxx=max(currans,maxx);
 
        }
        else{
             while(v[j]!=k){
                 mymap[v[j]]=false;
                 j++;
             }
             currans=(i-j);
             j++;
        }
	}
	cout<<maxx<<endl;
}
 
int32_t main(){
 
 
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
 
 
	/*ll t=1;
	cin >> t;
	while(t--){
        subMain();
	}*/
	subMain();
	return 0;
}