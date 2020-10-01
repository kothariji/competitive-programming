
class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        if(root == NULL)
            return ans;
        queue <TreeNode* > q1;
        q1.push(root);
        while(!q1.empty())
        {
            int n = q1.size();
            vector<int> sub;
            for(int i = 0; i<n; i++)
            {
                TreeNode* temp = q1.front();
                sub.push_back(temp->val);
                q1.pop();
                if(temp->left)
                    q1.push(temp->left);
                if(temp->right)
                    q1.push(temp->right);
            }
            ans.push_back(sub);
        }
        for(int i = 0; i<ans.size(); i++)
            if(i%2)
                reverse(ans[i].begin(), ans[i].end());
        return ans;
    }
};
