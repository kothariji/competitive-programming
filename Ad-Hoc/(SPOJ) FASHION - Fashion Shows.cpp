#include<bits/stdc++.h>
#define lli long long int
#define endl "\n"
using namespace std;
 
int main()
 {
	int t;
	cin>>t;
	while(t--)
	{
		int np;
		cin>>np;
		priority_queue <int> m,w;
		for(int i=0;i<np;i++)
		{
			int data;
			cin>>data;
			m.push(data);
		}
		for(int i=0;i<np;i++)
		{
			int data;
			cin>>data;
			w.push(data);
		}
		lli sum=0;
		for(int i=0;i<np;i++)
		{
			int man,woman;
			man = m.top();
			woman = w.top();
			sum += (man*woman);
			m.pop();
			w.pop();
		}
		cout<<sum<<endl;
			
	}
	return 0;
}