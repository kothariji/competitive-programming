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
	    float hra,da;
	    float gross_sal;
	    
	    if(n<1500)
	    {
	        hra = 0.1*n;
	        da = 0.9*n;
	    }
	    else
	    {
	        hra = 500;
	        da = 0.98*n;
	    }
	    gross_sal = n + hra + da;
	    
	    printf("%.2f\n",gross_sal);
	}
	return 0;
}

