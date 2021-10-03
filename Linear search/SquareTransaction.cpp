using namespace std;
#include<bits/stdc++.h>
int main()
{
    long long T,Q,i,target,j,sum;
    int num,flag;
    cin>>T;
    long long *a=new long long[T];
    for(i=0;i<T;i++)
    {
        cin>>a[i];
    }
    cin>>Q;
    for(i=0;i<Q;i++)
    {
        cin>>num;
        sum=0;
        flag=0;
        for(j=0;j<T;j++)
        {
            sum=sum+a[j];
            if(sum>=num)
            {
                cout<<j+1<<endl;
                flag=1;
                break;
            }
        }
        if(flag==0)
            cout<<"-1"<<endl;
    }
    return 0;
}
