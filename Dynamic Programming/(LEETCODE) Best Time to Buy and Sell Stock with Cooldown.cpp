class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        vector<int> f1(2, 0);
        vector<int> f2(2, 0);
        vector<int> curr(2, 0);
        
        for(int idx=n-1;idx>=0;idx--){
                curr[1] = max(-prices[idx]+f1[0] , f1[1]);
                curr[0] = max(prices[idx]+f2[1], f1[0]);
            
            f2=f1;
            f1=curr;
        }
            return curr[1];
    }
};
