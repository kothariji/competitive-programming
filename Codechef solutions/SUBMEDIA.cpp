#include<bits/stdc++.h>
using namespace std;

void solve(vector<int> vals, int k){
	vector<int> res;
	for(int v:vals){
		res.push_back(v);
	}
	sort(res.begin(), res.end());
	int des = res[res.size() - k];
	int med = res[res.size() - k/2 - 1];
	cout<<med<<endl;
	for(int a: vals){
		if(a >= des){
			cout<<a<<" ";
		}
	}
	cout<<endl;
}
int main(int argc, char const *argv[])
{
	int t;
	cin>>t;

	while(t--){
		int n , s;
		cin>>n>>s;

		vector<int> vals;
		
		for(int i = 0 ; i < n ; i ++){
			int temp;
			cin>>temp;
			vals.push_back(temp);
		}
		solve(vals, s);
	}
	return 0;
}
