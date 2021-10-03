//RSIGNS - codechef

#include <bits/stdc++.h>
#define m 1000000007
using namespace std;
int exponentMod(int A, int B, int C) 
{ 
    if (A == 0) 
        return 0; 
    if (B == 0) 
        return 1; 
    long y; 
    if (B % 2 == 0) { 
        y = exponentMod(A, B / 2, C); 
        y = (y * y) % C; 
    } 
    else { 
        y = A % C; 
        y = (y * exponentMod(A, B - 1, C) % C) % C; 
    } 
  
    return (int)((y + C) % C); 
} 

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
		unsigned long long k,ans=1;
		cin>>k;
		//ans=pow(2,k-1)*10;
		ans=exponentMod(2,k-1,m);
		ans=(ans*10)%m;
		cout<<ans<<endl;
	}
	return 0;
}