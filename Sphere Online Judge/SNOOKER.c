#include <stdio.h>

unsigned gcd(unsigned a, unsigned b)
{
	while(b) 
    b ^= a ^= b ^= a %= b;
    
	return a;
}

int main()
{
	unsigned g, m, n;
	while(1)
	{
        scanf("%u %u", &m, &n);
        if(m==0 && n==0) break;
		g = gcd(m,n);
		m /= g; n /= g;
	//	printf("gcd = %d\n",g);
		//printf("m=%d n=%d\n",m,n);
		printf("%u\n", (m + n - 2) << 2); //(m+n-2)*4
	}
	return 0;
}
