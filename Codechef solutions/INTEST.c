//Author: Rakshit Naidu

#include <stdio.h> 

int main() {
	// Read the input n, k
	int n, k;
	scanf("%d %d", &n, &k);

	int ans = 0;

	for (int i = 0; i < n; i++) {
		int t;
		scanf("%d", &t);
		
		if (t % k == 0) {
			ans++;
		}		
	}

	printf("%d\n", ans);
	
	return 0;
}
