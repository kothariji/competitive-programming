#include<bits/stdc++.h>
#include<iostream>
using namespace std;
 
#define mod 1000000007
#define all(x) (x).begin(), (x).end()
typedef long long ll;

 
const int mx = 2e5;
int n, m, k, a[mx], b[mx];

void subMain(){
    cin >> n >> m >> k;
    for(int i = 0; i < n; ++i) cin >> a[i];
    for(int i = 0; i < m; ++i) cin >> b[i];
    sort(a, a+n);
    sort(b, b+m);
    int ans = 0;
    for(int i = 0, j = 0; i < n; ++i){
        while(j < n && b[j] < a[i]-k)
            j++;
        if(j < n && b[j] <= a[i]+k)
            ans++, j++;
    }
    cout << ans << "\n";
}
 
int32_t main(){
 
 
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
 
	/*ll t=1;
	cin >> t;
	while(t--){
 
	}*/
	subMain();
	return 0;
}