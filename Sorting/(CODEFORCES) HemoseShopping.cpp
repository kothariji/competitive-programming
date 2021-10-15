// Problem Link: https://codeforces.com/contest/1592/problem/B
//The answer is always "YES" If n≥2∗x because you can reorder the array as you want.

//Otherwise, You can swap the first n−x elements and the last n−x elements, so you can reorder them as you want but the rest have to stay in their positions in the sorted array.

//So if elements in the subarray [n−x+1,x] in the original array are in their same position after sorting the array then the answer is YES, otherwise NO.

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, x;
        cin >> n >> x;
        vector<int> vec(n);
        for (int i = 0; i < n; i++)
        {
            cin >> vec[i];
        }
        vector<int> vec2(vec);
        sort(vec2.begin(), vec2.end());
        int ctr = 1;
        for (int i = 0; i < n; i++)
        {
            if (vec[i] != vec2[i])
            {

                if (i - x >= 0 || i + x <= n - 1)
                {
                    ;
                }
                else
                {
                    ctr = 0;
                }
            }
        }
        if (ctr)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}
