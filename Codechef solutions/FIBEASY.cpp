author: kevinmathew


#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define MOD 10ll

unordered_map<ll,vector<vector<ll>>> dp;

vector<vector<ll>> multiply(vector<vector<ll>> &a,vector<vector<ll>> &b){
	
	vector<vector<ll>> c(2,vector<ll>(2,0));
	
	for(ll i=0;i<2;i++){
		for(ll j=0;j<2;j++){
			for(ll k=0;k<2;k++){
				c[i][j]+=(a[i][k]*b[k][j])%MOD;
				c[i][j]%=MOD;
			}
		}
	}
	
	return c;
}


vector<vector<ll>> power2(vector<vector<ll>> &a,ll b){
	
	if(b==1){
		return a;
	}
	
	if(dp.find(b)!=dp.end()){
	    return dp[b];
	}
	
	vector<vector<ll>> small_ans=power2(a,b/2);
	small_ans=multiply(small_ans,small_ans);
	
	if(b&1){
		small_ans=multiply(small_ans,a);
	}
    
    dp[b]=small_ans;
	return small_ans;
}

ll power1(ll a,ll b){
	
	ll ans=1;
	
	while(b>0){
		if(b&1){
			ans=(ans*a);
		}
		a=a*a;
		b=b>>1;
	}
	
	return ans;
}

int main(){
	
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	
	ll t;
	cin>>t;
	
	while(t--){
		
		ll n;
		cin>>n;
		
		ll cnt=0;
		
	    while(n>1){
	    	cnt++;
	    	n=n/2;
	    }
	    
	    n=power1(2,cnt);
		
        if(n==1){
           cout<<"0"<<endl;
           continue;
        }
          
         if(n==2){
           cout<<"1"<<endl;
           continue;
        }

		vector<vector<ll>> t(2,vector<ll>(2,0));
		t[0][1]=1;
		t[1][0]=1;
		t[1][1]=1;
		
		vector<ll> f(2,0);
		f[1]=1;
		vector<vector<ll>> T=power2(t,n-1);
		
		ll res=0;
		
		for(ll i=0;i<2;i++){
			res+=(T[0][i]*f[i])%MOD;
			res%=MOD;
		}
		
		cout<<res<<endl;
	}
	}
