// Question Link : https://leetcode.com/problems/maximum-points-you-can-obtain-from-cards/

// 1. Calculate the length of minimum subsequence.
// 2. Run a loop which calculates the overall sum,sum of first subsequence and the minimum (mini) of remaining subsequences (temp) .
// 3. Return sum - mini ( The maximum sum we can achieve by removing k elements from the front or beginning) 


class Solution {
public:
    int maxScore(vector<int>& v, int k) {
        // mini : sum of the minimum subsequence of length x=n-k
        // temp : sum of the sliding window subsequence of length x=n-k
        int n=v.size(),sum=0,mini=0,temp=0,x=n-k;
        for(int i=0;i<n;i++)
        {
            sum+=v[i]; // total sum
            if(i<x){mini+=v[i];temp+=v[i];} // sum of first subsequence
            else
            {
                temp+=v[i]-v[i-x]; // sliding window subsequence
                mini=min(mini,temp); // minimum subsequence
            }
        }
        // sum-mini is the maximum sum we can take out from the ends in k chances
        return sum-mini; 
    }
};


// TC : O(N) 
// SC : O(1)