#include <cstdio>
#include <cstdlib>
#include <algorithm>
using namespace std;

const int MAX = 40004;
int x[MAX], y[MAX];

int main() {
	int test, idx, n, i, xx, yy, difx, dify;
	scanf("%d", &test);
	while(test--) {
		idx = 2;
		x[0] = y[0] = 0;
		scanf("%d%d%d", &xx, &yy, &n); // n is the clock tower
		x[1] = xx + 1, y[1] = yy + 1;
		for(i = 0; i < n; i++) {
			scanf("%d%d", &x[idx], &y[idx]);
			idx++;
		}
		sort(x, x + idx);
		sort(y, y + idx);
		difx = dify = 0;
		for(i = 1; i < idx; i++) difx = max(difx, x[i] - x[i-1] - 1); // x direction mein maximum nikaalta hai
		for(i = 1; i < idx; i++) dify = max(dify, y[i] - y[i-1] - 1); // y direction mein maximum nikaalta hai
		printf("%d\n", difx * dify);
	}
	return 0;
}
