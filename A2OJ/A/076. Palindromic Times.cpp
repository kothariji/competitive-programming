#include<bits/stdc++.h>
using namespace std;

int main()
{
	string s1;
	cin>>s1;
	string t1, t2;
	t1 = s1[0];
	t1 += s1[1];
	t2 = s1[3];
	t2 += s1[4];
	int it1 = stoi(t1);
	int it2 = stoi(t2);
	while(1)
	{
		it2++;
		if(it2 == 60)
		{
			it2 = 0;
			it1++;
			if(it1 == 24)
			{
				cout<<"00:00";
				return 0;
			}
		}
		string sit1 = to_string(it1);
		string sit2 = to_string(it2);
		if(it1 < 10)
			sit1 = '0' + sit1;
		if(it2 < 10)
			sit2 = '0' + sit2;
		string rsit2 = sit2;
		reverse(sit2.begin(), sit2.end());
		if(sit1 == sit2)
		{
			cout<<sit1<<":"<<rsit2;
			return 0;
		}
	}
	return 0; 

}