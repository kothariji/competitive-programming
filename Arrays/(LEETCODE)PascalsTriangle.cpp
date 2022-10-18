// Problem 119 Pascals Triangle II   (Arrays). 

// Given an integer rowIndex, return the rowIndexth (0-indexed) row of the Pascal's triangle.

// In Pascal's triangle, each number is the sum of the two numbers directly above it as shown:

//                                                             1
//                                                           1   1 
//                                                         1   2   1
//                                                       1   3   3   1
//                                                      1  4   6   4   1
// Example 1:

// Input: rowIndex = 3
// Output: [1,3,3,1]

// Example 2:

// Input: rowIndex = 0
// Output: [1]

// Example 3:

// Input: rowIndex = 1
// Output: [1,1]


// My Solution
class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int> A(rowIndex+1);
        for(int i=0;i<=rowIndex;i++){
            A[0]=1;
            A[i]=1;
            for(int j=i-1;j>0;j--){
                A[j]=A[j]+A[j-1];
            }
        }
        return A;
    }
};
