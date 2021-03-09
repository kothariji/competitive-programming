#include <stdio.h>
#include<math.h>

int main(void) {
	int i,times;
    scanf("%d", &times);
    int squared;
    
    for(i=1;i<=times;i++)
    {
        int n;
        
        scanf("%d", &n);
        
        squared=sqrt(n);
        floor(squared);
        
        printf("\n%d\n", squared);
        
        
    }
	return 0;
}

