#include<bits/stdc++.h>
using namespace std;

#define ll long long int

int getPar(int x,int par[]){
    while(x!=par[x])
        x = par[x];
    return x;
}
int find(int x,int y,int par[])
{
    return ( getPar(x,par) == getPar(y,par) );
}
int doUnion(int x,int y,int par[],int size[])
{
    if( find(x,y,par) )
        return -1;
    int p1 = getPar(x,par);
    int p2 = getPar(y,par);
    int s1 = size[p1];
    int s2 = size[p2];
    if( s1 > s2 )
    {
        par[p2] = p1;
        size[p1] += s2;
    }
    else
    {
        par[p1] = p2;
        size[p2] += s1;
    }
    return 1;
}

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n,m;
		cin >> n >> m;

		vector< vector<int> > v(n+1);
		unordered_map<int,int> mp;
		// init dsu 
		int par[n+1],size[n+1];
	    for(int i=1;i<=n;i++)
	    {
	        par[i] = i;
	        size[i] = 1;
	    }

	    ll B[n+1]={0},A[n+1]={0}, C[n+1]={0};
    	set<pair<int,int> > st;
    	int first,second;
	    for(int i=0;i<m;i++)
	    {
	    	int x,y;
	    	cin >> x >> y;
	    	first = x;
	    	second = y;
	    	// int X = min(x,y);
	    	// int Y = max(x,y);
	    	// if( st.find({X,Y})!=st.end() )
	    	// 	continue;
	    	// st.insert({X,Y});
	    	v[x].push_back(y);
	    	v[y].push_back(x);
	    	// int b = doUnion(x,y,par,size);
	    	A[x]++;
	    	A[y]++;
	    }
	    int total = 0;
	    for(int i=1;i<=n;i++)
	    {
	    	total += v[i].size();
	    }
	    total /= 2;
	    // for(int i=0;i<=n;i++)
	    // 	A[i] = B[i]+C[i];

	    map<int,vector<int> > comp;
	    for(int i=1;i<=n;i++)
	    {
	    	int p = getPar(i,par);
	    	int size = v[i].size();
	    	mp[p]+=size;
	    	comp[p].push_back(i);
	    }

	    
	    int flag=0;
	    // int count = 0;
	    // for(auto it=mp.begin();it!=mp.end();it++)
	    // {
	    // 	// cout << it->first << " : " << it->second << endl;
	    // 	int edgeInComp = it->second/2;
	    // 	if( edgeInComp%2 )
	    // 		count++;

	    // }
	    if( m%2 == 0)
	    {
	    	// means all the components have even edges. ( so only 1 subraph is required)
	    	cout << 1 << endl;
	    	for(int i=1;i<=n;i++)
	    		cout << 1 << " ";
	    	cout << endl;
	    }
	    else
	    {


	    	// need to move 1 node from any one odd component to the other set
	    	// set<int> goToSecond;
	    	// for(auto it=mp.begin();it!=mp.end();it++)
		    // {	
		    // 	int edgeInComp = it->second/2;
		    // 	if( edgeInComp%2==0 )
		    // 	{
		    // 		int p = it->first;
		    // 		vector<int> temp = comp[p];
		    // 		for(int i=0;i<temp.size();i++)
		    // 		{
		    // 			if( goToSecond.find(temp[i])==goToSecond.end() )
		    // 			{
		    // 				goToSecond.insert(temp[i]);
		    // 			}
		    // 		}

		    // 	}
		    // }

		    // int allSame = 0;
	    	// for(auto it=mp.begin();it!=mp.end();it++)
		    // {
		    // 	// cout << it->first << " : " << it->second << endl;
		    // 	int edgeInComp = it->second/2;
		    // 	if( edgeInComp%2 )
		    // 	{
		    // 		allSame = 1;
		    // 		int p = it->first;
		    // 		vector<int> temp = comp[p];
		    // 		for(int i=0;i<temp.size();i++)
		    // 		{
		    // 			if( v[temp[i]].size()%2 and goToSecond.find(temp[i])==goToSecond.end() )
		    // 			{
		    // 				goToSecond.insert(temp[i]);
		    // 				break;
		    // 			}
		    // 		}
		    // 	}

		    // }

		    // if( allSame == 1 )
		    // {
		    // 	for(auto it=mp.begin();it!=mp.end();it++)
			   //  {
			   //  	// cout << it->first << " : " << it->second << endl;
			   //  	int edgeInComp = it->second/2;
			   //  	int flag = 0;
			   //  	if( edgeInComp%2 )
			   //  	{
		
			   //  		int p = it->first;
			   //  		vector<int> temp = comp[p];
			   //  		for(int i=0;i<temp.size()-1;i++)
			   //  		{
			   //  			if( goToSecond.find(temp[i])==goToSecond.end() )
			   //  			{
			   //  				flag=1;
			   //  				goToSecond.insert(temp[i]);
			    				
			   //  			}
			   //  		}
			   //  		if( flag)
			   //  			break;
			   //  	}

			   //  }
		    // }


	    	// cout << 2 << endl;
	    	// for(int i=1;i<=n;i++)
	    	// {
	    	// 	if( goToSecond.find(i)!=goToSecond.end() )
	    	// 		cout << 2 << " ";
	    	// 	else
	    	// 		cout << 1 << " ";
	    	// }
	    	// cout << endl;

	    	ll i ;
	    	for(i=1;i<=n;i++)
	    	{
	    		if(A[i]&1)
	    		{
	    			break;
	    		}
	    	}

	    	if( i <= n)
	    	{
	    		cout<<2<<endl;
				for(int j=1;j<=n;j++)
				{
					if(j==i)
				 		cout<< 2 <<" ";
				 	else
				 		cout<< 1 <<" ";
				}
	    	}
	    	else
	    	{
		 		cout<<3<<endl;
		 		int c = 0;
			 	for(int j=1;j<=n;j++)
			 	{
			 		if( j==first )
			 			cout << 1 << " ";
			 		else if( j == second )
			 			cout << 2 << " ";
			 		else
			 			cout<< 3 <<" ";
			 	}
			}
			cout << endl;
	    }
	}
}