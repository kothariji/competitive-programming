class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> ans;
        int c=0,i,j,n=matrix.size(),m=matrix[0].size(),p=0;
        while(p<n*m)
        {
            for(i=c;i<m-c-1;i++)
                if(matrix[c][i]!=101)
                ans.push_back(matrix[c][i]),matrix[c][i]=101,p++;
            else return ans;
            for(j=c;j<n-1-c;j++)
                if(matrix[j][m-1-c]!=101)
                ans.push_back(matrix[j][m-1-c]),matrix[j][m-1-c]=101,p++;
            else return ans;
            for(i=m-1-c;i>=c;i--)
                if(matrix[n-1-c][i]!=101)
                ans.push_back(matrix[n-1-c][i]),matrix[n-1-c][i]=101,p++;
            else return ans;
        
            for(j=n-2-c;j>c;j--)
                if(matrix[j][c]!=101)
                ans.push_back(matrix[j][c]),matrix[j][c]=101,p++;
            else return ans;
            c++;
        }
    
        return ans;
    }
    
};
