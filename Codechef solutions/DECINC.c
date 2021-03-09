#include<stdio.h>  
int main()    
{   
	int n,ans;
	scanf("%d", &n);
	if(n % 4 ==0)
	{
		ans=n+1;
		printf("%d", ans);
	}
	else
	{
		ans=n-1;
		printf("%d", ans);
	}
	
}
 