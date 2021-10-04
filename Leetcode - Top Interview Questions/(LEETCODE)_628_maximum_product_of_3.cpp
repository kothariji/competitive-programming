class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        if(nums.size()==3){
            return nums[0]*nums[1]*nums[2];
        }
        sort(nums.begin(), nums.end());
        int cneg=0;
        for(int i=0; i<nums.size(); i++){
            if(nums[i]<0){
                cneg++;
            }
        }
        if(cneg<2){
            return nums[nums.size()-1]*nums[nums.size()-2]*nums[nums.size()-3];
        }
        else{
            int ans1=0;
            int ans2=0;
            ans1= nums[0]*nums[1]*nums[nums.size()-1];
            ans2= nums[nums.size()-1]*nums[nums.size()-2]*nums[nums.size()-3];
            return max(ans1,ans2);
        }
    }
};