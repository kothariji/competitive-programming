class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int i,s=nums.size();
        int start=0;
        int sum=0;
        int result=INT_MAX;
        int k=0;
        int initialSum=0;
        while(k<s){
            initialSum+=nums[k];
            k++;
        }
        if(initialSum<target){
            return 0;
        }
        for(i=0; i<s; i++){
            sum+=nums[i];
            while(sum>=target){
                result=min(result,i-start+1);
                sum-=nums[start];
                start++;
            }
        }
        return result;
    }
};
