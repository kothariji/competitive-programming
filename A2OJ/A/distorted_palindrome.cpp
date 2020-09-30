#include <bits/stdc++.h> 
using namespace std; 

// Function to Count minimum swap 
int countSwap(string s) 
{ 
	int n = s.size();
	if(n<=1)
	    return 0;
	unordered_map<char,int>m;
	for(int i=0;i<n;i++){
	    m[s[i]]++;
	} 
	for(auto i=m.begin();i!=m.end();i++){
	    if((i->second%2)==1 &&(n%2==0))
	        return -1;
	}
	int swapCount = 0;
	int l=0,r=n-1;
	while(l<r){
	    if(s[l]!=s[r]){
	        int r1=r,l1=l;
	        while(r1>=l){
	            if(s[r1]==s[l])
	                break;
	            else
	                r1--;
	        }
	        while(l1<=r){
	            if(s[l1]==s[r])
	                break;
	            else
	                l1++;
	        }
	        if((l1==r) && (r1==l)){
	            return -1;
	        }
	        if(abs(l1-l)>=abs(r1-r)){
	            for(int i=r1;i<r;i++){
	                char temp = s[i];
	                s[i] = s[i+1];
	                s[i+1]=temp;
	            }
	            swapCount += abs(r1-r);
	        }
	        else{
	            for(int i=l1;i>l;i--){
	                char temp = s[i];
	                s[i] = s[i-1];
	                s[i-1]=temp;
	            }
	            swapCount += abs(l1-l);
	        }
	    }
	    l++;
	    r--;
	}
	return swapCount;
} 

// Driver code 
int main() 
{ 
	while(cin){
	    string str;
	    cin>>str;
	    if(str.length()==1 && str[0]=='0')
	        break;
	    int ans = countSwap(str);
	    if(ans==-1)
	        cout<<"Impossible"<<endl;
	    else
	        cout<<ans<<endl;
	} 

	return 0; 
} 
