class Solution {
public:
    int jump(vector<int>& nums) {
        int n = nums.size()-1;
        int steps=0,dest=0,pos=0;
        for(int i=0;i<n;i++){
            dest = max(dest,i+nums[i]);
            if(pos==i){
                pos=dest;
                steps++;
            }
        }
        return steps;
    }
};