#include<bits/stdc++.h>
using namespace std;
 
#define pb push_back
#define veci vector<int>
#define vecll vector<long long>
#define maxe *max_element
 
typedef long long ll;
 
int n,m;
long long k;
int half;
long long arr[20][20];
long long ans;
 
map <long long ,int> mp[20][20];
 
void fwd(int x, int y, ll val, int cnt){
        
    val ^= arr[x][y];
 
    if(cnt == half){
        ++mp[x][y][val];
        return;
    }
    if(x + 1 < n)
        fwd(x+1, y, val, cnt + 1);
    if(y + 1 < m)
        fwd(x, y+1, val, cnt + 1);
 
}
 
void bck(int x, int y, long long val, int cnt){
    if(cnt == m + n - 2 - half){
        if(mp[x][y].count(k ^ val))
            ans += mp[x][y][k ^ val];
        return;
 
    }
 
    if(x > 0)
        bck(x-1, y, val ^ arr[x][y], cnt + 1);
    if(y > 0)
        bck(x, y - 1, val^arr[x][y], cnt + 1);
    return;
 
}
 
void solve(){
 
    cin >> n >> m >> k;
 
    half = (m + n - 2)/2;
 
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> arr[i][j];
        }
    }
 
    fwd(0,0,0,0);
    bck(n-1,m-1,0,0);
 
    cout << ans << endl;   
}
 
int main(){
    int t = 1;
    //cin >> t;
    while(t--){
        solve();
    }
 
    return 0;
}
 