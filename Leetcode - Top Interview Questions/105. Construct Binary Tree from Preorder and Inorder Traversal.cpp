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
    TreeNode *buildTree(vector<int> &preorder, vector<int> &inorder)
    {
        if (preorder.size() == 0 || inorder.size() == 0)
            return NULL;
        TreeNode *root = new TreeNode(preorder[0], nullptr, nullptr);
        if ((preorder.size() == 1) || (inorder.size() == 1))
            return root;
        vector<int> rinorder, linorder, rpreorder, lpreorder;
        unordered_set<int> lset, rset;
        int idx = -1;
        for (int i = 0; i < inorder.size(); i++)
        {
            if (inorder[i] == root->val)
            {
                idx = i;
                break;
            }
        }
        for (int i = 0; i < idx; i++)
        {
            linorder.push_back(inorder[i]);
            lset.insert(inorder[i]);
        }
        for (int i = idx + 1; i < inorder.size(); i++)
        {
            rinorder.push_back(inorder[i]);
            rset.insert(inorder[i]);
        }
        for (int i = 0; i < preorder.size(); i++)
        {
            if (lset.find(preorder[i]) != lset.end())
            {
                lpreorder.push_back(preorder[i]);
            }
            else if (rset.find(preorder[i]) != lset.end())
            {
                rpreorder.push_back(preorder[i]);
            }
        }
        root->left = buildTree(lpreorder, linorder);
        root->right = buildTree(rpreorder, rinorder);
        return root;
    }
};