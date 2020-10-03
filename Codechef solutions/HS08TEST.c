//Submitted by Rakshit Naidu


#include <stdio.h>

int main(void) {
	// your code goes here
	int withdraw_amount;
	float init_balance;
	scanf("%d %f",&withdraw_amount,&init_balance);
	
	
	if(withdraw_amount % 5 == 0)
	{
	    
	    if(withdraw_amount < (init_balance - 0.5))
	    {
	        init_balance = init_balance - withdraw_amount - 0.5;
	        printf("%.2f",init_balance);
	    }
	    else
	    {
	        printf("%.2f",init_balance);
	    }
	  
	}
	else
	{
	    printf("%.2f",init_balance);
	}
	
	return 0;
}
