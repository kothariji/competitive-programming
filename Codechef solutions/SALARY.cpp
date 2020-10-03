#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	// slmax second last maximum
	int t,slmax,max,index,it=0,min;
	cin>>t;
	while(t--)
	{
		int n,toadd,it=0;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++)
			cin>>a[i];
		sort(a,a+n);
		min=a[0];
		while(a[0]!=a[n-1])
		{
			// max is last element
			max=a[n-1];
			// 	second last element
			index=n-2;
			// find second last max
			while(a[index]==max)
			{
				index--;
			}		
			toadd=max-a[index];
			it=it+toadd;
			for(int i=0;i<n;i++)
			{
				if(i==n-1)
					continue;
				else
					// add second last to every element
					a[i]=toadd + a[i];	
			}		
			// corner case
			sort(a,a+n);	
		}
		cout<<it<<endl;
		it=0;
			
	}
	return 0;
}
