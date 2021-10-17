#include<bits/stdc++.h>
using namespace std;

void solve(int myspeed, int topRacer, int drugBoost, int druglimit){
	int drugUsed = 0;
	while(true){
		if(drugUsed > druglimit){
			cout<<"No"<<endl;
			break;
		}
		if(myspeed > topRacer && drugUsed < druglimit){
			cout<<"Yes"<<endl;
			break;
		}
		else if(drugBoost <= 0){
			cout<<"No"<<endl;
			break;
		}
		else{
			drugUsed += 1;
			myspeed += drugBoost;
			
		}
	}
}
int main(int argc, char const *argv[])
{
	int t;
	cin>>t;

	while(t--){
		int n, k, l;
		cin>>n>>k>>l;
		int part;
		int maxVal = 0;
		for(int i = 1; i <= n-1; i+=1){
			int temp;
			cin>>temp;
			if(temp > maxVal){
				maxVal = temp;
			}
		}
		cin>>part;
		solve(part, maxVal, k, l);
	}
	return 0;
}
