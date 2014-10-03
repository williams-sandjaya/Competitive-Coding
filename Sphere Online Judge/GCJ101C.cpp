#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <algorithm>
using namespace std;
#define SL(x, n) ((x)<<(n)) // e1 << e2 is e1 * 2e2.
#define i64 long long

int main() {

	int test, cs = 1, k, i;
	i64 l, p, c, x;
	scanf("%d", &test);
	while(test--) {
		scanf("%lld%lld%lld", &l, &p, &c);
		k = i = 0; x = l;
		while(x < p) {
			x *= c;
			k++;
		}
		while(SL(1,i) < k) i++;
		printf("Case #%d: %d\n", cs++, i);
	}
	return 0;
}
