#include <iostream>
using namespace std;
int main() {
    int a, b;
    scanf ( "%d%d", &a, &b );
    int limit = min(a,b);
    int ans = 1;
    for ( int i = 1; i <= min( a, b ); i++ )
    	ans *= i;
    printf ( "%d\n", ans );
}
