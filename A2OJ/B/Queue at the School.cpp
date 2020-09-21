#include <bits/stdc++.h>
#define lli long long int
#define endl "\n"
using namespace std;

int main()
{
	int n , t;
	cin>>n>>t;
	string s;
	cin>>s;
	while(t--){
		for(int i = 0; i<n-1; i++){
			if(s[i] == 'B' && s[i+1] == 'G'){
				swap(s[i], s[i+1]);
				i++;
			}
		}
	}
	cout<<s;
	return 0;
}