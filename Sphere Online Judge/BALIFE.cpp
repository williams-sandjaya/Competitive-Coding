#include <cstdio>
using namespace std;

int main() {
	int a[9000], m=0, n, i, val, diff;
	while(scanf("%d", &n)==1 && n>0) {
		for(i = val = 0; i < n; i++) {
			scanf("%d", &a[i]);
			val += a[i];
		}
		if(val % n) printf("-1\n");
		else {
			val /= n; // how many jobs each processor should get
			for(i = 0; i < n-1; i++) {
				diff = a[i] - val; // finds the extra jobs required by each processor to acquire balance
				a[i+1] += diff; // adds them to the next neighbour
				if(diff < 0) diff = -diff; // negative difference turns to be positive now
				m = m > diff? m : diff; // m aur diff mein kon bara hai
			}
			printf("%d\n", m);
			m=0;
		}
	}
	return 0;
}
// In each round, every processor can transfer at most one job to each of its neighbors on the bus. 
