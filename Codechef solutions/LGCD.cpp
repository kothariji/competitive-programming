#include<bits/stdc++.h>
using namespace std;
#define f(i,a,b) for(int i=a;i<b;i++)
int main()
{
    int Testcase;
    cin>>Testcase;
    while(Testcase--) 
    {   
        int N;
        cin>>N;
        int A[N];
        unordered_map<int,int>map;
        f(i,0,N)
        {
           cin>>A[i];
           map[A[i]]++;
        }
        int result=0;
        f(i,0,N)
        {
           if(map.find(2*A[i])!=map.end())
           result+=map[2*A[i]];
        }
        cout<<result<<endl;
    }


}
