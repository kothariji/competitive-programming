#include<stdio.h>
int main()
{
    int times,n,orignal,k,i;
    scanf("%d",&times);
    while(times--)
    {
        int reverse=0;
        scanf("%d", &n);
        orignal=n;
        while(orignal>0)
        {
            k=orignal%10;
            reverse=reverse*10+k;
            orignal=orignal/10;
        }
        if(reverse==n)
            printf("wins\n");
        else
        {
            printf("loses\n");
        }
        
    }

}
