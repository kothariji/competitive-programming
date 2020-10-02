//https://www.spoj.com/problems/BISHOPS/
#include<bits/stdc++.h>
using namespace std;

void mul(string s,string l,char *res)
{
	int len1=s.length(),len2=l.length(),i,j;
	int carry=0,index=-1,maxin=-1;
	for(i=len1-1;i>=0;i--)
	{
		index=len1-i-2;
		for(j=len2-1;j>=0;j--)
		{
			int val=carry+(s[i]-'0')*(l[j]-'0');
			res[++index]+=val%10;
			carry=val/10;
			if(res[index]>'9')
			{
				res[index]=res[index]-'9'-1+'0';
				carry++;
			}
		}
		while(carry)
		{
			res[++index]+=carry%10;
			carry/=10;
		}
		if(index>maxin)
			maxin=index;
	}
	res[++maxin]='\0';
}

int main()
{
	string n;
	while(cin>>n)
	{
		if(n=="1"||n=="0")
		{
			if(n=="1")
				cout<<1;
			else
				cout<<0;
			cout<<endl;
			continue;
		}
		string s="2";
		char res[500];
		int i;
		for(i=0;i<500;i++)
			res[i]='0';
		mul(n,s,res);
		int len=strlen(res);
		i=0;
		int carry=0;
		res[0]-=2;
		while(i<len&&res[i]-carry<'0')
		{
			{
				res[i]=res[i]+10-carry;
				carry=1;
			}
			i++;
		}
			res[i]-=carry;
		i=len-1;
		while(i>=0&&res[i]=='0')
			i--;
		while(i>=0)
		{
			cout<<res[i--];
		}
		cout<<endl;
	}
	return 0;
}
