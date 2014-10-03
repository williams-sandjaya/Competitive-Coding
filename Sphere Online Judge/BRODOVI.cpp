#include <cstdio>
#include <cstring>
using namespace std;

int a[5000];
bool f[5000]; // marks the position of the numbers stored in a[]

int main() {
	int i, j, d, n, last, cnt = 0;
	scanf("%d", &n);
	for(i = 0; i < n; i++) scanf("%d", &a[i]);
	for(i = 1; i < n; i++) {
          
		if(!f[i]) { //!0
			f[i] = 1;
			d = a[i] - 1; // difference of days with respect to day 1
			last = a[i];
			cnt++;
			for(j = i + 1; j < n; j++) { // checks if there are other terms with the same d
				if(last + d == a[j]) {
					f[j] = 1;
					last = a[j];
				}
			}
		}
	}
	printf("%d\n", cnt);
	return 0;
}
