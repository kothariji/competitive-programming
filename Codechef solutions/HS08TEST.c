// This problem can be found on this URL : https://www.codechef.com/problems/HS08TEST
#include<stdio.h>
    
int main()
{   
    int w;
    float t;
  	scanf("%d%f",&w,&t);
   	if(w+0.5>t)
   	{
   		printf("%.2f",t);		
   	}
   	else if(w%5!=0)
   	    printf("%.2f",t);
   	else
  	    printf("%.2f",t-w-0.5);    
  
    return 0 ;
}