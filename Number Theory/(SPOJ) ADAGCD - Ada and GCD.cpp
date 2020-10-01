#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <cstring>
#include <numeric>
#include <algorithm>
#include <functional>
#include <vector>
#include <queue>
#include <stack>
#include <set>
#include <map>
//#include <unordered_map>
#include <bitset>
#include <utility>
#include <cassert>
#include <iomanip>
#include <ctime>
#include <fstream>

using namespace std;

const int me = 10000025;
const int mod = 1000000007;

template <class T> void fastInput(T &n){
    char ch;
    int sign = 1;
    while(ch = getchar_unlocked(), isspace(ch)) {
        
    };
    n = 0;
    if(ch == '-')
        sign = -1;
    else n = ch - '0';
    while(ch = getchar_unlocked(), isdigit(ch))
        n = (n << 3) + (n << 1) + ch - '0';
    n *= sign;
}

int N, M;
int x;
int lp[me], s[me], cnt[me], have[me];

int bin_pow(int a, int b){
    if(b == 0)
        return 1;
    if(b & 1)
        return 1LL * bin_pow(a, b - 1) * a % mod;
    int half = bin_pow(a, b >> 1);
    return 1LL * half * half % mod;
}

int main() {
    //ios_base::sync_with_stdio(0);
    //cin.tie(0);
    
    for(int i = 2; i < me; i ++)
        if(!lp[i]){
            for(int j = i; j < me; j += i)
                lp[j] = i;
        }
    fill(s, s + me, 1 << 30);
    
    fastInput(N);
    for(int i = 0; i < N; i ++){
        fastInput(M);
        vector<int> active;
        for(int j = 0; j < M; j ++){
            fastInput(x);
            while(x > 1){
                int d = lp[x];
                active.push_back(d);
                while(x % d == 0){
                    have[d] ++;
                    x /= d;
                }
            }
        }
        sort(active.begin(), active.end());
        active.erase(unique(active.begin(), active.end()), active.end());
        
        for(int j : active){
            cnt[j] ++;
            s[j] = min(s[j], have[j]);
            have[j] = 0;
        }
    }
    int result = 1;
    for(int i = 2; i < me; i ++)
        if(cnt[i] == N)
            result = 1LL * result * bin_pow(i, s[i]) % mod;
    cout << result << endl;
    
    return 0;
}
