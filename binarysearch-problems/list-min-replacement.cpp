// Link to problem - https://binarysearch.com/problems/List-Min-Replacement
// status - accepted ✅

vector<int> solve(vector<int>& nums) {
    int min = nums[0];
    nums[0] = 0;

    for (int i=1; i<nums.size(); i++) {
        int curMin = nums[i];
        nums[i] = min;

        if (curMin < min) {
            min = curMin;
        }
    }

    return nums;
}