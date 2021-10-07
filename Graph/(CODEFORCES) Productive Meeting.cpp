#include<bits/stdc++.h>

using namespace std;

int main() {
    int t ;
    cin >> t;
    while (t--) {
        priority_queue<pair<int, int>> q;
        int n;
        cin >> n;
        for (int i = 1; i <= n; i++) {
            int a;
            cin >> a;
            q.push({a, i});
        }
        std::vector<pair<int, int>> ans;
        while (q.empty() == 0) {
            if (q.size() < 2) {
                break;
            }

            pair<int, int> a = q.top();
            q.pop();

            pair<int, int> b = q.top();
            q.pop();
            if (a.first != 0 && b.first != 0) {
                ans.push_back({a.second, b.second});
                a.first--;
                b.first--;
            }
            if (a.first != 0) {
                q.push(a);
            }
            if (b.first != 0) {
                q.push(b);
            }

        }

        cout << ans.size() << endl;
        for (auto i : ans) {
            cout << i.first << " " << i.second << endl;
        }


    }


    return 0;

}