class Solution {
public:

bool isHappy(int n) {

	/* 
	let's try different n:
	true  (1) -> 1
	false (2) -> 4 -> 16 -> 37 -> 58 -> 89 -> 145 -> 42 -> 20 -> 4
	false (3) -> 9 -> 81 -> 65 -> 61 -> 37 (look at 2)
	false (4) -> (look at 2)
	false (5) -> 25 -> 29 -> 85 -> 89 (look at 2)
	false (6) -> 36 -> 45 -> 41 -> 17 -> 50 -> 25  (look at 5)
	true  (7) -> 49 -> 97 -> 10
	false (8) -> 64 -> 52 -> 29 (look at 5)
	false (9) -> 9 -> 81 -> 65 (look at 3)
	
	All other n >= 10, while computing will become [1-9], 
	So there are two cases 1 and 7 which are true.
	
	Notice, that all falses has the same path as 2 (loop).
	And 7 at the end becomes 1. 
	*/
	
    while (true) {
        
        long sum = 0;
        
        while (n != 0) {
            
            int lastDigit = n % 10;
            n /= 10;
            sum += lastDigit * lastDigit;
        }
        
        if (1 <= sum && sum <= 9) {
            
            if (sum == 1 || sum == 7) return true;
            else return false;
        }
        else n = sum;
    }
	
	/*
	not returning at the end, seems bad practice, and ugly. 
	But I reckon in this context it's okay.
	
	Also, using two pointers solution is better in perspective, for future interviews.
	*/
}
};
