#include<bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    int temp;
	    vector<int> present;
	    vector<int> processed;
	    map<int, int> final;
	    cin>>n;
	    
	    for(int i = 0; i < n; i++){
	        cin>>temp;
	        present.push_back(temp);
	    }
	    
	    for(int i = 0; i < n-1; i++){
	        
	        cin>>temp;
	        processed.push_back(temp);
	    }
	    
	    sort(present.begin(), present.end());
	    sort(processed.begin(), processed.end());
	    
	    for(int i = 0; i < 2; i++){
	        for(int j = 0 ; j < processed.size(); j++){
	            temp = processed[j] - present[j+i];
	            if(temp < 0)
	                break;
	            if(final.find(temp) == final.end()){
	                final[temp] = 1;
	            }else{
	                final[temp] += 1;
	            }
	        }
	    }
	    int maxVal = INT_MAX;
        for(auto it: final){
            if (it.second >= n-1){
                if(it.first > 0)
                maxVal = min(maxVal,it.first);
            }
        }
        cout<<maxVal<<endl;
	}
	return 0;
}
