#include <bits/stdc++.h>
using namespace std;
long long n, i;
 
int main() {
  scanf("%lld", &n);
 
  for (i=1LL; i <= n; i++) {
    printf("%lld\n", i*i*(i*i-1)/2-4*(i-1)*(i-2));
  }
  