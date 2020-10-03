//Author: Rakshit Naidu

#include <stdio.h>
#include<math.h>

int min(int a, int b);

int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	
	while(t--)
	{
	    int n,m,k,x=0;
	    scanf("%d %d %d",&n,&m,&k);
	    
	    if(n>=m)
	    {
	        x = n - min(m + k,n);
	    }
	    else
	    {
	        x = m - min(n + k,m);
	    }
	    printf("%d\n",x);
	}
	return 0;
}

int min(int a, int b)
{
    if(a<b)
    {
        return a;
    }
    else
    {
        return b;
    }
}

