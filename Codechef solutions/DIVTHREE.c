#include<stdio.h>
int main()
{
    int i,times,n,k,d,arr1[1000],sum=0,ans;
    scanf("%d\n", &times);
    while(times--)
    {   sum=0;
        scanf("%d %d %d", &n,&k,&d);
        for(i=0;i<n;i++)
        {
            scanf("%d", &arr1[i]);
        }
        for(i=0;i<n;i++)
        {
            sum=sum+arr1[i];
       
        }
        if(sum<k)
        {
            printf("0\n");
        }
        else if((sum/k)>=d)
        {
            printf("%d\n", d);
        }
        else
        {
            ans=sum / k;
            printf("%d\n", ans);
        }
        
        
    }
}