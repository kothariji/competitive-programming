#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int x,y;
	    scanf("%d%d",&x,&y);
	    if(x>=(y*30))
	        printf("YES\n");
	    else
	        printf("NO\n");
	}
	return 0;
}

