#include<stdio.h>  
int main()    
{    
	int i,times;
	scanf("%d",&times);
	for(i=0;i<times;i++)
		{
			int n1,n2;   
			scanf("%d %d", &n1, &n2);
			if(n1>n2)
			{
				printf(">\n");
			}
			else if(n1<n2)
			{
				printf("<\n");
			}
			else 
			{
				printf("=\n");
			}
			
    
 
		}    
    

}
 
 