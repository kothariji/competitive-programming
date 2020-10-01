
/*
    author-yogesh kansal
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int t;
	cin>>t;
	while(t--)
	{
		
	   long long i=1,ans=0,pre,fin,n,temp,b=0,index=1,res;
	   cin>>n;
	   cout<<1<<" "<<i<<endl;
	   cin>>pre;
	   //cout<<pre<<" "<<ans<<endl;
	   ans+=(pre%2==0)?(n%2==0?0:1):(n%2==0?1:0);
	   
	   while(1)
	   {
	   		index += (1<<i);
	   		cout<<1<<" "<<index<<endl;
	   		cin>>fin;
	   		if(fin== -1)
	   		{
	   			b=0;
				break;	
			}
	   		temp=(n-((fin-pre)/(1<<i)))/2;
	   		if(temp%2==1)
	   			ans+=(1<<(i));
	   			
	   		//cout<<temp<<" "<<ans<<" "<<i<<endl;
	   			
			pre=fin;
			i++;
	   		if(i==20)
	   		{
	   			cout<<2<<" "<<ans<<endl;
	   			cin>>res;
	   			if(res==1)
	   			{
	   				b=1;
	   				break;
	   			}
				else
				{
					b=0;
					break;
				}
			}
	   		
	   		
	   }
	   if(b==1)
	   		continue;
	   	else
	   		break;
	   	
	   	
	}
	return 0;
}