// Link to problem - https://binarysearch.com/problems/Consecutive-Ones
// status - accepted ✅

bool solve(vector<int>& nums) {
    int count = 0;
    int prev = INT_MIN;

    for (int num: nums) {
        if (count > 0 && prev != 1 && num == 1) {
            return false;
        }

        if (num == 1) {
            count++;
        }

        prev = num;
    }

    return true;
}