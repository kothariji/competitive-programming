#define INFINITE 0x3f3f3f3f
class Solution {
public:
    
    int nthUglyNumber(int n) {
        int ugly_nums[10010];
	    int power_2 = 1, power_3 = 1, power_5 = 1,
        next_mul_2, next_mul_3, next_mul_5;
    	
    	for(int i=2;i <= n;i++)
    		ugly_nums[i] = INFINITE;
    	ugly_nums[1] = 1;
    	
    	for(int i=2;i<=n;i++)
    	{
    		next_mul_2 = ugly_nums[power_2]*2;
    		next_mul_3 = ugly_nums[power_3]*3;
    		next_mul_5 = ugly_nums[power_5]*5;
    		
    		ugly_nums[i] = min({next_mul_2, next_mul_3, next_mul_5});
    		
    		// increment the power of chosen prime
    		if(ugly_nums[i] == next_mul_2)
    				power_2++;
    		if(ugly_nums[i] == next_mul_3)
    				power_3++;
    		if(ugly_nums[i] == next_mul_5)
    				power_5++;
    	}
	    return ugly_nums[n];
    }
};