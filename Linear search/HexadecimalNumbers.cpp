using namespace std;
#include<iostream>
int main()
{
    int range[2],hexaSum,i,j,num;

    //taking the range
    for(i=0;i<2;i++)
    {
        cin>>range[i];
    }
    for(i=range[0];i<=range[1];i++)
    {
        num=i;
        hexaSum=0;
        if(num>15)
        {
            while(num!=0)
            {
                hexaSum+=(num%16);
                num/=16;
            }
        }

    }
    return 0;
}
