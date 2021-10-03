#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
 
    int64_t x, n;
    cin >> x >> n;
    multiset<int64_t> marked, heap;
    marked.insert(0);
    marked.insert(x);
    heap.insert(x);
    while (n--) {
        int64_t x, l, r;
        cin >> x;
        auto r_it = marked.upper_bound(x);
        r = *r_it;
        l = *(--r_it);
        marked.insert(x);
        heap.erase(heap.find(r - l));
        heap.insert(x - l);
        heap.insert(r - x);
        cout << *heap.rbegin() << " ";
    }
 
    cout << endl;
}