#include <cstdio>

const int MAXN = 200000;

int L[MAXN], R[MAXN], lo[MAXN], hi[MAXN];

int main() {
	int test, cs, i, n, sol, l, r;
	scanf("%d", &test);
	for(cs = 1; cs <= test; cs++) {
		scanf("%d", &n); // number of rods
		for(i = 1; i <= n; i++) { // for 1st rod till nth rod
			scanf("%d %d", &L[i], &R[i]); // takes left child and right child
			if(L[i] == -1) L[i] = 0; // left child is a hanging star
			if(R[i] == -1) R[i] = 0; // right child is a hanging star
		}
		for(i = n, sol = 0; i >= 1; i--) { // ulta loop hai
              
			l = L[i], r = R[i]; // l=left most child // r= right most child
			
			if(hi[r] > lo[l]) sol++; // if according to rule(ii)
			
			lo[i] = (lo[l] < lo[r] ? lo[l] : lo[r]) + 1; // jo chota hai +1
			hi[i] = (hi[l] > hi[r] ? hi[l] : hi[r]) + 1; // jo bara hai +1
			
			if((lo[l] != hi[l] && lo[r] != hi[r]) || (hi[i] - lo[i] > 1)) { // checks rule(i)
				printf("-1\n");
				break;//comes out of the loop
			}
			
		}
		if(i < 1) printf("%d\n", sol); // equal sign nahi hoga
	}
	return 0; 
}
