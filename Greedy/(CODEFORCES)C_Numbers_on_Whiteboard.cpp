#include<bits/stdc++.h>
#define fastio 	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int 	long long
#define pb 		push_back		
#define ff 		first
#define ss 		second//typedef second ss;
#define unmap  	unordered_map<int,int>
#define	unset	unordered_set<int>
#define maxpq  	priority_queue<int>
#define minpq  	priority_queue<int, vector<int>, greater<int>>
#define foton(i,n) for(int i=0;i<n;i++)
#define	faton(i,a,n)	for(int i=a;i<=n;i++)
#define mod 	1000000007
const int inf = 10000007;
#define endl "\n"
using namespace std;

int power(int b,int e,int m)
{
    if(e==0) return 1;
    if(e&1) return b*power(b*b%m,e/2,m)%m;
    return power(b*b%m,e/2,m);
}
int power(int b,int e)
{
    if(e==0) return 1;
    if(e&1) return b*power(b*b,e/2);
    return power(b*b,e/2);
}

int32_t main(){
	fastio;
	int t;cin>>t;
	while(t--){
		int n;cin>>n;
    cout<<2<<endl;
    int f = n;
    for(int i=n-1;i>=1;i--){
      cout<<f<<" "<<i<<endl;
      f = (f+i+1)/2;
    }
	}
	
	return 0;
}