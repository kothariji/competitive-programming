#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;

const int lim=1e6+5;
int a[lim];

int main() {
    int t;
    scanf("%d", &t);
    for(int i=0; i<t; i++) scanf("%d", &a[i]);
    sort(a, a+t);
    for(int i=0; i<t; i++) printf("%d\n", a[i]);
    return 0;
}