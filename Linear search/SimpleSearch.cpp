using namespace std;
#include<iostream>
int main()
{
    int N,K,i;
    cin>>N;
    int *a=new int[N];

    for( i=0;i<N;i++)
    {
        cin>>a[i];
    }
    cin>>K;
    for(i=0;i<N;i++)
    {
        if(a[i]==K)
        {
            cout<<i+1;
            break;
        }
    }
    return 0;
}
