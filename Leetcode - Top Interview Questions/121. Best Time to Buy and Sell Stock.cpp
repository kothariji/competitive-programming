class Solution
{
public:
    int maxProfit(vector<int> &prices)
    {
        int n = prices.size();
        if (n == 1)
            return 0;
        int m = n - 1;
        vector<int> mini(m), maxi(m);
        mini[0] = prices[0];
        maxi[m - 1] = prices[m];
        for (int i = 1; i < m; i++)
            mini[i] = min(prices[i], mini[i - 1]);
        for (int i = m - 2; i >= 0; i--)
            maxi[i] = max(prices[i + 1], maxi[i + 1]);
        int maxP(0);
        for (int i = 0; i < n - 1; i++)
        {
            maxP = max(maxP, maxi[i] - mini[i]);
        }
        return maxP;
    }
};