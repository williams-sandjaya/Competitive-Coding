#include <cstdio>

int main() {
	int test, cs, a, b, m, i, k, n, div, mod, cnt, ans;
	int pow10[] = {1, 10, 100, 1000, 10000, 100000, 1000000};
	scanf("%d", &test);
	for(cs = 1; cs <= test; cs++) {
		scanf("%d %d", &a, &b);
		cnt = 0, k = a;
		
		while(k) k /= 10, cnt++;
		
		m = pow10[cnt - 1];
		ans = 0;
		
		for(i = a; i <= b; i++) {
			k = n = i, cnt = 0;
			
			while(true) {
				div = n / 10, mod = n % 10;
				n = div + m * mod; // the last line n this line adds the last digit of the number in it's first place
				if(n == k) break; // for numbers like 111,222,22
				if(n >= a && n <= b) cnt++;
			}
			ans += cnt;
		}
		
		ans /=2;
		printf("Case #%d: %d\n", cs, ans);
	}
	return 0;
}
