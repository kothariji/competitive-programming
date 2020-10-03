//Author: Rakshit Naidu

#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	
	while(t>0)
	{
	    int n,c=0;
	    scanf("%d",&n);
	    
	    while(n>0)
	    {
	        int rem = n % 10;
	        if(rem==4)
	        {
	            c = c+1;
	        }
	        n = n / 10;
	    }
	    printf("%d\n",c);
	    t--;
	}
	return 0;
}
