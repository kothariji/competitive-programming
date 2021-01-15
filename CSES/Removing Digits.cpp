#include<bits/stdc++.h>
 
using namespace std;
 
#define int long long
#define M 1000000007
#define N 300010
 
signed main(){
 
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
	int n;
	cin >> n;
	int dp[n+1];
	for(int i=0;i<=n;i++)
		dp[i]=INT_MAX;
	dp[0]=0;
	for(int i=1;i<=n;i++){
		int num=i;
		while(num>0){
			int val=num%10;
			num/=10;
			dp[i]=min(dp[i],dp[i-val]+1);
		}
	}
	cout << dp[n] << endl;
}