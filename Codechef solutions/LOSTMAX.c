//Author: Rakshit Naidu

#include <stdio.h>

int main(void) {
	// your code goes here
	int i,max,t,a[100],j;
	char ch;
	scanf("%d",&t);
	
	while(t--)
	{
	    i=0,max=-1;
	    
	    while(1)
	    {
	        scanf("%d%c",&a[i],&ch);
	        i++;
	        if(ch=='\n') 
	        {
	            break;
	        }
	    }
	    for(j=0;j<i;j++)
	    {
	        if(a[j]==i-1)
	        {
	            a[j] = -1;
	            break;
	        }
	    }
	    
	    for(j=0;j<i;j++)
	    {
	        if(a[j] > max)
	        {
	            max = a[j];
	        }
	    }
	    printf("%d\n",max);
	}
	return 0;
}

