#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    if (n >= 0)
    {
        cout << n << endl;
    }
    else
    {
        int p = n / 10;
        int q = n / 100 * 10 + n % 10;
        cout << max(p, q) << endl;
    }
    return 0;
}
