#include<stdio.h>  
int main()    
{    
	int i,times;
 scanf("%d",&times);
 for(i=0;i<times;i++)
 {
 int i,fact=1,number;    
    
  scanf("%d",&number);    
    for(i=1;i<=number;i++){    
      fact=fact*i;    
  }    
  printf("%d\n",fact);    

 }
 
}   