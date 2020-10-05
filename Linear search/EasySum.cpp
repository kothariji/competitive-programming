#include<bits/stdc++.h>
using namespace std;

void input(int arr[100],int &len)
{
    cin>>len;
    for(int i=0;i<len;i++)
    {
        cin>>arr[i];
    }
}

bool linear(int b[100],int n,int len2)
{
    int flag=0;
    for(int i=0;i<len2;i++)
    {
        if(b[i]==n)
        {
            flag=1;
            return true;
        }

    }

    if(flag==0)
        return false;
}

int main()
{
    int len,len2,a[100],b[100],c[100],i,j,upper,lower;

    input(a,len);
    input(b,len2);

    lower=b[0]-a[0];
    upper=b[len2-1]-a[len-1];

    int flag,k=0;

    for(i=lower;i<=upper;i++)
    {
        flag=1;

        for(j=0;j<len;j++)
        {
            if(linear(b,(i+a[j]),len2))
            {
                flag=1;
            }
            else
            {
                flag=0;
                break;
            }
        }

        if(flag==1)
        {
            c[k]=i;
            k++;
        }
    }

    //for printing the result
    for(i=0;i<k;i++)
    {
        cout<<c[i];
        if(i<k-1)
        {
            cout<<" ";
        }
    }
    return 0;
}
