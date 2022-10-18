// Link to problem - https://binarysearch.com/problems/K-Prefix
// status - accepted ✅

#include "vector.h";

int solve(vector<int>& nums, int k) {
    int total = 0;
    int backup = -1;

    if (nums.size() == 0) return -1;
    if (nums.size() == 1) return 0;

    for (int i = 0; i < nums.size(); i++) {
        total += nums[i];

        if (total <= k) {
            backup = i;
        }
    }

    return backup;
}