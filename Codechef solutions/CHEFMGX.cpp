#include <bits/stdc++.h>
using namespace std;

const int maxn = 1e7;
bool prime[maxn+2];
int total_prime[maxn+2];

void seive(){
    int n= maxn;
    fill(begin(prime), end(prime), true);
    prime[0] = false;
    prime[1] = false;
    for(int i=2;i<=n;i++){
        total_prime[i] = total_prime[i-1];
        if(!prime[i]){
            continue;
        }
        total_prime[i]++;
        for(int j=2*i;j<=n;j+=i){
            prime[j] = false;
        }
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    seive();
    int t;
    cin>>t;
    while(t--){
        int x, y;
        cin>>x>>y;
        int min_steps = y-x -(total_prime[y]-total_prime[x+1]);
        cout<<min_steps<<'\n';
    }
}