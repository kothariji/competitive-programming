//Author: Rakshit Naidu

#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	
	while(t--)
	{
	    int n,k;
	    scanf("%d %d",&n,&k);
	    
	    int x = n+k;
	    int a[n];
	    
	    for(int i=0;i<n;i++)
	    {
	        scanf("%d",&a[i]);
	    }
	    int temp=0;
	    for(int i=1;i<n;i++)
	    {
	        for(int j=0;j<n-i;j++)
	        {
	            if(a[j] > a[j+1])
	            {
	                temp = a[j];
	                a[j] = a[j+1];
	                a[j+1] = temp;
	            }
	        }
	    }
	    
	    if(x%2 == 1)
	    {
	        int l = (x+1)/2;
	        printf("%d\n",a[l-1]);
	    }
	    else if(x%2==0)
	    {
	        int l = x/2;
	        printf("%d\n",a[l-1]);
	    }
	    
	    //for(int i=0;i<n;i++)
	    //{
	    //    printf("%d",a[i]);
	    //}
	    
	}
	return 0;
}

