#include <bits/stdc++.h>
#define lli long long int
#define endl "\n"
using namespace std;

int main()
{
	vector <int> vn, vp, v0,vextra;
	int n,data,flag = 0;
	cin>>n;
	for(int i=0; i<n;i++)
	{
		cin>>data;
		if(data == 0)
			v0.push_back(data);
		else if(data > 0)
			vp.push_back(data);
		else
		{
			if(flag == 0)
			{
				vn.push_back(data);
				flag = 1;	
			}
			else
				vextra.push_back(data);
			
		}
	}
	if(vextra.size()%2 == 0)
	{
		for(auto c: vextra)
			vp.push_back(c);
	}
	else
	{	
		int flag2 = 0;
		for(auto c: vextra)
		{
			if(flag2 == 0){
				v0.push_back(c);
				flag2 = 1;
			}
			else
				vp.push_back(c);			
		}
	}
	cout<<1<<" "<<vn[0]<<endl;
	cout<<vp.size()<<" ";
	for(auto c: vp)
		cout<<c<<" ";
	cout<<endl;
	cout<<v0.size()<<" ";
	for(auto c: v0)
		cout<<c<<" ";
	return 0;
}