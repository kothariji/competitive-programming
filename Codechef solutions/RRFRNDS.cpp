#include<bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int N;
	cin>>N;
	vector<vector<int>> A(N);
	vector<string> S(N);
	for(int i=0;i<N;i++){
		cin>>S[i];
		for(int j=0;j<N;j++){
			if(S[i][j] == '1')
				A[i].push_back(j);
		}
	}
	
	int res = 0;
	for(int i=0;i<N;i++){
		for(int j=i+1;j<N;j++){
			if(S[i][j] != '1'){
				for(int k : A[i]){
					if(S[k][j] == '1'){
						res++;
						break;
					}
				}
			}
		}
	}

	cout<<(2*res)<<endl;

	return 0;
}
