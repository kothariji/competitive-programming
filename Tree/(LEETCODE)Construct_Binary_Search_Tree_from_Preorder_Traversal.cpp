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
    TreeNode* util(vector<int>& preorder, int* preIndex, int key, int min, int max, int size){
        if(*preIndex >= size)
            return NULL;
        TreeNode* root = NULL;
        if (key > min && key < max) {
            root = new TreeNode(key);
            *preIndex = *preIndex + 1;
            if (*preIndex < size) {
                root->left = util(preorder, preIndex, preorder[*preIndex], min, key, size);
            }
            if (*preIndex < size) {
                root->right = util(preorder, preIndex, preorder[*preIndex], key, max, size);
            }
        }
        return root;
    }
    
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        int preIndex = 0;
        return util(preorder, &preIndex, preorder[0], INT_MIN, INT_MAX, preorder.size());
    }
};