#include <iostream>
#include<math.h>
#define lli long long int
using namespace std;

//Observe the pattern that the periodicity of a raised something is 4. We only have to find b%4 for last digit. 
int main() {
	long long int t;
	cin>>t;
	while(t--)
	{
		lli a,b,ans;
		cin>>a>>b;
        if(a==0 && b>0)
            ans=0;
        else if(a>0 && b==0)
            ans=1;
        else{
            if(b%4==0)
                b=4;
            else
                b=b%4;
            lli cal=pow(a,b);
                ans=cal%10;
        }
        cout<<ans<<endl;
	}
	return 0;
}


