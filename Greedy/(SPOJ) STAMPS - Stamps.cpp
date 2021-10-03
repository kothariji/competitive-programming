#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	int sc = 0;
	while(t--)
	{
		sc++;
		int need, f,data;
		cin>>need>>f;
		priority_queue <int> q1;
		for(int i=1; i<= f; i++)
		{
			cin>>data;
			q1.push(data);
		}
		int req = 0;
		int count = 0;
		while(!q1.empty())
		{
			req += q1.top();
			q1.pop();
			count++;
			if(req>= need)
				break;
		}
		cout<<"Scenario #"<<sc<<":"<<endl;
		if(req>= need)
			cout<<count<<endl<<endl;
		else
		cout<<"impossible"<<endl<<endl;
	}
	return 0;
}