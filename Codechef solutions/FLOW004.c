#include<stdio.h>
#include<string.h>

 int main()
{
    int t; scanf("%d",&t);
	char a[10];
    while(t--)
    	{
    		scanf("%s",a);
    		printf("%ld\n",(a[0]-'0' + a[strlen(a)-1] - '0'));
	  	}
}
