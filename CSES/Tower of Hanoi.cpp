#include <bits/stdc++.h>
using namespace std;

void towerOfHanoi(int n, char one, char three, char two)
{
    if (n == 1)
    {
        cout << one << " " << three << "\n";
        return;
    }
    towerOfHanoi(n - 1, one, two, three);
    cout << one << " " << three << "\n";
    towerOfHanoi(n - 1, two, three, one);
}

int main()
{
    int n;
    cin >> n;
    int ans = pow(2, n);
    cout << ans-1 << "\n";
    towerOfHanoi(n, '1', '3', '2');
    return 0;
}