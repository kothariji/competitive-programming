#include <bits/stdc++.h>
#define mod 1000000007
#define lli long long int
#define endl "\n"
using namespace std;

double dist(lli x1, lli x2, lli y1, lli y2)
{
    return (sqrt(pow((x1 - x2), 2) + pow((y1 - y2), 2)));
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    lli r, x1, x2, y1, y2;
    cin >> r >> x1 >> y1 >> x2 >> y2;
    double len = dist(x1, x2, y1, y2);
    cout << ceil(len / (2 * r));
    return 0;
}