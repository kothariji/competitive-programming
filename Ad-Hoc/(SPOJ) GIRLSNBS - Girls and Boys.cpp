#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	while(1)
	{
		int g,b;
		cin>>g>>b;
		if(g==-1 and b==-1)
			break;
		if(b == 0)
		{
			cout<<g<<endl;
			continue;
		}
		if(g == 0)
		{
			cout<<b<<endl;
			continue;
		}
		if(g == b)
		{
			cout<<1<<endl;
			continue;
		}	
		if(g > b)
		{
			swap(g,b);
		}	
		cout<<ceil((float)b/((float)g + (float)1))<<endl;
	}
	return 0;
}