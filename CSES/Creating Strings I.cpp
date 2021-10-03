#include<bits/stdc++.h>
#include<iostream>
#define all(x) (x).begin(), (x).end()

using namespace std;
typedef long long ll;


void subMain(){
    string s;
    cin >> s;

    sort(all(s));
    vector<string> v;

    do{
        v.push_back(s);
    }while(next_permutation(all(s)));

    cout << v.size() << "\n";
    for(auto x : v){
        cout << x << "\n";
    }
}


int32_t main(){


	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);

	/*ll t;
	cin >> t;
	while(t--){
	    subMain();
	}*/
	subMain();
	return 0;
}
