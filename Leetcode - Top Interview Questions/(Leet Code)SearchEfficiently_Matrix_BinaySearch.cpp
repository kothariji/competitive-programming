/*
Write an efficient algorithm that searches for a value target in an m x n integer matrix matrix. This matrix has the following properties:
Integers in each row are sorted from left to right.
The first integer of each row is greater than the last integer of the previous row.
 
*/


class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m=matrix.size();
        int n=matrix[0].size();
        int m1=m,n1=n;
        /*
        for(int i=0;i<m/2+1;i++){
            for(int j=0;j<n/2+1;j++)
            {
                if(matrix[i][j]==target)
                    return true;
                if(matrix[--m1][--n1]==target)
                    return true;
            }
        }        */
        //Using binary seach
        int low=0,elm_hig=m*n-1;
        
        while(low<=elm_hig) //base condition
        {
            int mid=low+(elm_hig-low)/2;
            int element = matrix[mid/n][mid%n];
            //Goal condition 
            if(target==element)
                return 1;
            if(element <target)
                low=mid+1;
            else
                elm_hig=mid-1;
        mid=low+(elm_hig-low)/2;
    }
    return false;
    }
};
