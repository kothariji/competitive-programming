#include <bits/stdc++.h>
#define lli long long int
#define endl "\n"
using namespace std;
 
int main()
{
 	int n,m,data;
 	cin>>n>>m;
 	for(int i=0; i<n; i++)
 	{
 		for(int j=0; j<m; j++)
 		{
 			cin>>data;
 			if(((i == 0) or i==(n-1)) and (data == 1))
 			{
 				cout<<2;
 				return 0;
 			}
 			else if(((j == 0) or j==(m-1)) and (data == 1))
 			{
 				cout<<2;
 				return 0;
 			}
 		}
 	}
 	cout<<4;
 	return 0;

}