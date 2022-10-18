#include <bits/stdc++.h>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--)
	{
	    int N;
	    cin>>N;
	    int A[N];
	    for(int i=0;i<N;i++)
	    {
	        cin>>A[i];
	    }
	    sort(A,A+N);
	    int s=1,m=0;
	    for(int i=0;i<N-1;i++)
	    {
	        if(A[i]==A[i+1])
	        s+=1;
	        else
	        {
	         if(s>m)
	         m=s;
	         s=1;
	        }
	        
	    }
	    if(s>m)
	    m=s;
	    cout<<N-m<<endl;
	}
	return 0;
}
