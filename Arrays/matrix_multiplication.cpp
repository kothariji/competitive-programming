//Program to multiply two matrices:

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int row1, column1, row2, column2, i, j, k, s=0;
    cout<< "Enter the number of rows and columns of the first matrix : ";
    cin>> row1>> column1;
    int matrix1[row1][column1];
    cout<< "Enter the elements of the first matrix row-wise\n";
    for(i=0; i<row1; i++)
    {
        for(j=0; j<column1; j++)
        cin>> matrix1[i][j];
    }
    cout<< "Enter the number of rows and columns of the second matrix : ";
    cin>> row2>> column2;
    int matrix2[row2][column2];
    cout<< "Enter the elements of the second matrix row-wise\n";
    for(i=0; i<row2; i++)
    {
        for(j=0; j<column2; j++)
        cin>> matrix2[i][j];
    }
    cout<< "\nFirst matrix:\n";
    for(i=0; i<row1; i++)
    {
        for(j=0; j<column1; j++)
        cout<< matrix1[i][j]<<" ";
        cout<< endl;
    }
    cout<< "\nSecond matrix:\n";
    for(i=0; i<row2; i++)
    {
        for(j=0; j<column2; j++)
        cout<< matrix2[i][j]<<" ";
        cout<< endl;
    }
    if(column1!=row2)
    cout<<"\nProduct of the given matrices is not possible";
    else
    {
        cout<< "\nProduct of the given matrices\n";
        for(i=0; i<row1; i++)
        {
            for(j=0; j<column2; j++)
            {
                for(k=0; k<row2; k++)
                s+= matrix1[i][k]*matrix2[k][j];
                cout<< s<<" ";
                s=0;
            }
            cout<< endl;
        }
    }
    return 0;
}