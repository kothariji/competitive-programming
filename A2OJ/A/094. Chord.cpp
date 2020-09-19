#include <bits/stdc++.h>
#define lli long long int
#define endl "\n"
using namespace std;

string all[24] = {"C", "C#", "D", "D#", "E", "F", "F#", "G", "G#", "A", "B", "H", "C", "C#", "D", "D#", "E", "F", "F#", "G", "G#", "A", "B", "H"};

int idx(string s)
{
	for(int i=0; i<12; i++)
		if(all[i] == s)
			return i;

}

int main()
{
	

	vector <string> s1(3);
	cin>>s1[0]>>s1[1]>>s1[2];
	sort(s1.begin(), s1.end());
	do
	{
		int id1 = idx(s1[0]);
		int id2;
		for(int i=id1+1; i< 24; i++)
			if(all[i] == s1[1])
			{
				id2 = i;
				break;
			}
		int id3;
		for(int i=id2+1; i< 24; i++)
			if(all[i] == s1[2])
			{
				id3 = i;
				break;
			}
			if((id2-id1 == 4) and (id3-id2 == 3))
			{
				cout<<"major";
				return 0;
			}
			if((id2-id1 == 3) and (id3-id2 == 4))
			{
				cout<<"minor";
				return 0;
			}
	}while(next_permutation(s1.begin(),s1.end()));

	cout<<"strange";
	return 0;
}