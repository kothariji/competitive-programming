#include<bits/stdc++.h>
using namespace std;
int arr[64][64];
void transpose(int x)
{
    int i,j;
    for(i=0;i<=x;i++)
    {
        for(j=i+1;j<=x;j++)
            swap(arr[i][j],arr[j][i]);
    }
}
void fast()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}

int main()
{
    fast();
    int t;
    cin>>t;
    while(t--)
    {
        int N,count=0,i,j,k;
        cin>>N;
        for(i=0; i<N; i++)
        {
            for(j=0; j<N; j++)
                cin>>arr[i][j];
        }
        for(i=N-1; i>=0; i--)
        {
            if(arr[i][i]!=arr[i][i-1]+1)
            {
                count++;
                transpose(i);
            }
        }
        cout<<count<<endl;
    }
    return 0;
}

