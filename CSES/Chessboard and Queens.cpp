#include <bits/stdc++.h>
 
using namespace std;
 
vector<int> columns;
string lines[8];
int res = 0;
 
void solve(int i)
{
  if (i == 8)
  {
    res++;
    return;
  }
  for (int j = 0; j < 8; j++)
  {
 
    if (lines[i][j] == '*')
      continue;
 
    bool flag = true;
    for (int k = 0; k < i; k++)
    {
      if (columns[k] == j || columns[k] == j + (i - k) || columns[k] == j - (i - k))
      {
        flag = false;
        break;
      }
    }
    if (!flag)
      continue;
    columns.push_back(j);
    solve(i + 1);
    columns.pop_back();
  }
}
 
int main()
{
  for (int i = 0; i < 8; i++)
    cin >> lines[i];
  solve(0);
  cout << res << endl;
}