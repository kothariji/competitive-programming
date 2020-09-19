#include <bits/stdc++.h>
#define lli long long int
#define endl "\n"
using namespace std;

int main()
{
	int  ch1, ch2;
	cin>>ch1>>ch2;
	int win1 = 0, tie = 0, win2 = 0;
	for(int i=1; i<=6; i++)
	{
		if(abs(ch1-i) < abs(ch2-i))
			win1++;
		else if(abs(ch1-i) > abs(ch2-i))
			win2++;
		else
			tie++;
	}
	cout<<win1<<" "<<tie<<" "<<win2;

	return 0;
}