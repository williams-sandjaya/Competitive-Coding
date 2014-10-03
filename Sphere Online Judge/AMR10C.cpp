// problem wants you to factor the given number in such a way that each factor is a square free number. 
// possible cases ka sabse minimum case nikaalna hai
#include <cstdio>
#include <cmath>
using namespace std;

const int MAX = 1024;
const int LMT = 32;
const int LEN = 200;

int total;
int flag[MAX>>6], primes[LEN];

#define ifc(i) (flag[i>>6]&(1<<((i>>1)&31)))
#define isc(i) (flag[i>>6]|=(1<<((i>>1)&31)))

void sieve() {
	int i, j, k;
	total = 1;
	primes[0] = 2;
	for(i = 3; i < MAX; i+=2) {
		if(!ifc(i)) {
			primes[total++] = i; // primes[] store all the prime number from [0,1021]
			if(i < 32) for(j=i*i, k=i<<1; j < MAX; j+=k) isc(j);
		}
	}
}

int factor(int n) {
	int i, cnt, ret = 0;
	int rt = (int)sqrt((double)n); // given number ka square root nikalo
	
	for(i = 0; primes[i] <= rt; i++) {
          
		if(n % primes[i] == 0) {
			cnt = 0;
			while(n % primes[i] == 0) {
				cnt++;
				n /= primes[i];
			}
			
			rt = (int)sqrt((double)n);
			if(cnt > ret) ret = cnt;
		}
	}
	
	if(n > 1 && 1 > ret) ret = 1;
	return ret;
}

int main() {
	sieve(); // calls a function that stores all the prime number from [0,1021] in primes[]
	int t, n;
	scanf("%d", &t);
	while(t--) {
		scanf("%d", &n);
		printf("%d\n", factor(n));
	}
	return 0;
}

/*
for 6, its 6 itself, counting 1 
for 8, its 2, 2, 2, counting 3 
for 18, its 3, 6, counting 2 
for 24, its 2, 2, 6, counting 3 
problem wants you to factor the given number in such a way that each factor is a square free number. 
*/
