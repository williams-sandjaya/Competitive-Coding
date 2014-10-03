#include <cstdio>
using namespace std;

int main() {
	int g, a, t, d, i;
	long long p, k; //  p is the total number of games, and {(1LL<<i) - k} is the number of teams your program determined it must add.
	while(scanf("%d%d%d%d", &g, &t, &a, &d)==4 && g > 0) {
		k = (long long) g * a + d; // total number of teams in knockout // normal advancing + direct advancing
		for(i = 0; (1LL<<i) < k; i++); //e1 << e2 is e1 * 2e2.
		p =  (long long) t * (t-1) / 2 * g + (1LL<<i) - 1;
		printf("%d*%d/%d+%d=%lld+%lld\n", g, a, t, d, p, (1LL<<i) - k);
	}
	return 0;
}
