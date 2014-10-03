/*
Input:
143 10 (Divisors - 13 and 11)
143 20 (Divisors - 13 and 11)
667 20 (Divisors - 23 and 29)
667 30 (Divisors - 23 and 29)
2573 30 (Divisors - 31 and 83)
2573 40 (Divisors - 31 and 83)
0 0
SAB FACTORS GIVEN VALUE SE BARA HONA CHAHIYE
Output:
GOOD
BAD 11
GOOD
BAD 23
GOOD
BAD 31

*/

#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <iostream>
#include <algorithm>
using namespace std;
const int INF = 0x3f3f3f3f;
const int MAX = 1000000;
const int LMT = 1000;
const int LEN = 78500;
int flag[MAX>>6];
int primes[LEN], total;
#define chk(x) (flag[x>>6]&(1<<((x>>1)&31)))
#define bad(x) (flag[x>>6]|=(1<<((x>>1)&31)))

void sieve() { // generates an array of primes
	int i, j, k;
	primes[0] = 2, total = 1;
	for(i = 3; i < MAX; i+=2) {
		if(chk(i)) continue;
		primes[total++] = i;
		if(i >= LMT) continue;
		for(j=i*i, k=i<<1; j < MAX; j+=k) bad(j);
	}
	primes[total] = INF;
}

int mod(char *n, int d) {
	int i, mod;
	for(i = mod = 0; n[i]; i++)
		mod = (mod * 10 + n[i] - '0') % d;
	return mod;
}

int main() {
	sieve(); // generates an array of primes
	char num1[128];
	int N, L, i;
	while(scanf("%s%d", num1, &L)==2 && L) {
		for(i = 0; primes[i] < L; i++)
			if(!mod(num1, primes[i])) // ! sign kyunki sab factors L ke upar hona chahiye
				break;
				
		if(primes[i] >= L) printf("GOOD\n");
		else printf("BAD %d\n", primes[i]);
	}
	return 0;
}
