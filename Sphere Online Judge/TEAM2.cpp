#include <cstdio>
#include <algorithm>
using namespace std;

#define sol(a,b,c,d) max(max(a,c)+max(b,d) , max(a,b)+max(c,d))

int main() {
	int a, b, c, d, r1, r2, r3,r4,r5,r6, cs = 1;
	while(scanf("%d %d %d %d", &a, &b, &c, &d) == 4) {
		r1 = sol(a, b, c, d);
		r2 = sol(a, b, d, c);
		r3 = sol(a, c, b, d);
		r4 = sol(a, c, d, b);
		r5 = sol(a, d, b, c);
		r6 = sol(a, d, c, b);
		
		r1 = max(r1, r2);
		r1 = max(r1, r3);
		r1 = max(r1, r4);
		r1 = max(r1, r5);
		r1 = max(r1, r6);
		
		printf("Case %d: %d\n", cs++, r1);
	}
	return 0;
}
