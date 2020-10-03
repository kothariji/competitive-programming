//Author: Rakshit Naidu

#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	
	while(t--)
	{
	    int n;
	    scanf("%d",&n);
	    int x = n%10;
	    if(x==5)
	    {
	        printf("1\n");
	    }
	    else if(x==0)
	    {
	        printf("0\n");
	    }
	    else
	    {
	        printf("-1\n");
	    }
    }
	return 0;
}

