#include <iostream>
#include <vector>
using namespace std;
#define N 100
vector<int>arr(N);
int main(){
	int t,n,m;
	cin >> t;
	while(t--){
		cin>>m>>n;
		for(int i = 0;i < n;i++)
			cin >> arr[i];
		int dp[m + 1];
        for(int i=0;i<m+1;i++)
        dp[i]=0;
		for(int i = 0;i < n;i++){
			dp[arr[i]] = 1;
		}
		for(int i = 0;i <= m;i++){
			bool win = false;
			for(int j = 0; j  < n;j++){
				if(i - arr[j] >= 0){
					if(dp[i - arr[j]] == 0){
						win = true; break;
					}
				}
			}
			if(win == true){
				dp[i] = 1;
			}
		}
		cout<<(dp[m]?"Zen\n":"Zenny\n");
	}
	return 0;
} 