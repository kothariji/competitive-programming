//Author: Rakshit Naidu

#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	
	while(t--)
	{
	    char str[100];
	    scanf("%s",str);
	    int i,f=1;
	    char b = str[0];
	    char c = str[1];
	    if(b!=c)
	    {
	        for(i=2;str[i]!='\0';i++)
	        {
	            if(i%2==0&&str[i]==b)
	            {
	                f=1;
	            }
	            else if(i%2==1&&str[i]==c)
	           {
	                f=1;
	           }
	           else
	           {
	               f=0;
	               break;
	           }
	       }
	   }
	   else
	    {
	        f=0;
	    }
	    if(f==1)
	    {
	        printf("YES\n");
	    }
	    else
	    {
	        printf("NO\n");
	    }
	}
	return 0;
}

