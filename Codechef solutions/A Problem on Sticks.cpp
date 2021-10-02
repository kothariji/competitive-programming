#include<bits/stdc++.h>
using namespace std;

void fast()
{
ios_base::sync_with_stdio(false);cin.tie(NULL);
}

int main()
{
    fast();
    int t;
    cin>>t;
    while(t--)
        {
            long long int N,i,c=0;
            cin>>N;
            long long int arr[N];
            for(i=0;i<N;i++)
                cin>>arr[i];
            sort(arr,arr+N);
            for(i=0;i<N-1;i++)
            {
                if(arr[i]!=0)
                {
                    if(arr[i]!=arr[i+1])
                        c++;
                }

            }
            if(arr[N-1]!=0)
            c++;
            cout<<c<<endl;
        }
        return 0;
}

