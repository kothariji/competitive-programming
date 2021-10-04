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
    bool hasPathSum(TreeNode* root, int targetSum) {
        if(root==nullptr)
            return false;
        
        bool ansl=false;
        bool ansr=false;
        if(root->left==nullptr && root->right==nullptr){
            if(root->val==targetSum)
                return true;
            else
                return false;
        }
        else if(root->left==nullptr){
            ansr= hasPathSum(root->right, targetSum-(root->val));
        }
        else if(root->right==nullptr){
            ansl= hasPathSum(root->left, targetSum-(root->val));
        }
        else{
            ansl= hasPathSum(root->left, targetSum-(root->val));
            ansr= hasPathSum(root->right, targetSum-(root->val));
        }
        return ansl||ansr;
    }
};