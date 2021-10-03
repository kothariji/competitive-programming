#include<bits/stdc++.h>
using namespace std;


int main() {

    //Take number of test cases
    int t,n,s;
    cin>>t;

    //Loop over all test cases
    while(t--) {

        //Take number of apples and total available
        cin>>n>>s;

        //Initialize array
        long long dp[n][s+1];
        memset(dp,INT_MAX,sizeof(dp));

        //Take price in first row
        for(int i=0;i<s;i++) {
            cin>>dp[0][i+1];
            if(dp[0][i+1] == -1)
                dp[0][i+1] = INT_MAX;
        }

        //Loop from 1 item to n items
        for(int i=1;i<n;i++) {

            //Try to make sum j with i items available
            for(int j=1;j<=s;j++) {

                //Initialize current sum to value without this item
                dp[i][j] = dp[i-1][j];

                //Now try to select all buckets less than j size
                //see if we find minimum price from current one and previous
                for(int k=1;k<j;k++) {
                    dp[i][j] = min(dp[i][j],dp[0][k]+dp[i-1][j-k]);
                }
            }
        }

        //If cant buy apples print -1
        if(dp[n-1][s] == INT_MAX)
            cout<<-1<<endl;
        else
            cout<<dp[n-1][s]<<endl;
    }
}