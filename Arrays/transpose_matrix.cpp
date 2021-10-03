//Transpose of a matrix

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int row, column, i, j;
    cout<< "Enter the number of rows and columns of a matrix respectively : ";
    cin>> row>> column;
    int matrix[row][column];
    cout<< "\nEnter the elements of the matrix\n";
    for(i=0; i<row; i++)
    {
        for(j=0; j<column; j++)
        cin>> matrix[i][j];
    }
    cout<< "\nGiven Matrix\n";
    for(i=0; i<row; i++)
    {
        for(j=0; j<column; j++)
        cout<< matrix[i][j]<< " ";
        cout<< endl;
    }
    cout<< "\nTranspose of the given Matrix\n";
    for(i=0; i<column; i++)
    {
        for(j=0; j<row; j++)
        cout<< matrix[j][i]<< " ";
        cout<< endl;
    }
    return 0;
}