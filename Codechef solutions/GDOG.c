//Author: Rakshit Naidu

#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	
	while(t--)
	{
	    int n,k;
	    scanf("%d %d",&n,&k);
	    
	    int x=0;
	    for(int i=2;i<=k;i++)
	    {
	        if(n%i > x)
	        {
	            x = n%i;
	        }
	    }
	    
	    printf("%d\n",x);
	}
	return 0;
}
