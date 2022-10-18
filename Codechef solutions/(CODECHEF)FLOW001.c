#include<stdio.h>
// Add Two Numbers problem from codechef.Problem Code: FLOW001

int main()
{
	int t,a,b,i;
	scanf("%d",&t);
	for(i=1;i<=t;i++)
	{
		scanf("%d %d",&a,&b);
		printf("%d\n",a+b);
	}
return 0;
}