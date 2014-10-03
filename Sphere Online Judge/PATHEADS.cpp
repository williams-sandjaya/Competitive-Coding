#include <cstdio>
using namespace std;

const int MAX = 1000001; // for the slip numbers
const int N = 100001; // for cows

int cnt[MAX], res[MAX], a[N];

int main() {
	int i, j, n, mmax = -1;
	scanf("%d", &n);
	for(i = 0; i < n; i++) {
		scanf("%d", &a[i]);
		mmax = a[i] > mmax? a[i] : mmax; // initialised by a[0] // contains the highest number stored in a[]
		cnt[a[i]]++; //cnt[] tracks how many times the same number is stored in a[]
	}
	for(i = 0; i < n; i++) {
		if(cnt[a[i]]) { 
			for(j = a[i]; j <= mmax; j += a[i])
				res[j] += cnt[a[i]];
			cnt[a[i]] = 0;
		}
	}
	for(i = 0; i < n; i++) printf("%d\n", res[a[i]] - 1 + cnt[1]); // excluding the number itself and adding all the 1's
	return 0;
}
