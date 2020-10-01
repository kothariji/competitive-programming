#include <bits/stdc++.h>
#define lli long long int
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
		lli a3,an3,sum,d,n,a;
        cin>>a3>>an3>>sum;
        n = (2*sum)/(a3+an3);
        d = (an3-a3)/(n-5);
        a = a3-(2*d);
        cout<<n<<endl;
        for(int i=0;i<n;i++)
                cout<<(a+(i*d))<<" ";
        cout<<endl;
	}
	return 0;
}