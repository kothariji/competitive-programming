//Author: Rakshit Naidu

#include <stdio.h>

int main(void) {
	// your code goes here
	char s[30],str[15];
	scanf("%s",&s);
	int x = strlen(s);
	int t;
	scanf("%d",&t);
	
	while(t--)
	{
	    scanf("%s",&str);
	    int i,j;
	    int l=strlen(str);
	    for(i=0;i<strlen(str);i++)
	    {
	        for(j=0;j<strlen(s);j++)
	        {
	            if(str[i]==s[j])
	            {
	                break;
	            }
	       }
	       if(j>=strlen(s))
	       {
	           printf("No\n");
	           break;
	       }
	    }
	    if(i>=strlen(str))
	    {
	        printf("Yes\n");
	    }
	}
	    
	return 0;
}

