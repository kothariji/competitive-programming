#include <bits/stdc++.h>
#define lli long long int
#define endl "\n"
using namespace std;

int main()
{
	int n,flag =0;
	cin>>n;
	string a[n];
	for(int i=0; i<n; i++)
		cin>>a[i];
	for(int i=0 ;i<n; i++)
	{
		int count = 0;
		for(int j=0; j<n; j++)
		{
			if((i-1 >= 0) and (a[i-1][j] == 'o')){
				count++;
				//cout<<"YES1"<<end;
			}
			if((i+1 < n) and (a[i+1][j] == 'o')){
				count++;
				//cout<<"YES2"<<end;
			}
			if((j-1 >= 0) and (a[i][j-1] == 'o')){
				count++;
				//cout<<"YES3"<<end;
			}
			if((j+1 < n) and (a[i][j+1] == 'o')){
				count++;
				//cout<<"YES4"<<end;
			}
			if((count %2) != 0)
			{
				flag =1;
				break;
			}
		}
		if(flag == 1)
			break;
		
	}
	if(flag == 0)
		cout<<"YES";
	else
		cout<<"NO";


	return 0;
}