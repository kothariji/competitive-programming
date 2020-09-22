#include <bits/stdc++.h>
#define lli long long int
#define endl "\n"
using namespace std;




int main()
{
	while(1)
	{
		int n;
		cin>>n;
		if(n == 0)
			break;
		vector <int>v1(n);
		for(int i = 0; i<n ;i++)
		{
			cin>>v1[i];
		}
		stack <int> s1;
		int counter = 1, i = 0;
		while(i<n)
		{
			if(v1[i] == counter){
				counter++;
				i++;
				continue;
			}
			if(!s1.empty() && (s1.top() == counter))
			{
				while(s1.top() == counter)
				{
					s1.pop();
					counter++;
					if(s1.empty())
						break;
				}
			}
			else
			{
				s1.push(v1[i]);
				i++;
			}
		}
		if(!s1.empty() && (s1.top() == counter))
			{
				while(s1.top() == counter)
				{
					s1.pop();
					counter++;
					if(s1.empty())
						break;
				}
			}
		if(counter == (n+1))
			cout<<"yes"<<endl;
		else
			cout<<"no"<<endl;

	}
}