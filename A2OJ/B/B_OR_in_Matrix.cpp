#include <bits/stdc++.h>
#define mod 1000000007
#define lli long long int
#define endl '\n'
#define deb(x) cout << #x << '=' << x << '\n'
#define deb2(x, y) cout << #x << '=' << x << ',' << #y << '=' << y << '\n'
#define deb3(x, y, z) cout << #x << '=' << x << ',' << #y << '=' << y << ',' << #z << '=' << z << '\n'
#define deb4(x, y, z, w) cout << #x << '=' << x << ',' << #y << '=' << y << ',' << #z << '=' << z << ',' << #w << '=' << w << '\n'
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int rows, cols;
    cin >> rows >> cols;
    vector<vector<int>> B(rows, vector<int>(cols, 1));
    vector<vector<int>> A(rows, vector<int>(cols, 1));
    vector<vector<int>> newB(rows, vector<int>(cols, 0));
    unordered_set<int> zr, zc, oner, onec;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cin >> B[i][j];
            if (B[i][j] == 0)
            {
                zr.insert(i);
                zc.insert(j);
            }
        }
    }
    for (auto c : zr)
    {
        for (int j = 0; j < cols; j++)
        {
            A[c][j] = 0;
        }
    }
    for (auto c : zc)
    {
        for (int i = 0; i < rows; i++)
        {
            A[i][c] = 0;
        }
    }

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (A[i][j] == 1)
            {
                oner.insert(i);
                onec.insert(j);
            }
        }
    }

    for (auto c : oner)
    {
        for (int j = 0; j < cols; j++)
        {
            newB[c][j] = 1;
        }
    }
    for (auto c : onec)
    {
        for (int i = 0; i < rows; i++)
        {
            newB[i][c] = 1;
        }
    }
    if (B == newB)
    {
        cout << "YES" << endl;
        for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j < cols; j++)
            {
                cout << A[i][j] << " ";
            }
            cout << endl;
        }
    }
    else
    {
        cout << "NO";
    }
    return 0;
}