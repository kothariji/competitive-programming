//Author: Rakshit Naidu

#include <stdio.h>

int main(void) {
	// your code goes here
	int t,cumul_1=0,cumul_2=0,lead_1=0,lead_2=0,a,b;
	scanf("%d",&t);
	
    for(int i=0;i<t;i++)
    {
        scanf("%d %d",&a,&b);
        cumul_1 = cumul_1 + a;
        cumul_2 = cumul_2 + b;
        if(cumul_1 > cumul_2)
        {
            if(lead_1 < (cumul_1 - cumul_2))
            {
                lead_1 = cumul_1 - cumul_2;
            }
        }
        else
        {
            if(lead_2 < (cumul_2 - cumul_1))
            {
                lead_2 = cumul_2 - cumul_1;
            }
        }
    }
    
    if(lead_1 > lead_2)
    {
        printf("1 %d",lead_1);
    }
    else
    {
        printf("2 %d",lead_2);
    }
	
	return 0;
}

