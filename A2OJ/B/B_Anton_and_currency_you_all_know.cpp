#include <bits/stdc++.h>
using namespace std;

int FI(string num, char last)
{
    for (int i = 0; i < num.length(); i++)
    {
        if (num[i] == '2' || num[i] == '4' || num[i] == '6' || num[i] == '8' || num[i] == '0')
        {
            if (num[i] < last)
                return i;
        }
    }
    for (int i = num.length() - 1; i >= 0; i--)
    {
        if (num[i] == '2' || num[i] == '4' || num[i] == '6' || num[i] == '8' || num[i] == '0')
        {
            if (num[i] > last)
                return i;
        }
    }
    return -1;
}
int main()
{
    string num;
    cin >> num;
    char last = num[num.length() - 1];
    if (last == '2' || last == '4' || last == '6' || last == '8' || last == '0')
    {
        return 0;
    }
    else
    {
        int idx = FI(num, last);
        if (idx == -1)
            cout << -1;
        else
        {
            swap(num[idx], num[num.length() - 1]);
            cout << num;
        }
    }
}