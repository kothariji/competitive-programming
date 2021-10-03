#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;

int main() {
 int t, a, b;
 scanf("%d", &t);
 while(t--) {
  scanf("%d%d", &a, &b);
  printf("%d %d\n", max(a, b), a+b);
 }
 return 0;
}