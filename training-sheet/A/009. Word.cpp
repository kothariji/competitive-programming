#include <bits/stdc++.h>
#define lli long long int
#define endl "\n"
using namespace std;
 
int main()
{
	string s1;
	cin>>s1;
	int cu =0, cl=0;
	for(auto c: s1)
		if(isupper(c))
			cu++;
		else
			cl++;
	if(cu>cl)
		transform(s1.begin(), s1.end(), s1.begin(), ::toupper);
	else
		transform(s1.begin(), s1.end(), s1.begin(), ::tolower);
	cout<<s1;

}