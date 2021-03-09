#include <stdio.h>
int main() {
	int i,times;
    scanf("%d", &times);
    for(i=1;i<=times;i++)
    {
        int n, rev = 0, remainder;
        scanf("%d", &n);
        while (n != 0) {
        remainder = n % 10;
        rev = rev * 10 + remainder;
        n /= 10;
        }
        printf("\n%d\n", rev);
        
    }
	return 0;
}
