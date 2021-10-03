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
	    
	    int a[n];
	    for(int i=0;i<n;i++)
	    {
	        scanf("%d",&a[i]);
	    }
	    int k;
	    scanf("%d",&k);
	    int temp = 0;
	    int x = a[k-1];
	    
	    for(int i=0;i<n-1;i++)
	    {
	        for(int j=i+1;j<n;j++)
	        {
	            if(a[i] > a[j])
	            {
	                temp = a[i];
	                a[i] = a[j];
	                a[j] = temp;
	            }
	        }
	    }
	    int pos=0;
	    for(int i=0;i<n;i++)
	    {
	        if(x == a[i])
	        {
	            pos = i+1;
	        }
	    }
	    
	    printf("%d\n",pos);
	    
	}
	return 0;
}

