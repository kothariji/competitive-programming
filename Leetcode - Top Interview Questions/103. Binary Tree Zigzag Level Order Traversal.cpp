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
    vector<vector<int>> zigzagLevelOrder(TreeNode *root)
    {
        vector<vector<int>> res;
        queue<TreeNode *> q1;
        if (!root)
            return res;
        q1.push(root);
        int count = 1;
        while (!q1.empty())
        {
            vector<int> v1;
            int tempcount = 0;
            for (int i = 0; i < count; i++)
            {
                TreeNode *temp = q1.front();
                v1.push_back(temp->val);
                q1.pop();
                if (temp->left)
                {
                    q1.push(temp->left);
                    tempcount++;
                }
                if (temp->right)
                {
                    q1.push(temp->right);
                    tempcount++;
                }
            }
            count = tempcount;
            res.push_back(v1);
        }
        bool toggle = false;
        for (auto &c : res)
        {
            if (toggle)
                reverse(c.begin(), c.end());
            toggle = !toggle;
        }
        return res;
    }
};