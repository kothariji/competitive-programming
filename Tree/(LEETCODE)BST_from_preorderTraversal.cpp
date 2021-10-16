class Solution {
public:
    TreeNode* constructBST(vector<int> preorder,int low,int high){
        if(low>=preorder.size() || low>high)
        return NULL;

        TreeNode* root=new TreeNode(preorder[low]);
        if(high==low)
        return root;
        int i;
        for(i=low;i<=high;i++)
        if(preorder[i]>root->val)
        break;

        root->left=constructBST(preorder,low+1,i-1);
        root->right=constructBST(preorder,i,high);
        return root;
    }

    TreeNode* bstFromPreorder(vector<int>& preorder) {
        return constructBST(preorder,0,preorder.size()-1);
    }
};
