class Solution {
    vector<int> cum;
    int csum;
public:
    Solution(vector<int>& w) {
        csum=0;
        for(int x : w){
            csum += x;
            cum.push_back(csum); 
        }
                
    }
    
    int pickIndex() {
        int idx = rand() % csum;
        int res = upper_bound(cum.begin(),cum.end(),idx) - cum.begin(); 
        return res;
       // return binarySearch(idx+1);
    }  
};