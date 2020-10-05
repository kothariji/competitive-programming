using namespace std;
#include<iostream>
int main()
{
    int T,n,flag;
    cin>>T;
    long long num;
    while(T>0)
    {
        flag=0;
        cin>>num;
        if(num%21==0)
            flag=1;
        else
        {
            while(num>0)
            {
               n=num%10 ;
               num/=10;
               if(n==1 && num%10==2)
               {
                   flag=1;
                   break;
               }
            }
        }
        if(flag==1)
        {
            cout<<"\nThe streak lives still in our heart!";
        }
        else if(flag==0)
            cout<<"\nThe streak is broken!";
        T--;
    }
    return 0;
}
