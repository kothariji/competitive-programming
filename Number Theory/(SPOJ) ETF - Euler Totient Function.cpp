#include <iostream>
using namespace std;

int etf[1000001];

void etfsieve()
{
	for(int i=1; i<1000001; i++)
		etf[i] = i;
	
	for(int i=2; i<1000001; i++)
	{
		if(etf[i] == i)
		{
			for(int j = i; j<1000001; j+=i)
			{
				etf[j] /= i;
				etf[j] *= (i-1);
				
			}
		}
	}
		
}
int main() {
	// your code goes here
	int t;
	cin>>t;
	etfsieve();
	while(t--)
	{
		int data;
		cin>>data;
		cout<<etf[data]<<endl;
	}
	return 0;
}