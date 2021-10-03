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
    void inorder(TreeNode *root, vector<int> &v1, int k)
    {
        if (v1.size() >= k)
            return;
        if (root == NULL)
            return;
        inorder(root->left, v1, k);
        v1.push_back(root->val);
        inorder(root->right, v1, k);
    }
    int kthSmallest(TreeNode *root, int k)
    {
        vector<int> v1;
        inorder(root, v1, k);
        return v1[k - 1];
    }
};