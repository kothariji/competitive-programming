#include <iostream>
#include <vector>
#include <algorithm>
 
using namespace std;
 
int n, x, r = 1;
 
int main() {
    cin >> n;
    vector<pair<int,int>> v;
    v.push_back({0,1});
    for (int i = 1; i <= n; i++) {
        cin >> x;
        v.push_back({x,i});
    }
    sort(v.begin(),v.end());
    for (int i = 0; i < n; i++) {
        if (v[i].second > v[i+1].second) r++;
    }
    cout << r << "\n";
}