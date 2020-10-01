#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;
#define llt long long int
#define gc getchar
void scanint(long long int &x)
{
    register long long int c = gc();
    x = 0;
    for(;(c<48 || c>57);c = gc());
    for(;c>47 && c<58;c = gc()) {x = (x<<1) + (x<<3) + c - 48;}
}
int fast_pow(long long base, long long n,long long M) 
{
    if(n==0)
       {return 1;}
    if(n==1)
    {return base;}
    long long halfn=fast_pow(base,n/2,M);
    if(n%2==0)
        {return ( halfn * halfn ) % M;}
    else
        {return ( ( ( halfn * halfn ) % M ) * base ) % M;}
}
int main()
{
	llt t;
	scanint(t);
	while(t--)
	{
	    llt n;
	    scanint(n);
	    llt k,p;
	    k=1000000007;
	    p=(fast_pow(2,n,k)-1);
		cout<<p<<endl;
	}
}
 
