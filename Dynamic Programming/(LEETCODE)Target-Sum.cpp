class Solution {
public:
    int findTargetSumWays(vector<int>& nums, int S) {
        if(nums.size()==0){
            return 0;
        }
        int sum=0,count=0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            if(nums[i]==0){
                count++;
            }
        }
        if(sum<S || (sum-S)%2!=0){
            return 0;
        }
        int s1=(sum-S)/2;
        return subsetSum(nums,s1,count);
    }
    
    int subsetSum(vector<int>& arr, int S,int count){
        vector<vector<int>> dp(arr.size()+1,vector<int> (S+1));
        for(int i=0;i<arr.size()+1;i++){
        for(int j=0;j<S+1;j++){
            if(i==0){
                dp[i][j]=0;
            }
            if(j==0){
                dp[i][j]=1;
            }
        }
    }
        
    for(int i=1;i<arr.size()+1;i++){
    for(int j=1;j<S+1;j++){
            if(arr[i-1]==0)
            {dp[i][j]=dp[i-1][j];}
            else if(arr[i-1]<=j){
                dp[i][j]=dp[i-1][j-arr[i-1]] + dp[i-1][j];     
            }else{
                dp[i][j]=dp[i-1][j];
            }
        }
    }
    return pow(2,count)*dp[arr.size()][S];
    }
        
};