//https://www.spoj.com/problems/AKBAR/
#include<bits/stdc++.h>
#define ll long long
using namespace std;

struct node
{
	ll name,dis,prev;
};

vector<long> adj[1000002];
int flag[1000002];

bool bfs(ll s,ll d,ll prev)
{
	bool result=true;
	node temp;
	temp.name=s;
	temp.dis=d;
	temp.prev=-1;
	queue<node> q;
	q.push(temp);
	while(!q.empty())
	{
		temp=q.front();
		q.pop();
		flag[temp.name]++;
		if(flag[temp.name]==1)
			result=false;
		if(temp.dis>0)
		{
			vector<long>::iterator ii;
			for(ii=adj[temp.name].begin();ii!=adj[temp.name].end();ii++)
			{
				if(*ii==temp.prev)
					continue;
				node temp1;
				temp1.prev=temp.name;
				temp1.name=*ii;
				temp1.dis=temp.dis-1;
				q.push(temp1);
			}
		}
	}
	return result;
}

int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		ll n,r,m;
		scanf("%lld%lld%lld",&n,&r,&m);
		ll i;
		for(i=0;i<=n;i++)
		{
			flag[i]=0;
			adj[i].clear();
		}
		for(i=0;i<r;i++)
		{
			ll s,d;
			scanf("%lld%lld",&s,&d);
			adj[s].push_back(d);
			adj[d].push_back(s);
		}
		bool res=false;
		for(i=0;i<m;i++)
		{
			ll s,d;
			scanf("%lld%lld",&s,&d);
			if(!res)
			{
				if(bfs(s,d,-1))
				{
					res=true;
				}
			}
		}
		if(res)
			printf("No");
		else
			printf("Yes");
		printf("\n");
	}
	return 0;
}
