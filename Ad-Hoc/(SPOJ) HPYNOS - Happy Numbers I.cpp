#include <bits/stdc++.h>
#define lli long long int
#define endl "\n"
using namespace std;

int main()
{
	lli n;
	cin>>n;
	string s = to_string(n);
	int count  = 0;
	lli sum = 0;
	bool flag = false;
	while(1)
	{	
		count++;
		for(int i=0; i<s.length(); i++)
		{
			int num = (int)(s[i]-'0'); 
			sum += num*num;
		}
		//cout<<sum<<endl;
		if(sum == 1)
		{
			flag =true;
			break;
		}
		else if(count > 100)
			break;
		else
		{
			s = to_string(sum);
			sum = 0;
		}
	}
	if(!flag)
		cout<<-1;
	else
		cout<<count;
}
