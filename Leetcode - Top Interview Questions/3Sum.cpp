class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>>ans;
        vector<int> temp;
        sort(nums.begin(), nums.end());
        if(nums.size()<3)
            return ans;
        int i,j,k;
        for(i=0;i<nums.size()-2;i++){
            if(i!=0 && nums[i]==nums[i-1])
                continue;
            j=i+1;
            k=nums.size()-1;
            
            while(j<k){
                if(-nums[i]==nums[j]+nums[k]){
                    temp.clear();
                    temp.push_back(nums[i]);
                    temp.push_back(nums[j]);
                    temp.push_back(nums[k]);
                    // if(find(ans.begin(),ans.end(),temp)==ans.end()){
                        ans.push_back(temp);
                        //cout<<"in if";
                    // }
                    while(j<k && nums[j]==nums[j+1])  
                        j++;
                    j++;
                    
                    k--;
                }
                else if(-nums[i]<nums[j]+nums[k])
                    k--;
                else
                    j++;
            }
        }
        return ans;            
    }
};
