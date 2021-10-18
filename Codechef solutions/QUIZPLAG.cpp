// THIS QUESTION IS AVAILABLE ON CODECHEF https://www.codechef.com/problems/QUIZPLAG
#include <iostream>
#include<vector>
#include<cstring>
using namespace std;
void solve()
{
    int n,m,k,id;
    cin>>n>>m>>k;
    int L[n+m+1];
    memset(L,0,sizeof(L));
    for(int i=1;i<=k;i++)
    {
        cin>>id;
        L[id]++;
    }
    vector<int>ans;
    for(int i=1;i<=n;i++)
    {
        if(L[i]>1)
        {
            ans.push_back(i);
        }
    }
    int size=ans.size();
    cout<<size;
    for(int i=0;i<size;i++)
    {
        cout<<" "<<ans[i];
    }
    cout<<endl;
    
}

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    solve();
	}
	return 0;
}