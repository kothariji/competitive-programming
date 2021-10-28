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
class Solution {
public:
    int sum =  INT_MIN;
    int findSum(TreeNode* root){
        if(root==NULL)
            return 0;

        int ls = findSum(root->left);
        int rs = findSum(root->right);
        ls = max(ls,0);
        rs = max(rs, 0);
        int cs = ls + rs + root->val;
        sum = max(sum, cs);

        return max(ls, rs) + root->val;

    }
    int maxPathSum(TreeNode* root) {
      findSum(root);
        return sum;
    }
};
