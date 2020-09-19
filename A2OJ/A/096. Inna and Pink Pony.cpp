#include <bits/stdc++.h>
#define lli long long int
#define endl "\n"
using namespace std;


int a,b;

int solve(int i,int j,int n,int m) {
	
	//corner case
	if(i==n and j==m) 
		return 0;
	
	int step,dx,dy;
	dx = abs(n-i);
	dy = abs(m-j);
	
	if(dx%a==0 and dy%b==0) {
		if((dx/a) % 2 == (dy/b) % 2) 
			return max((dx/a),(dy/b));
	}
	
	return INT_MAX;
}

int main() 
{
	
	int row,col,x,y;
	int minans=INT_MAX;
	cin>>row>>col>>x>>y>>a>>b;
	minans = min(minans,solve(x,y,1,1));
	minans = min(minans,solve(x,y,1,col));
	minans = min(minans,solve(x,y,row,col));
	minans = min(minans,solve(x,y,row,1));
	
	if(minans==INT_MAX or ((x+a>row and x-a<1) or (y+b>col and y-b<1)) and minans!=0)
		cout<<"Poor Inna and pony!";
	else 
		cout<<minans;
	
	return 0;
}
