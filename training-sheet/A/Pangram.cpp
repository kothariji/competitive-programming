#include <bits/stdc++.h>
# define lli long long int
using namespace std;
int main()
{
	int n;
	cin>>n;
	string s;
	cin>>s;
	transform(s.begin(),s.end(),s.begin(),::tolower);
	int A[26]={0};
	for(int i=0;i<s.length();i++)
	{
		A[s[i]-'a']++;
	}
	int flag=0;
	for(int i=0;i<26;i++)
	{
		if(A[i]==0)
		{
			flag=1;
			cout<<"NO"<<endl;
			break;
		}
	}
	
	if(flag==0)
	{
		cout<<"YES"<<endl;
	}
return 0;	
}
