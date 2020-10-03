//Author: Rakshit Naidu

#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	
	while(t--)
	{
	    int n1;
	    scanf("%d",&n1);
	    
	    int a[n1];
	    for(int i=0;i<n1;i++)
	    {
	        scanf("%d",&a[i]);
	    }
	    
	    int n2;
	    scanf("%d",&n2);
	    
	    int b[n2];
	    for(int i=0;i<n2;i++)
	    {
	        scanf("%d",&b[i]);
	    }
	    
	    int i,j,f=0;
	    for(i=0,j=0;i<n1&&j<n2;i++)
	    {
	        if(a[i]==b[j])
	            {
	                f++;
	                j++;
	                if(f==n2)
	                {
	                    break;
	                }
	            }
	    }
	    if(f==n2)
	    {
	        printf("Yes\n");
	    }
	    else
	    {
	        printf("No\n");
	    }
	    
	}
	return 0;
}

