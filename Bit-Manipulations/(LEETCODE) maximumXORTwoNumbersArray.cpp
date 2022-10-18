// https://leetcode.com/problems/maximum-xor-of-two-numbers-in-an-array/description/

class Solution
{
public:
    int findMaximumXOR(vector<int> &nums)
    {
        int max = 0, mask = 0;
        for (int i = 31; i >= 0; i--)
        {
            mask = mask | (1 << i);
            set<int> s;
            for (int num : nums)
            {
                s.insert(num & mask);
            }
            int tmp = max | (1 << i);
            // cout << tmp << endl;
            for (int prefix : s)
            {
                // cout << prefix << " " << tmp << endl;
                if (s.count(tmp ^ prefix))
                {
                    max = tmp;
                    break;
                }
            }
            // cout << max << endl  << endl;
        }
        return max;
    }
};