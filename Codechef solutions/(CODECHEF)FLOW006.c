#include<stdio.h>
//Sum of Digits.Problem Code: FLOW006

int main()
{
	int t,n;
	int num,sum;
	
	scanf("%d",&t);
	while(t--)
	{	
		sum=0;
		scanf("%d",&n);
		while(n>0)
		{
			
			num=n%10;
			sum=sum+num;
			n=n/10;
		}
		printf("%d\n",sum);
	}
return 0;
}