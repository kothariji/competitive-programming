#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
		cin.get();
		int n1,n2,data;
		cin>>n1>>n2;
		priority_queue <int, vector<int>, greater<int> > g,mg;
		for(int i=0; i<n1; i++)
		{
			cin>>data;
			g.push(data);
		}
		for(int i=0; i<n2; i++)
		{
			cin>>data;
			mg.push(data);
		}
		while(1)
		{
			if(mg.empty())
			{
				cout<<"Godzilla"<<endl;
				break;
			}
				
			
			if(g.empty())
			{
				cout<<"MechaGodzilla"<<endl;
				break;
			}
				
			
			int m1 = g.top();
			int m2 = mg.top();
			if(m2 > m1)
				g.pop();
			else
				mg.pop();
		}
		
	}
	return 0;
}