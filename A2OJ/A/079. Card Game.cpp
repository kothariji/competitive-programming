#include<bits/stdc++.h>
using namespace std;

int main()
{
	char trump;
	cin>>trump;
	string c1,c2;
	cin>>c1>>c2;
	unordered_map <char , int>mp1;
	mp1['6'] = 1;
	mp1['7'] = 2;
	mp1['8'] = 3;
	mp1['9'] = 4;
	mp1['T'] = 5;
	mp1['J'] = 6;
	mp1['Q'] = 7;
	mp1['K'] = 8;
	mp1['A'] = 9;
	if((c1[1] == trump) and (c2[1] != trump))
		cout<<"YES";
	else if((c1[1] != trump) and (c2[1] == trump))
		cout<<"NO";
	else if((c1[1] == trump) and (c2[1] == trump))
	{
		if(mp1[c1[0]] > mp1[c2[0]])
			cout<<"YES";
		else
			cout<<"NO";
	}
	else if(c1[1] == c2[1])
	{
		if(mp1[c1[0]] > mp1[c2[0]])
			cout<<"YES";
		else
			cout<<"NO";	
	}
	else
		cout<<"NO";
	return 0; 

}