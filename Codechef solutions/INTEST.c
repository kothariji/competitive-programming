#include<stdio.h>
   
int main()
{
   	int n,k,t;
   	int c=0,i;
   	scanf("%d %d",&n,&k);
   	i=1;
   	while(i<=n)
   	{
  		scanf("%d\n",&t);
  		if(t%k==0) c++;
		i++;
	}
	printf("%d",c);
	return 0;
}
