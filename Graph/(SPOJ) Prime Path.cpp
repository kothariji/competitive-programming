#include <bits/stdc++.h>
#define lli long long int
#define endl "\n"
#define MAX  100005
using namespace std;

vector <bool> visited(MAX, false);
vector <lli> dist(MAX, -1);
vector < vector <lli> > v1(MAX);
vector <lli> primes;

bool isprime(lli n)
{
	for(lli i =2; i*i <=n; i++)
		if(n%i == 0)
			return false;
	return true;
}

bool valid(lli a, lli b)
{
	lli dif = 0;
	string s1 = to_string(a);
	string s2 = to_string(b);
	if(s1.length() != s2.length())
		return false;
	for(lli i =0; i<4; i++)
		if(s1[i] != s2[i])
			dif++;

	if(dif == 1)
		return true;
	return false;
}

void buildprimes()
{
	for(lli i = 1000; i<10000; i++)
		if(isprime(i))
			primes.push_back(i);
}

void buildgraph()
{
	for(lli i = 0; i<primes.size()-1; i++)
		for(lli j = i+1; j<primes.size(); j++)
		{
			if(valid(primes[i], primes[j])){
				v1[primes[j]].push_back(primes[i]);
				v1[primes[i]].push_back(primes[j]);
			}
		}
}

int main()
{	
	lli t;
	cin>>t;
	
	buildprimes();
	buildgraph();
	while(t--)
	{
		lli n1, n2;
		cin>>n1>>n2;
		for(lli i = 1000; i<10000; i++)
		{
			visited[i] = false;
			dist[i] = -1;
		}
		visited[n1] = true;
		dist[n1] = 0;

		queue <lli >q1;
		q1.push(n1);

		while(!q1.empty())
		{
			lli temp = q1.front();
			q1.pop();
			for(lli j = 0; j<v1[temp].size(); j++)
			{
				if(visited[v1[temp][j]] == false)
				{
					visited[v1[temp][j]] = true;
					q1.push(v1[temp][j]);
					dist[v1[temp][j]] = dist[temp] + 1;	
				}
			}
		}

		if(dist[n2] != -1)
			cout<<dist[n2]<<endl;
		else
			cout<<"Impossible"<<endl;
	} 
}