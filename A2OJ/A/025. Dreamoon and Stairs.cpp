#include <bits/stdc++.h>
#define lli long long int
#define endl "\n"
using namespace std;

int main()
{
	int n,m;
	int step2,step1;
	cin>>n>>m;
	step2 = n/2;
	step1 = n%2;
	int minsteps = step1 + step2;
	int flag = 0;
	while((minsteps%m) != 0)
	{
		if(step2 != 0)
		{
			step2--;
			minsteps--;
			minsteps += 2;
			continue;
		}
		else
		{
			flag = 1;
			break;
		}
	}
	if(flag == 0)
		cout<<minsteps;
	else
		cout<<-1;
	return 0;
}