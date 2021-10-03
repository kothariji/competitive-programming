#include<stdio.h>  
int main()    
{    
	int i,times;
	int a1,a2,a3,sum; 
	scanf("%d",&times);
	for(i=0;i<times;i++)
		{
			scanf("%d %d %d", &a1,&a2,&a3);
			sum=a1+a2+a3;  
			if(sum!=180)
			{
				printf("NO\n");
			}
			else
			{
				printf("YES\n");
			}
			
			 
		}
		   
    

}
 
 