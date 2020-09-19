#include <bits/stdc++.h>
#define lli long long int
#define endl "\n"
using namespace std;

int main()
{
	lli n;
	cin>>n;
	lli N = 1e5 + 1;
	lli a[N];
	a[0] =0;
	for(lli i=1; i < N; i++)
		a[i] = a[i-1] + i;

	for(int i = 1; i < N; i++)
        if(binary_search(a + 1, a + N, n - a[i])) {
            cout << "YES" << endl;
            return 0;
        }
        
    cout << "NO" << endl;

	return 0;
}