#include<stdio.h>  
int main()    
{   
	int i,count1=0,count2=0,arr1[1000],n;
	scanf("%d", &n);
	for(i=0; i<n; i++)
	{
		scanf("%d", &arr1[i]);
	}
	for(i=0; i<n; i++)
	{
		if(arr1[i] % 2 ==0)
		{
			count1=count1+1;
		}
		else
		{
			count2=count2+1;
		}
		
		
	}
	if(count1>count2)
		{
			printf("READY FOR BATTLE");
		}
		else
		{
			printf("NOT READY");
		}

}
 
 