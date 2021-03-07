// This problem can be found on this URL : https://www.codechef.com/problems/LUCKFOUR
#include<stdio.h>
#include<string.h>

int main()
{
    int t; char a[15];
    scanf("%d",&t);
    while(t--)
    {
        scanf("%s",&a);
        int c=0,k;
        for(k=0;k<strlen(a);k++)
        {
            if(a[k]=='4') c++;
        }
        printf("%d\n",c);
    }
}
 