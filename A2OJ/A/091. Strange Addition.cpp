#include <bits/stdc++.h>
#define lli long long int
#define endl "\n"
using namespace std;

int main()
{
	int n;
	cin>>n;
	vector <string> v0, v1;
	int counti = 0, flag =0;
	string a9,a0,extra;
	int count0(0), count100(0),counta0(0), count9(0), count99(0); 
	for(int i=0; i<n; i++)
	{
		string data;
		cin>>data;
		if(data == "0")
			count0++;
		else if(data == "100")
			count100++;
		else if(data.length() == 1)
		{
			count9++;
			a9 = data;
		}
		else if(data[data.length()-1] == '0')
		{
			counta0++;
			a0 = data;
		}
		else{
			count99++;
			extra = data;
		}
	}
	if(count0)
		v1.push_back("0");
	if(count100)
		v1.push_back("100");
	if(count9)
		v1.push_back(a9);
	if(counta0)
		v1.push_back(a0);
	if(!count9 && !counta0 && count99) 
		v1.push_back(extra);

	cout<<v1.size()<<endl;
	for(auto c: v1)
		cout<<c<<" ";
	return 0;
}