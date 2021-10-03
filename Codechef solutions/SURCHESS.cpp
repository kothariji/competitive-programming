// problem link: https://www.codechef.com/OCT18B/problems/SURCHESS/

#include<bits/stdc++.h>
#define ll long long 
#define fr(v,s,n) for(int v=s;((s<n)?v<n:v>n);((s<n)?v++:v--))
#define debug(p) cout<<#p<<' '<<p<<'\n';
#define debuga(a,i) cout<<#a<<"["<<i<<"]"<<" "<<a[i]<<"\n";
#define debugal(a) for(int v=0;v<(sizeof(a)/sizeof(a[0]));v++) cout<<#a<<"["<<v<<"]"<<" "<<a[v]<<"\n";
#define debugm(a,i,j) cout<<#a<<"["<<i<<"]["<<j<<"]"<<" "<<a[i][j]<<"\n";
using namespace std;

#define flip(v) (v == '0' ? '1': '0')
#define MAXn 202
#define MAXl 40001

int n,m;
string board[MAXn];
int dp[2][MAXn][MAXn];
int len[MAXl];


void evaluate(int i,int j,int xx, int yy, int k)
{
	int v1 = dp[k][xx][yy];
	int v2 = (i>0 && j>0) ? dp[k][i-1][j-1] : 0; 
	int v3 = (i>0) ? dp[k][i-1][yy] : 0;
	int v4 = (j>0) ? dp[k][xx][j-1] : 0;
	int val = v1 + v2 - v3 - v4;
	int nl = min(xx-i+1,yy-j+1);
	
	len[val] = max(len[val],nl);
}

int main()
{
	cin>>n>>m;
	
	fr(i,0,n) cin>>board[i];
	
	char idealboard[2][n][m];
	idealboard[0][0][0] = '0';
	fr(i,1,m)
	{
		idealboard[0][0][i] = flip(idealboard[0][0][i-1]);
	}
	fr(i,1,n)
	{
		idealboard[0][i][0] = flip(idealboard[0][i-1][0]);
		fr(j,1,m)
		{
			idealboard[0][i][j] = flip(idealboard[0][i][j-1]);
		}	
	}
	
	fr(i,0,n) fr(j,0,m) idealboard[1][i][j] = flip(idealboard[0][i][j]);
	
	
	
	fr(k,0,2) fr(i,0,n) fr(j,0,m) dp[k][i][j] = 0;
	
	
	fr(k,0,2) fr(i,0,n) fr(j,0,m) if(board[i][j] != idealboard[k][i][j]) dp[k][i][j] = 1;
	 
	fr(k,0,2) fr(i,1,m) dp[k][0][i] = dp[k][0][i-1] + dp[k][0][i];
	fr(k,0,2) fr(i,1,n) dp[k][i][0] = dp[k][i-1][0] + dp[k][i][0];
	
	fr(k,0,2) fr(i,1,n) fr(j,1,m) dp[k][i][j] = dp[k][i-1][j] + dp[k][i][j-1] - dp[k][i-1][j-1] + dp[k][i][j];
	
	int minc = min(dp[0][n-1][m-1],dp[1][n-1][m-1]);
	
	
	fr(k,0,2) fr(i,0,n) fr(j,0,m)
	{
		int xx = i;
		int yy = j;
		while(xx < n && yy < m)
		{
			evaluate(i,j,xx,yy,k);
			xx++;
			yy++;
		}
	}
	
	
	
	fr(i,1,max(dp[0][n-1][m-1],dp[1][n-1][m-1]))
	{
		len[i] = max(len[i],len[i-1]);
	}
	int q;
	cin>>q;
	while(q--)
	{
		int k;
		cin>>k;
		if(k > minc) cout<<min(m,n);
		else
		{
			cout<<len[k];
		}
		cout<<"\n";
	}
}
