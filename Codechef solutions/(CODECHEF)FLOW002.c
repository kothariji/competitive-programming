#include<stdio.h>
//Find Remainder. Problem Code: FLOW002

int main()
{
	int t,a,b,i;
	scanf("%d",&t);
	for(i=1;i<=t;i++)
	{
		scanf("%d %d",&a,&b);
		printf("%d\n",a%b);
	}
return 0;
}   