#include <bits/stdc++.h>
#define lli long long int
#define endl "\n"
using namespace std;


int editDistDP(string str1, string str2, int m, int n) 
{ 

    int dp[m + 1][n + 1]; 
 
    for (int i = 0; i <= m; i++) { 
        for (int j = 0; j <= n; j++) { 
     
            if (i == 0) 
                dp[i][j] = j; 
  
 
            else if (j == 0) 
                dp[i][j] = i; 
  
        
            else if (str1[i - 1] == str2[j - 1]) 
                dp[i][j] = dp[i - 1][j - 1]; 
  
            
            else
                dp[i][j] = 1 + min(dp[i][j - 1],  min(dp[i - 1][j], dp[i - 1][j - 1])); 
        } 
    } 
  
    return dp[m][n]; 
} 

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s1, s2;
		cin>>s1>>s2;
		cout << editDistDP(s1, s2, s1.length(), s2.length())<<endl; 
	}

	return 0;
}
