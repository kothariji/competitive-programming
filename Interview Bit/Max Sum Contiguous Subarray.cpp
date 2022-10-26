int Solution::maxSubArray(const vector<int> &A) {
    int maxi = INT_MIN;
    int sum = 0;
    for(int i = 0; i < A.size(); i++){
        sum = sum + A[i];
        maxi = max(maxi, sum);
        if(sum < 0) sum = 0;
    }
    return maxi;   
}
