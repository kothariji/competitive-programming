#include <bits/stdc++.h>
using namespace std;

int main()
{
    int col;
    string s;
    while (1)
    {
        cin >> col;
        if (col == 0)
            break;
        cin >> s;
        int len = s.length();
        int row = len / col;
        char a[row][col];
        bool toggle = true;
        int index = 0;
        for (int i = 0; i < row; i++)
        {
            if (toggle)
                for (int j = 0; j < col; j++)
                {
                    a[i][j] = s[index];
                    toggle = false;
                    index++;
                }
            else
            {
                for (int j = col - 1; j > -1; j--)
                {
                    a[i][j] = s[index];
                    toggle = true;
                    index++;
                }
            }
        }
        for (int i = 0; i < col; i++)
        {
            for (int j = 0; j < row; j++)
            {
                cout << a[j][i];
            }
        }
        cout<<endl;
    }
}