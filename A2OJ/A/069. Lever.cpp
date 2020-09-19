#include <bits/stdc++.h>
#define lli long long int
#define endl "\n"
using namespace std;
 
int main()
{
 	string s;
 	cin>>s;
 	long long int left = 0;
 	long long int leftidx, rightidx;
 	long long int right = 0;
	long long int pivot;
	long long int lw = 0,rw = 0;
 	for(long long int i=0; i< (long long int)s.length(); i++)
 	{
 		if(s[i] == '^')
 		{
 			pivot = i;
 			break;
 		}

 	}
 	for(long long int i=0; i<pivot; i++)
 	{
 		if(s[i] != '=')
 		{
 			long long int val = (long long int)(s[i] - '0');
 			long long int dis = pivot - i;
 			lw += dis*val; 
 		}
 	}
 	for(long long int i=pivot+1; i< (long long int)s.length(); i++)
 	{
 		if(s[i] != '=')
 		{
 			long long int val = (long long int)(s[i] - '0');
 			long long int dis = i - pivot;
 			rw += dis*val; 
 		}
 	}
 	if(rw > lw)
 		cout<<"right";
 	else if(lw > rw)
 		cout<<"left";
 	else
 		cout<<"balance";
}