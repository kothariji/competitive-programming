#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
 
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
 
    int n, k;
    multiset<int> ans;
    cin >> n;
	for (int i=0;i<n;++i){
		cin >> k;
		auto it = ans.lower_bound(k);
		if (it==ans.end()) ans.insert(k); 
		else{
			ans.erase(it);
			ans.insert(k);
		}
	}
	cout << ans.size() << "\n";
	return 0;
}