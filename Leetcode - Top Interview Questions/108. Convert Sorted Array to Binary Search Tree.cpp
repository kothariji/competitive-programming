/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution
{
public:
    TreeNode *sortedArrayToBST(vector<int> &nums)
    {

        if (nums.size() == 0)
            return nullptr;

        if (nums.size() == 1)
        {
            TreeNode *temp = new TreeNode(nums[0], nullptr, nullptr);
            return temp;
        }

        int mid = nums.size() / 2;

        TreeNode *temp = new TreeNode(nums[mid]);

        vector<int> lvect, rvect;
        for (int i = 0; i < mid; i++)
            lvect.push_back(nums[i]);

        for (int i = mid + 1; i < nums.size(); i++)
            rvect.push_back(nums[i]);

        temp->left = sortedArrayToBST(lvect);
        temp->right = sortedArrayToBST(rvect);

        return temp;
    }
};