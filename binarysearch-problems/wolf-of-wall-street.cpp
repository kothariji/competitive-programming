// Link to problem - https://binarysearch.com/problems/Wolf-of-Wall-Street
// status - not accepted ❌

int solve(vector<int>& prices) {
    int max = 0;

    for (int i=0; i<prices.size(); i++) {
        for (int j=i; j<prices.size(); j++) {
            if (prices[i] - prices[j] > max) {
                max = prices[i] - prices[j];
            }
        }
    }

    return max;
}