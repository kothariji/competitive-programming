//Author: Rakshit Naidu

#include <stdio.h>
#include<math.h>
int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	
	while(t--)
	{
	    int n,i,flag=0;
	    scanf("%d",&n);
	
	    for(i=2;i<sqrt(n);i++)
	    {
	        if(n % i == 0)
	        {
	            flag = 1;
	            break;
	        }
	    }
	    if(flag==1)
	    {
	        printf("no\n");
	    }
	    else
	    {
	        printf("yes\n");
	    }
	}
	return 0;
}

