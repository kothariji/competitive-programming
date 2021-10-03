#include <bits/stdc++.h>
using namespace std;

int main()
{
    int no_of_lat, len_of_st;
    cin >> no_of_lat >> len_of_st;
    vector<int> v1(no_of_lat);
    for (int i = 0; i < no_of_lat; i++)
        cin >> v1[i];
    sort(v1.begin(), v1.end());
    int max_dist = max(v1[0] * 2, (len_of_st - v1[no_of_lat - 1]) * 2);
    for (int i = 1; i < no_of_lat; i++)
    {
        max_dist = max(max_dist, v1[i] - v1[i - 1]);
        // cout << v1[i] - v1[i - 1] << " " << max_dist << endl;
    }
    float ans = (float)max_dist / (float)2;
    cout << setprecision(10) << fixed << ans;
}