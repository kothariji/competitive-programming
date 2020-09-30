#include<iostream>
#define MAX 100
using namespace std;

int board[MAX][MAX] = {0};

bool checkup(int i, int j)
{
    for(int row = i-1; row >= 0; row--)
        if(board[row][j] == 1)
            return false;
    return true;
}

bool checkleft(int i, int j)
{
    int x = i-1;
    int y = j-1;
    while((x >=0) && (y >=0))
    {
        if(board[x][y] == 1)
            return false;
        x--;
        y--;
    }
    return true;
}

bool checkright(int i, int j, int n)
{
    int row = i-1;
    int col = j+1;
    while((col < n) && (row >=0))
    {
        if(board[row][col] == 1)
            return false;
        row--;
        col++;
    }
    return true;
}

bool solveNQueen(int i, int j)
{
    //Base Case - All row completed
    if(i == j)
    {
        for(int a = 0; a <j; a++)
        {
            for(int b = 0; b<j; b++)
            {
                if(board[a][b] == 0)
                    cout<<" _ ";
                else
                    cout<<" Q ";
            }
            cout<<endl;
        }
        return true;
    }

    //Recursive Case

    //Trying placing queen in each block
    for(int col = 0; col <j; col++)
    {

        //Step 1:- To check check if the queen can be placed there
        if(checkup(i,col) && checkleft(i,col) && checkright(i,col,j))
        {
            //place the queen
            board[i][col] = 1;
            if(solveNQueen(i+1, j))
            {
                cout<<"\n\n\n";
            }

                //remove the queen
                board[i][col] = 0;

        }
    }
    return false;       //Backtrack

}

int main()
{
    int n;
    cout<<"Enter the size of the chess board:- ";
    cin>>n;
    int board[n][n] = {0};
    solveNQueen(0, n);

}
