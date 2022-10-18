#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	int t;
	cin>>t;

	while(t--){
		int cy = 0, cn = 0;
		int by = 0, bn = 0;
		for(int i = 1; i <= 3; i++){
			int temp;
			cin>>temp;
			if(temp == 0)
				cn += 1;
			else
				cy += 1;
		}

		for(int i = 1; i <= 3; i++){
			int temp;
			cin>>temp;
			if(temp == 0)
				bn += 1;
			else
				by += 1;
		}
		if(cn == bn && cy == by)
			cout<<"Pass"<<endl;
		else
			cout<<"Fail"<<endl;
	}
	return 0;
}
