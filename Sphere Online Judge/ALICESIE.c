#include <stdio.h>

int main() {
	int test, n;
	scanf("%d", &test);
	while(test--) {
		scanf("%d", &n);
		printf("%d\n", (n + 1) >> 1); // (n+1)/2
	}
	return 0;
}


