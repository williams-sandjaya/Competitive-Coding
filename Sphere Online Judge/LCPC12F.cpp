#include <cstdio>
#include<iostream>
#include <algorithm>
using namespace std;

typedef long long i64;

const int MAX = 100000;

int a[MAX];

int main() {
	long long int test, cs, n, i, ub, lb, x; i64 res;
	scanf("%lld", &test);
	for(cs = 1; cs <= test; cs++) {
		scanf("%lld%lld", &x, &n);
		for(i = 0; i < n; i++) scanf("%lld", &a[i]);
		sort(a, a + n);
		for(res = i = 0; i < n; i++) {
			ub = upper_bound(a, a + n, x-a[i]) - a;
			lb = lower_bound(a, a + n, x-a[i]) - a;
			res += ub - lb - (lb <= i && i < ub);
			/*if (binary_search(a,a+n,x-a[i]))
            res++;*/
          //  printf("%d %d %d\n",ub,lb,(lb <= i && i < ub));
		}
		printf("%lld. %lld\n", cs, res/2);
	}
	system("pause");
	return 0;
}
