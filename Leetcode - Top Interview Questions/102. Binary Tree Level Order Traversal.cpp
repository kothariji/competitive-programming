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
    vector<vector<int>> levelOrder(TreeNode *root)
    {
        vector<vector<int>> result;
        if (!root)
            return result;
        queue<TreeNode *> q1;
        q1.push(root);
        while (!q1.empty())
        {
            int len = q1.size();
            vector<int> v1;
            for (int i = 0; i < len; i++)
            {
                TreeNode *temp = q1.front();
                v1.push_back(temp->val);
                q1.pop();
                if (temp->left)
                    q1.push(temp->left);
                if (temp->right)
                    q1.push(temp->right);
            }
            result.push_back(v1);
        }
        return result;
    }
};