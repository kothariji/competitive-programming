#include <iostream>
using namespace std;

int main() {
	// your code goes here
	while(1)
	{
		float n;
		cin>>n;
		if(n == 0.00)
			break;
		float ans = 0.00;
		int count = 1;
		while (ans < n)
		{			
			ans = ans + (float)1/(float)(1+count); 
			count++;
		}
		cout<<count-1<<" card(s)"<<endl;
	}
	return 0;
}