#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n,k;
		cin >> n >> k;
		ll a[n];
		
		for(int i=0;i<n;i++)
			cin >> a[i];
		// k = min(n,k);

		// if( k<=1e6)
		// {
			for(int i=0;i<k;i++)
			{
				ll A = a[i%n];
				ll B = a[n-i%n-1];
				a[i%n] = A^B;

				cout << A << "^" << B << ": " << a[i%n] << endl;
				if((i+1)%n==0)
					cout << endl;
			}

		cout << endl;
		
		for(int i=0;i<n;i++)
			cout << a[i] << " ";
		cout << endl;
	}
}