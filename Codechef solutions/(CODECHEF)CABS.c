#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int x,y;
	    scanf("%d",&x);
	    scanf("%d",&y);
	    if(x==y)
	        printf("ANY\n");
	   else
	        x < y ? printf("FIRST\n") : printf("SECOND\n");
	}
	return 0;
}

