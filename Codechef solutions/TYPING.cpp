//****** author - anonymous377 ********
#include<bits/stdc++.h>
using namespace std;

main()
{
	fast
	int t;
	cin>>t;
	while(t--)
	{
	    int n; cin>>n;
	    
	    int sum = 0;
	    map<char,int> hand;
	    //0 =left hand
	    hand['d']=0;
	    hand['f']=0;
	    //1 = right hand
	    hand['j']=1;
	    hand['k']=1;
	    
	    map<string,int> mp;
	    
	    for(int i=0;i<n;i++){
	       string s; cin>>s;
	       
	       if(mp.find(s) != mp.end()){
	           sum += mp[s]/2;
	           continue;
	       }
	       //if its a new word
	       int cur_sum=0;
	       
	       int prev = 1-hand[s[0]];
	       for(char ch : s){
	           if(hand[ch] == prev)
	                cur_sum += 4;
	           else
	                cur_sum += 2;
	           prev = hand[ch];
	       }
	       mp[s] = cur_sum;
	       sum += cur_sum;
	    }
	    cout<<sum;
	    cout<<"\n";
	}
	cerr<<"time taken: "<<(float)clock()/CLOCKS_PER_SEC<<endl;
}
