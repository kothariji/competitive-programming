#include<stdio.h>

int main()
{
    int n1,n2,ans;
    scanf("%d", &n1);
    scanf("%d", &n2);
    if(n1>n2)
    {
        ans=n1-n2;
    }
    else
    {
        ans=n1+n2;
    }
    printf("%d", ans);
    
}