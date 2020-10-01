#include <bits/stdc++.h>
using namespace std;

int main() {
	int t, n;
	scanf("%d", &t);
	
	for(int i = 1; i <= t; i++){
		scanf("%d", &n);
		int sq = sqrt(n);
		
		for(int j = 1; j <= sq; j++){
			(j == 1) ? printf("%d", j * j) : printf(" %d", j * j);
		}
		printf("\n");
	}
	return 0;
}
