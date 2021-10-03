
/****************** Complete Solution ****************************/

class Solution
{
public:
    void solve(vector<vector<int>> &v1, vector<int> &nums, unordered_set<int> s1, vector<int> res)
    {
        if (s1.size() == nums.size())
        {
            v1.push_back(res);
            return;
        }
        for (int i = 0; i < nums.size(); i++)
        {
            if (s1.find(nums[i]) == s1.end())
            {
                s1.insert(nums[i]);
                res.push_back(nums[i]);
                solve(v1, nums, s1, res);
                res.pop_back();
                s1.erase(nums[i]);
            }
        }
        return;
    }

    vector<vector<int>> permute(vector<int> &nums)
    {
        vector<vector<int>> v1;
        unordered_set<int> s1;
        vector<int> res;
        solve(v1, nums, s1, res);
        return v1;
    }
};

/********************* using inbuilt functions ****************************/
class Solution
{
public:
    vector<vector<int>> permute(vector<int> &nums)
    {

        vector<vector<int>> v1;
        sort(nums.begin(), nums.end());
        v1.push_back(nums);
        while (next_permutation(nums.begin(), nums.end()))
        {
            v1.push_back(nums);
        }
        return v1;
    }
};