// Link to problem - https://binarysearch.com/problems/Max-Multiplied-Pairings
// Status - not accepted ❌

int solve(vector<int>& nums, vector<int>& multipliers) {
    int sum = 0;
    int minLen = nums.size() < multipliers.size() ? nums.size() : multipliers.size();

    for (int x=0; x<minLen; x++) {
        int maxSum = -2;
        for (int y=0; y<multipliers.size(); y++) {
            if (nums[x] * multipliers[y] > maxSum) {
                maxSum = nums[x] * multipliers[y];
            }
        }
        
        sum += maxSum;
    }
    
    return sum;
}