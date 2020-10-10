#include<bits/stdc++.h>
#define fastio 	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define unmap  	unordered_map<int,int>
#define	unset	unordered_set<int>
#define maxpq  	priority_queue<int>
#define minpq  	priority_queue<int, vector<int>, greater<int>>
#define pb 		push_back		
#define ll 		long long
#define ull     unsigned ll
#define ff 		first
#define ss 		second//typedef second ss;
#define foton(i,n) for(int i=0;i<n;i++)
#define	faton(i,a,n)	for(int i=a;i<=n;i++)
#define mod 	1000000007
const int inf = 10000007;
#define endl "\n"
using namespace std;

int gcd(int a,int b){
    if(b==0) 
    return a;

    return gcd(b,a%b);
}
int main(){
	fastio;
	/*
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    */
	int t;cin>>t;
	while(t--){
        int n;cin>>n;
        int f = 0;
        faton(i,1,n){
            int a;cin>>a;
            if(gcd(a,i) != a){
                f = 1;
            }
        }
        if(f) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
	}
	
	return 0;
}