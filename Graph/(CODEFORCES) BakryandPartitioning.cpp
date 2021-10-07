//https://codeforces.com/contest/1592/problem/C

/*The most important observation is: If you can partition the tree into m components such that the xor of every component is x, Then you can partition the tree into m−2 components by merging any 3 adjacent components into 1 component, and the xor of the new component will equal x, since x xor x xor x = x.

Notice that the answer is always YES if the xor of the array is 0. Because you can delete any edge in the tree, and the 2 components will have the same xor.

Otherwise, We need to partition the tree into 3 components that have the same xor. Let x be the xor of all node values in the tree, then The xor of every component will equal x.

We need to search for 2 edges to delete from the tree and one of them such that the xor every component equals x and if we found them and K≠2 then the answer is "YES" otherwise "NO".

To search on the 2 edges, We will first root the tree on node 1, then we will search on the deepest subtree such that xor value of subtree equals x, then erase the edge and search again for the 2nd edge.*/


#include <bits/stdc++.h>
using namespace std;
 
 
int a[100010];
vector<int>g[101000];
int ans, num;
int dfs(int x, int fa) {
    int now = a[x];
    for(auto i : g[x]) {
        if(i == fa) continue;
        now ^= dfs(i, x);
    }
    if(now == ans) {
        num++;
        return 0;
    }
    return now;
}
int main() {
    int t;
    cin >> t;
    while(t--) {
        int n, k;
        scanf("%d%d", &n, &k);
        ans = 0;
        num = 0;
        for(int i = 1; i <= n; i++) {
            scanf("%d", &a[i]);
            ans ^= a[i];
            g[i].clear();
        }
        for(int i = 1; i < n; i++) {
            int u, v;
            scanf("%d%d", &u, &v);
            g[u].push_back(v);
            g[v].push_back(u);
        }
        dfs(1, 0);
        if((num > 2 && k >= 3) || ans == 0) printf("YES\n");
        else printf("NO\n");
    }
}
