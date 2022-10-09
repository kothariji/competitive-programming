class Solution
{
public:
    int dp[301][5001];
    int func(int ind, int amt, vector<int> &coins)
    {
        if (amt == 0)
            return 1;
        if (ind < 0)
            return 0;
        if (dp[ind][amt] != -1)
            return dp[ind][amt];
        int ans = 0;
        for (int cnamt = 0; cnamt <= amt; cnamt += coins[ind])
        {
            ans += func(ind - 1, amt - cnamt, coins);
        }
        return dp[ind][amt] = ans;
    }

    int change(int amt, vector<int> &coins)
    {
        memset(dp, -1, sizeof(dp));
        int ans = func(coins.size() - 1, amt, coins);
        return ans;
    }
};