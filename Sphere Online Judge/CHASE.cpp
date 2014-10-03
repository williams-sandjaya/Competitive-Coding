#include <cstdio>
#include <algorithm>
using namespace std;

struct data { int x, y; };
const int MAX = 2222;
data d[MAX];
double slope[MAX];

int main() {
	int t, n, i, j, result, ng, ns, more;
	scanf("%d", &t);
	while(t--) {
		scanf("%d", &n);
		result = 0;
		for(i = 0; i < n; i++) scanf("%d%d", &d[i].x, &d[i].y);
		
		for(i = 0; i < n; i++) { // for loop starts
			ng = ns = more = 0;
			for(j = i + 1; j < n; j++) {
				if(d[j].y == d[i].y) ng++; // for slope = infinity
				else slope[ns++] = (double)(d[i].x-d[j].x)/(double)(d[i].y-d[j].y);
			}
			
			result = max(ng, result);
			sort(slope, slope + ns);
			
			for(j = 0; j < ns; j++) {
				if(!j || slope[j-1] < slope[j]) more = 1; // array is in increasing order
				else more++; // agar slope ek raha toh
				result = max(result, more);
			}
			
		} // for loop ends
		printf("%d\n", result);
	}
	return 0;
}
