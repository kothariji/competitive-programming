#include<bits/stdc++.h>
#define fastio 	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long int
using namespace std;
#define N 3
int T[N][N], I[N][N], arr[N];

// https://www.hackerrank.com/challenges/fibonacci-finding-easy/problem

int mod = 1e9 + 7;

void mul(int A[][N], int B[][N], int dim) {
    int res[dim + 1][dim + 1];
    for(int i = 1; i <= dim; i++) {
        for(int j = 1; j <= dim; j++) {
            res[i][j] = 0;
            for(int k = 1; k <= dim; k++)
                res[i][j] = (res[i][j] + A[i][k] * B[k][j]) % mod;
        }
    }
    for(int i = 1; i <= dim; i++)
        for(int j = 1; j <= dim; j++)
            A[i][j] = res[i][j];
}

int getFib(int n) {
    if(n <= 2)
        return arr[n];

    // Identity Matrix
    I[1][1] = I[2][2] = 1;
    I[1][2] = I[2][1] = 0;

    // Transition Matrix for sequence
    T[1][1] = 0;
    T[1][2] = T[2][1] = T[2][2] = 1;

    // as transition matrix raise to n - 1 for nth term
    n--;

    while(n) {
        if(n & 1)
            mul(I, T, 2), n--;
        else
            mul(T, T, 2), n /= 2;
    }
    return (arr[1] * I[1][1] + arr[2] * I[2][1]) % mod;
}


int32_t main() {
    int t, n;
    cin >> t;
    while(t--) {
        cin >> arr[1] >> arr[2] >> n;
        n++;
        cout << getFib(n) << endl;
    }
    return 0;
}

