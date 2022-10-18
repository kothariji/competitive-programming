#include <bits/stdc++.h>
using namespace std;
const int N = 1e7 + 10;
int arr[N];

int main()
{
    int n,m;
    cin>>n>>m;
    for (int i = 1; i <= n; ++i)
    {
    	int x; cin>>x;
    	if(x%m==0) arr[i]=x/m - 1;
    	else arr[i] = x/m;
    }
    int f=0, max=arr[1];
    for ( int i = 1 ; i <= n ; i ++) 
    { 
        if ( arr [ i ] > max )  
            max = arr [ i ] ;  
    }
    for (int i = n; i >=1; --i)
    {
    	if(arr[i]==max and max!=0)
    	{
    		cout<<i;
    		f=1;
    		break;
    	}	
    }
    if(f==0 and max==0) cout<<n;
}
