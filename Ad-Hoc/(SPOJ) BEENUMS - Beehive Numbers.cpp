#include <bits/stdc++.h>
#define lli long long int
#define endl "\n"
using namespace std;

int main()
{
	while(1)
	{
		lli data;
		cin>>data;
		if(data == -1)
			break;
		lli six = 0;
		lli ans  =1;
		int flag = 0;
		while(ans <= data)
		{
			if(ans == data)
			{
				cout<<"Y"<<endl;
				flag =1;
				break;
			}
			six++;
			ans  += six*6;
		}
		if(flag == 0)
			cout<<"N"<<endl;
	}
}
