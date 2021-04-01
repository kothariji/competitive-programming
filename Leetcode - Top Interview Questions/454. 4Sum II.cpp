class Solution
{
public:
    int fourSumCount(vector<int> &A, vector<int> &B, vector<int> &C, vector<int> &D)
    {
        unordered_map<int, int> mp1;
        for (int a : A)
            for (int b : B)
                mp1[a + b]++;
        int ans(0);
        for (int c : C)
            for (int d : D)
                if (mp1.find(0 - c - d) != mp1.end())
                    ans += mp1[0 - c - d];
        return ans;
    }
};