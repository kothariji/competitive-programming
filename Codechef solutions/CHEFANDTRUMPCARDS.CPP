// https://www.codechef.com/SEPT20B/problems/CRDGAME2 //
// Babitha's code //
#include <bits/stdc++.h>

using namespace std;

#define int long long
#define mod 1000000007

int power(int x, int y)
{
	int res = 1; // Initialize result

	while (y > 0)
	{
		// If y is odd, multiply x with result
		if (y & 1)
		{
			res = res * x;
			res %= mod;
		}
		// y must be even now
		y = y >> 1; // y = y/2
		x = x * x;	// Change x to x^2
		x%=mod;		//x %= mod;
	}
	return res;
}
unsigned long long power(unsigned long long x, 
                         int y, int p) 
{ 
    unsigned long long res = 1; // Initialize result 
  
    x = x % p; // Update x if it is more than or 
    // equal to p 
  
    while (y > 0) { 
        // If y is odd, multiply x with result 
        if (y & 1) 
            res = (res * x) % p; 
  
        // y must be even now 
        y = y >> 1; // y = y/2 
        x = (x * x) % p; 
    } 
    return res; 
} 
  
// Returns n^(-1) mod p 
unsigned long long modInverse(unsigned long long n, int p) 
{ 
    return power(n, p - 2, p); 
} 

unsigned long long nCrModPFermat(unsigned long long n, 
                                 int r, int p) 
{ 
    // Base case 
    if (r == 0) 
        return 1; 
  
    unsigned long long fac[n + 1]; 
    fac[0] = 1; 
    for (int i = 1; i <= n; i++) 
        fac[i] = (fac[i - 1] * i) % p; 
  
    return (fac[n] * modInverse(fac[r], p) % p * modInverse(fac[n - r], p) % p) % p; 
} 

int32_t main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;
		int c[n];
		map<int,int> m;
		int maxi=0;
        for (int i = 0; i < n;i++)
        {
            cin>>c[i];
		    m[c[i]]++;
		    maxi=max(maxi,c[i]);
        }
        int ans=power(2,n);
		if(m[maxi]%2==0){
		    int p=power(2,n-m[maxi]);
		    p*=nCrModPFermat(m[maxi],m[maxi]/2,mod);
		    p%=mod;
		    ans-=p;
		    ans%=mod;
		    ans+=mod;
		}
		ans%=mod;
		cout<<ans<<endl;
	}
	return 0;
}
