//2009. Minimum Number of Operations to Make Array Continuous https://leetcode.com/problems/minimum-number-of-operations-to-make-array-continuous/
class Solution {
public:
    int minOperations(vector<int>& nums) {
        set<int>s(nums.begin(),nums.end());
        vector<int>v(s.begin(),s.end());
        int m=v.size();int n=nums.size();
        int j=0;
        int i=0;
        while(j<m){
            if(v[j]-v[i]>=n)
                i++;
            j++;
        }
        return n-(j-i);
    }
};
