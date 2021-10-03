#include <bits/stdc++.h>
#define mod 1000000007
#define lli long long int
#define endl '\n'
#define deb(x) cout << #x << '=' << x << '\n'
#define deb2(x, y) cout << #x << '=' << x << ',' << #y << '=' << y << '\n'
#define deb3(x, y, z) cout << #x << '=' << x << ',' << #y << '=' << y << ',' << #z << '=' << z << '\n'
#define deb4(x, y, z, w) cout << #x << '=' << x << ',' << #y << '=' << y << ',' << #z << '=' << z << ',' << #w << '=' << w << '\n'
using namespace std;

bool isValid(vector<vector<int>> mat)
{
    int row1 = mat[0][0] + mat[0][1] + mat[0][2];
    int row2 = mat[1][0] + mat[1][1] + mat[1][2];
    int row3 = mat[2][0] + mat[2][1] + mat[2][2];

    int col1 = mat[0][0] + mat[1][0] + mat[2][0];
    int col2 = mat[0][1] + mat[1][1] + mat[2][1];
    int col3 = mat[0][2] + mat[1][2] + mat[2][2];

    int ld = mat[0][0] + mat[1][1] + mat[2][2];
    int rd = mat[0][2] + mat[1][1] + mat[2][0];
    if ((row1 == row2) && (row1 == row3) && (row1 == col1) && (row1 == col2) && (row1 == col3) && (row1 == ld) && (row1 == rd))
        return true;
    return false;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    vector<vector<int>> mat(3, vector<int>(3, 0));
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> mat[i][j];
        }
    }

    for (int i = 1; i <= 100000; i++)
    {
        mat[0][0] = i;
        mat[1][1] = mat[0][0] + mat[0][1] + mat[0][2] - mat[1][0] - mat[1][2];
        mat[2][2] = mat[0][1] + mat[0][2] - mat[1][1];
        if (isValid(mat))
        {
            for (int m = 0; m < 3; m++)
            {
                for (int n = 0; n < 3; n++)
                {
                    cout << mat[m][n] << " ";
                }
                cout << endl;
            }
            return 0;
        }
    }
    return 0;
}