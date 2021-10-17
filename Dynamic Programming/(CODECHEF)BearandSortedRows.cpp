#include <bits/stdc++.h>
using namespace std;
int a[301][301];
int backup[301][301];
int s[1000];
bool check(int n) {
    for(int i=1;i<n;i++) {
        bool f = true;
        for(int j=0;j<n;j++) {
            if(a[i][j]<a[i][j-1]) f = false;
        }
        if(!f) {
            for(int j=0;j<n;j++) {
                if(a[i][j]>a[i][j-1]) return false;
            }
        }
    }
    return true;
}
void copy(int n) {
    for(int i=0;i<n;i++) 
        for(int j=0;j<n;j++) {
            
            backup[i][j] = a[i][j];
    }
}
int dist(int x, int y, int X, int Y) {
    return (x-X)*(x-X)+(y-Y)*(y-Y);
}
int c[1000];
int b[100000];
int main() {
srand(time(NULL));
    int n;
    cin >> n;
    for(int i=0;i<n;i++) 
        for(int j=0;j<n;j++) {
            cin >> a[i][j];
            backup[i][j] = a[i][j];
            b[a[i][j]] = i*n+j;
        }
    double ans = (double)(1ll<<30);
    int index=-1;
    for(int X=0;X<15;X++) {
        for(int i=0;i<n;i++) {
            int mm = 4;
            int x = rand()%mm;
            for(int j=0;j<n;j++) x = rand()%mm;
            if(x<mm/2) s[i]=0;
            else s[i] = 1;
            c[i] = 0;
        }
        double score = 0;
        for(int i=1;i<=n*n;i++) {
            int mn = 1<<28;
            int ind = -1;
 
            for(int j=0;j<n;j++) {
                if(c[j]<n) {
                    int x;
                    if(s[j]) x = n-1-c[j];
                    else x = c[j];
                    if(dist(j,x,b[i]/n,b[i]%n)<mn) mn = dist(j,x,b[i]/n,b[i]%n), ind=j;
                }
            }
            int x;
            if(s[ind]) x = n-1-c[ind];
            else x = c[ind];
            score += mn;
            a[ind][x] = i;
            c[ind]++;
        }
        
        if(ans>score) {
            ans = score;
            copy(n);
        }
    }
  
        for(int i=0;i<n;i++, cout << endl) 
        for(int j=0;j<n;j++) cout << backup[i][j] << " ";
       // if(!check(n)) return -1;
    return 0;
}   
