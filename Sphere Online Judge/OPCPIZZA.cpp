#include <cstdio>
#include <algorithm>
using namespace std;

const int MAX = 100000;

int a[MAX];

int main() {
	int n, m, i, j, ans, test;
	scanf("%d", &test);
	while(test--) {
		scanf("%d %d", &n, &m);
		for(i = 0; i < n; i++) scanf("%d", &a[i]);
		sort(a, a + n);
		for(i = ans = 0; i < n; i++) {
			if(binary_search(a,a+n,m-a[i]))
			ans++;
		}
		printf("%d\n", ans/2);
	}
	system("pause");
	return 0;
}
