#include <bits/stdc++.h>
#define lli long long int
#define endl "\n"
using namespace std;

int main()
{
	float n, l;
	cin>>n>>l;
	vector <float> v1(n);
	for(float i =0; i<n; i++)
		cin>>v1[i];
	sort(v1.begin(), v1.end());
	float maxdist = v1[0] - 0;
	float div = 2;
	for(float  i =1; i<n; i++)
		if(((v1[i] - v1[i-1])/div) > maxdist)
			maxdist = (v1[i] - v1[i-1])/div;
	if(maxdist <(l-v1[n-1]))
		maxdist = (l-v1[n-1]);
	cout<<setprecision(9)<<fixed<<maxdist;
	return 0;
}